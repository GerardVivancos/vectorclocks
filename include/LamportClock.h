class LamportClock
{
	public:
		LamportClock() {};
		LamportClock(int t);
		LamportClock clone () const { return *this; };
		int getTimestamp () { return timestamp; }
		void merge (LamportClock);
		void _setTimestamp(int t) { timestamp = t; }

	private:
		int timestamp = 0;
		void tick () { timestamp++; }
		void setTimestamp (int timestamp) ;
};