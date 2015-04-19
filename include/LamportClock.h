class LamportClock
{
	public:
		LamportClock() { LamportClock(DEFAULT_TIMESTAMP); }
		LamportClock(int t) { setTimestamp(t); }
		LamportClock clone() const { return *this; }
		int getTimestamp() { return timestamp; }
		//debug purposes only
		void _setTimestamp(int t) { setTimestamp(t); }

	private:
		const int DEFAULT_TIMESTAMP = 0;
		int timestamp = DEFAULT_TIMESTAMP;

		void tick() { timestamp++; }
		void merge(LamportClock);
		void setTimestamp(int t) { timestamp = t; };
};