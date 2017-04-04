#ifndef _F1SPIRIT_ENEMYCCAR
#define _F1SPIRIT_ENEMYCCAR


class EnemyCCar: public RacingCCar
{

	public:
		EnemyCCar();
		~EnemyCCar();

		bool cycle(class CRoadPiece *current_piece, CTrack *track, List<RacingCCar> *cars, List<class F1S_SFX> *sfx, int sfx_volume, List<RacingCCar> **car_grid, int car_grid_sx, int car_grid_sy);

		void EnemyAI(bool *accelerate, bool *brake, int *turn, float *offset, int terrain, List<RacingCCar> *cars, List<RacingCCar> **car_grid, int car_grid_sx, int car_grid_sy);

		virtual bool load_status(FILE *fp);
		virtual bool save_status(FILE *fp);

		int AI_type;
		int road_offset_change;
		float road_offset;
		float offset_dif;

		float ahead_rangle, ahead2_rangle;
		float rangle;


};

#endif
