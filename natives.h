static void WAIT(int ms) { invoke<Void>(0x2224A20, ms); }
static int START_NEW_SCRIPT(const char* scriptName, int stackSize) { return invoke<int>(0x2224D50, scriptName, stackSize); }
static int START_NEW_SCRIPT_WITH_ARGS(const char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0x2224F20, scriptName, args, argCount, stackSize); }
static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke<int>(0x2224F60, scriptHash, stackSize); }
static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0x2224FD0, scriptHash, args, argCount, stackSize); }
static int TIMERA() { return invoke<int>(0x22263A0); }
static int TIMERB() { return invoke<int>(0x22263C0); }
static void SETTIMERA(int value) { invoke<Void>(0x22263E0, value); }
static void SETTIMERB(int value) { invoke<Void>(0x2226410, value); }
static float TIMESTEP() { return invoke<float>(0x2226440); }
static float SIN(float value) { return invoke<float>(0x2226460, value); }
static float COS(float value) { return invoke<float>(0x2226490, value); }
static float SQRT(float value) { return invoke<float>(0x22264D0, value); }
static float POW(float base, float exponent) { return invoke<float>(0x22264F0, base, exponent); }
static float LOG10(float value) { return invoke<float>(0x2226520, value); }
static float VMAG(float x, float y, float z) { return invoke<float>(0x2226550, x, y, z); }
static float VMAG2(float x, float y, float z) { return invoke<float>(0x2226590, x, y, z); }
static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x22265C0, x1, y1, z1, x2, y2, z2); }
static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x2226610, x1, y1, z1, x2, y2, z2); }
static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0x2226650, value, bitShift); }
static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x2226670, value, bitShift); }
static int FLOOR(float value) { return invoke<int>(0x2226690, value); }
static int CEIL(float value) { return invoke<int>(0x22266B0, value); }
static int ROUND(float value) { return invoke<int>(0x22266D0, value); }
static float TO_FLOAT(int value) { return invoke<float>(0x22266F0, value); }
static void SET_THIS_THREAD_PRIORITY(int priority) { invoke<Void>(0x2226700, priority); }
static BOOL APP_DATA_VALID() { return invoke<BOOL>(0xD7A8D0); }
static int APP_GET_INT(const char* property) { return invoke<int>(0xD7A8F0, property); }
static float APP_GET_FLOAT(const char* property) { return invoke<float>(0xD7A9B0, property); }
static const char* APP_GET_STRING(const char* property) { return invoke<const char*>(0xD7AA80, property); }
static void APP_SET_INT(const char* property, int value) { invoke<Void>(0xD7AB50, property, value); }
static void APP_SET_FLOAT(const char* property, float value) { invoke<Void>(0xD7AB60, property, value); }
static void APP_SET_STRING(const char* property, const char* value) { invoke<Void>(0xD7AB80, property, value); }
static void APP_SET_APP(const char* appName) { invoke<Void>(0xD7AB90, appName); }
static void APP_SET_BLOCK(const char* blockName) { invoke<Void>(0xD7AC70, blockName); }
static void APP_CLEAR_BLOCK() { invoke<Void>(0xD7ACC0); }
static void APP_CLOSE_APP() { invoke<Void>(0xD7AD20); }
static void APP_CLOSE_BLOCK() { invoke<Void>(0xD7AD60); }
static BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xD7ADC0); }
static BOOL APP_HAS_SYNCED_DATA(const char* appName) { return invoke<BOOL>(0xD7ADE0, appName); }
static void APP_SAVE_DATA() { invoke<Void>(0xD7AE20); }
static int APP_GET_DELETED_FILE_STATUS() { return invoke<int>(0xD7AE40); }
static BOOL APP_DELETE_APP_DATA(const char* appName) { return invoke<BOOL>(0xD7AE60, appName); }
static void PLAY_PED_RINGTONE(const char* ringtoneName, Ped ped, BOOL p2) { invoke<Void>(0xD82850, ringtoneName, ped, p2); }
static BOOL IS_PED_RINGTONE_PLAYING(Ped ped) { return invoke<BOOL>(0xD82870, ped); }
static void STOP_PED_RINGTONE(Ped ped) { invoke<Void>(0xD828E0, ped); }
static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0xD82930); }
static BOOL IS_MOBILE_INTERFERENCE_ACTIVE() { return invoke<BOOL>(0xD82970); }
static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0xD829E0); }
static void ADD_LINE_TO_CONVERSATION(int index, const char* p1, const char* p2, int p3, int p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, int p9, BOOL p10, BOOL p11, BOOL p12) { invoke<Void>(0xD82A00, index, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void ADD_PED_TO_CONVERSATION(int index, Ped ped, const char* p2) { invoke<Void>(0xD82AF0, index, ped, p2); }
static void SET_POSITION_FOR_NULL_CONV_PED(Any p0, float p1, float p2, float p3) { invoke<Void>(0xD82B70, p0, p1, p2, p3); }
static void SET_ENTITY_FOR_NULL_CONV_PED(int p0, Entity entity) { invoke<Void>(0xD82BE0, p0, entity); }
static void SET_MICROPHONE_POSITION(BOOL toggle, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<Void>(0xD82C40, toggle, x1, y1, z1, x2, y2, z2, x3, y3, z3); }
static void SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(BOOL p0) { invoke<Void>(0xD82D30, p0); }
static void SET_CONVERSATION_AUDIO_PLACEHOLDER(BOOL p0) { invoke<Void>(0xD82D50, p0); }
static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xD82D70, p0, p1); }
static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xD82DC0, p0, p1); }
static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xD82E10, p0, p1, p2, p3); }
static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xD82E70, p0, p1, p2, p3); }
static void START_PRELOADED_CONVERSATION() { invoke<Void>(0xD82ED0); }
static BOOL GET_IS_PRELOADED_CONVERSATION_READY() { return invoke<BOOL>(0xD82EF0); }
static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0xD82F20); }
static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0xD82F60); }
static int GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<int>(0xD82F90); }
static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { invoke<Void>(0xD82FC0, p0); }
static void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0xD82FF0); }
static int STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<int>(0xD83010, p0); }
static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0xD83040); }
static void INTERRUPT_CONVERSATION(Ped ped, const char* voiceline, const char* speaker) { invoke<Void>(0xD83050, ped, voiceline, speaker); }
static void INTERRUPT_CONVERSATION_AND_PAUSE(Ped ped, const char* p1, const char* speaker) { invoke<Void>(0xD83050, ped, p1, speaker); }
static int GET_VARIATION_CHOSEN_FOR_SCRIPTED_LINE(Any* p0) { return invoke<int>(0xD83150, p0); }
static void SET_NO_DUCKING_FOR_CONVERSATION(BOOL p0) { invoke<Void>(0xD831B0, p0); }
static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { invoke<Void>(0xD831D0, p0); }
static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0xD831D0); }
static BOOL REQUEST_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD831F0, audioBank, p1, p2); }
static BOOL REQUEST_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD83230, audioBank, p1, p2); }
static BOOL REQUEST_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD83270, audioBank, p1, p2); }
static BOOL HINT_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD832B0, audioBank, p1, p2); }
static BOOL HINT_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD832D0, audioBank, p1, p2); }
static BOOL HINT_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD832F0, audioBank, p1, p2); }
static void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0xD83310); }
static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0xD83320); }
static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0xD83330, audioBank); }
static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0xD83350); }
static void UNHINT_AMBIENT_AUDIO_BANK() { invoke<Void>(0xD832D0); }
static void UNHINT_SCRIPT_AUDIO_BANK() { invoke<Void>(0xD832F0); }
static void UNHINT_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0xD83380, audioBank); }
static int GET_SOUND_ID() { return invoke<int>(0xD833A0); }
static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0xD833D0, soundId); }
static void PLAY_SOUND(int soundId, const char* audioName, const char* audioRef, BOOL p3, Any p4, BOOL p5) { invoke<Void>(0xD833F0, soundId, audioName, audioRef, p3, p4, p5); }
static void PLAY_SOUND_FRONTEND(int soundId, const char* audioName, const char* audioRef, BOOL p3) { invoke<Void>(0xD833F0, soundId, audioName, audioRef, p3); }
static void PLAY_DEFERRED_SOUND_FRONTEND(const char* soundName, const char* soundsetName) { invoke<Void>(0xD83450, soundName, soundsetName); }
static void PLAY_SOUND_FROM_ENTITY(int soundId, const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p5) { invoke<Void>(0xD833F0, soundId, audioName, entity, audioRef, isNetwork, p5); }
static void PLAY_SOUND_FROM_ENTITY_HASH(int soundId, Hash model, Entity entity, Hash soundSetHash, Any p4, Any p5) { invoke<Void>(0xD833F0, soundId, model, entity, soundSetHash, p4, p5); }
static void PLAY_SOUND_FROM_COORD(int soundId, const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, int range, BOOL p8) { invoke<Void>(0xD833F0, soundId, audioName, x, y, z, audioRef, isNetwork, range, p8); }
static void UPDATE_SOUND_COORD(int soundId, float x, float y, float z) { invoke<Void>(0xD83660, soundId, x, y, z); }
static void STOP_SOUND(int soundId) { invoke<Void>(0xD836D0, soundId); }
static int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<int>(0xD836F0, soundId); }
static int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return invoke<int>(0xD833A0, netId); }
static void SET_VARIABLE_ON_SOUND(int soundId, const char* variable, float p2) { invoke<Void>(0xD83750, soundId, variable, p2); }
static void SET_VARIABLE_ON_STREAM(const char* variable, float p1) { invoke<Void>(0xD83770, variable, p1); }
static void OVERRIDE_UNDERWATER_STREAM(const char* p0, BOOL p1) { invoke<Void>(0xD83790, p0, p1); }
static void SET_VARIABLE_ON_UNDER_WATER_STREAM(const char* variableName, float value) { invoke<Void>(0xD837B0, variableName, value); }
static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0xD837D0, soundId); }
static void PLAY_PED_AMBIENT_SPEECH_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0xD83800, ped, speechName, speechParam, p3); }
static void PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0xD83820, ped, speechName, speechParam, p3); }
static void PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Ped ped, const char* speechName, const char* voiceName, const char* speechParam, BOOL p4) { invoke<Void>(0xD83840, ped, speechName, voiceName, speechParam, p4); }
static void PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(const char* speechName, const char* voiceName, float x, float y, float z, const char* speechParam) { invoke<Void>(0xD83870, speechName, voiceName, x, y, z, speechParam); }
static void OVERRIDE_TREVOR_RAGE(const char* voiceEffect) { invoke<Void>(0xD83900, voiceEffect); }
static void RESET_TREVOR_RAGE() { invoke<Void>(0xD83920); }
static void SET_PLAYER_ANGRY(Ped ped, BOOL toggle) { invoke<Void>(0xD83930, ped, toggle); }
static void PLAY_PAIN(Ped ped, int painID, int p1, Any p3) { invoke<Void>(0xD83990, ped, painID, p1, p3); }
static void RELEASE_WEAPON_AUDIO() { invoke<Void>(0xD839B0); }
static void ACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0xD839C0, mode); }
static void DEACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0xD839C0, mode); }
static void SET_AMBIENT_VOICE_NAME(Ped ped, const char* name) { invoke<Void>(0xD83A40, ped, name); }
static void SET_AMBIENT_VOICE_NAME_HASH(Ped ped, Hash hash) { invoke<Void>(0xD83A40, ped, hash); }
static Hash GET_AMBIENT_VOICE_NAME_HASH(Ped ped) { return invoke<Hash>(0xD83B10, ped); }
static void SET_PED_VOICE_FULL(Ped ped) { invoke<Void>(0xD83B70, ped); }
static void SET_PED_RACE_AND_VOICE_GROUP(Ped ped, int p1, Hash voiceGroup) { invoke<Void>(0xD83BD0, ped, p1, voiceGroup); }
static void SET_PED_VOICE_GROUP(Ped ped, Hash voiceGroupHash) { invoke<Void>(0xD83C40, ped, voiceGroupHash); }
static void SET_PED_VOICE_GROUP_FROM_RACE_TO_PVG(Ped ped, Hash voiceGroupHash) { invoke<Void>(0xD83C40, ped, voiceGroupHash); }
static void SET_PED_GENDER(Ped ped, BOOL p1) { invoke<Void>(0xD83D30, ped, p1); }
static void STOP_CURRENT_PLAYING_SPEECH(Ped ped) { invoke<Void>(0xD83D90, ped); }
static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped) { invoke<Void>(0xD83DE0, ped); }
static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xD83E30, ped); }
static BOOL IS_SCRIPTED_SPEECH_PLAYING(Ped p0) { return invoke<BOOL>(0xD83EA0, p0); }
static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xD83F10, ped); }
static BOOL IS_ANY_POSITIONAL_SPEECH_PLAYING() { return invoke<BOOL>(0xD83FA0); }
static BOOL DOES_CONTEXT_EXIST_FOR_THIS_PED(Ped ped, const char* speechName, BOOL p2) { return invoke<BOOL>(0xD84000, ped, speechName, p2); }
static BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped) { return invoke<BOOL>(0xD840E0, ped); }
static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { invoke<Void>(0xD84150, ped, toggle); }
static void PLAY_ANIMAL_VOCALIZATION(Ped pedHandle, int p1, const char* speechName) { invoke<Void>(0xD841B0, pedHandle, p1, speechName); }
static BOOL IS_ANIMAL_VOCALIZATION_PLAYING(Ped pedHandle) { return invoke<BOOL>(0xD84280, pedHandle); }
static void SET_ANIMAL_MOOD(Ped animal, int mood) { invoke<Void>(0xD842F0, animal, mood); }
static BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0xD843B0); }
static void SET_MOBILE_PHONE_RADIO_STATE(BOOL state) { invoke<Void>(0xD843C0, state); }
static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0xD843E0); }
static const char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<const char*>(0xD84420); }
static const char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<const char*>(0xD84450, radioStation); }
static int GET_PLAYER_RADIO_STATION_GENRE() { return invoke<int>(0xD84490); }
static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0xD844C0); }
static BOOL IS_RADIO_FADED_OUT() { return invoke<BOOL>(0xD844F0); }
static void SET_RADIO_RETUNE_UP() { invoke<Void>(0xD84520); }
static void SET_RADIO_RETUNE_DOWN() { invoke<Void>(0xD84540); }
static void SET_RADIO_TO_STATION_NAME(const char* stationName) { invoke<Void>(0xD84560, stationName); }
static void SET_VEH_RADIO_STATION(Vehicle vehicle, const char* radioStation) { invoke<Void>(0xD84580, vehicle, radioStation); }
static void SET_VEH_HAS_NORMAL_RADIO(Vehicle vehicle) { invoke<Void>(0xD84620, vehicle); }
static BOOL IS_VEHICLE_RADIO_ON(Vehicle vehicle) { return invoke<BOOL>(0xD84670, vehicle); }
static void SET_VEH_FORCED_RADIO_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0xD846E0, vehicle); }
static void SET_EMITTER_RADIO_STATION(const char* emitterName, const char* radioStation, Any p2) { invoke<Void>(0xD84730, emitterName, radioStation, p2); }
static void SET_STATIC_EMITTER_ENABLED(const char* emitterName, BOOL toggle) { invoke<Void>(0xD84760, emitterName, toggle); }
static void LINK_STATIC_EMITTER_TO_ENTITY(const char* emitterName, Entity entity) { invoke<Void>(0xD84790, emitterName, entity); }
static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<Void>(0xD847F0, radioStation); }
static void SET_FRONTEND_RADIO_ACTIVE(BOOL active) { invoke<Void>(0xD84810, active); }
static void UNLOCK_MISSION_NEWS_STORY(int newsStory) { invoke<Void>(0xD84860, newsStory); }
static BOOL IS_MISSION_NEWS_STORY_UNLOCKED(int newsStory) { return invoke<BOOL>(0xD84870, newsStory); }
static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0xD84890); }
static void PLAY_END_CREDITS_MUSIC(BOOL play) { invoke<Void>(0xD848C0, play); }
static void SKIP_RADIO_FORWARD() { invoke<Void>(0xD848F0); }
static void FREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0xD84900, radioStation); }
static void UNFREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0xD84900, radioStation); }
static void SET_RADIO_AUTO_UNFREEZE(BOOL toggle) { invoke<Void>(0xD84960, toggle); }
static void SET_INITIAL_PLAYER_STATION(const char* radioStation) { invoke<Void>(0xD84980, radioStation); }
static void SET_USER_RADIO_CONTROL_ENABLED(BOOL toggle) { invoke<Void>(0xD849B0, toggle); }
static void SET_RADIO_TRACK(const char* radioStation, const char* radioTrack) { invoke<Void>(0xD84A00, radioStation, radioTrack); }
static void SET_RADIO_TRACK_WITH_START_OFFSET(const char* radioStationName, const char* mixName, int p2) { invoke<Void>(0xD84A00, radioStationName, mixName, p2); }
static void SET_NEXT_RADIO_TRACK(const char* radioName, const char* radioTrack, const char* p2, const char* p3) { invoke<Void>(0xD84A80, radioName, radioTrack, p2, p3); }
static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD84AF0, vehicle, toggle); }
static BOOL CAN_VEHICLE_RECEIVE_CB_RADIO(Vehicle vehicle) { return invoke<BOOL>(0xD84B40, vehicle); }
static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL toggle) { invoke<Void>(0xD84BC0, toggle); }
static BOOL DOES_PLAYER_VEH_HAVE_RADIO() { return invoke<BOOL>(0xD84C10); }
static BOOL IS_PLAYER_VEH_RADIO_ENABLE() { return invoke<BOOL>(0xD84C50); }
static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD84C90, vehicle, toggle); }
static void SET_POSITIONED_PLAYER_VEHICLE_RADIO_EMITTER_ENABLED(Any p0) { invoke<Void>(0xD84D00, p0); }
static void SET_CUSTOM_RADIO_TRACK_LIST(const char* radioStation, const char* trackListName, BOOL p2) { invoke<Void>(0xD84D20, radioStation, trackListName, p2); }
static void CLEAR_CUSTOM_RADIO_TRACK_LIST(const char* radioStation) { invoke<Void>(0xD84DA0, radioStation); }
static int GET_NUM_UNLOCKED_RADIO_STATIONS() { return invoke<int>(0xD84DC0); }
static int FIND_RADIO_STATION_INDEX(Hash stationNameHash) { return invoke<int>(0xD84DD0, stationNameHash); }
static void SET_RADIO_STATION_MUSIC_ONLY(const char* radioStation, BOOL toggle) { invoke<Void>(0xD84E10, radioStation, toggle); }
static void SET_RADIO_FRONTEND_FADE_TIME(float fadeTime) { invoke<Void>(0xD84E40, fadeTime); }
static void UNLOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { invoke<Void>(0xD84E60, radioStation, trackListName); }
static void LOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { invoke<Void>(0xD84EA0, radioStation, trackListName); }
static void UPDATE_UNLOCKABLE_DJ_RADIO_TRACKS(BOOL enableMixes) { invoke<Void>(0xD84F10, enableMixes); }
static void LOCK_RADIO_STATION(const char* radioStationName, BOOL toggle) { invoke<Void>(0xD84F20, radioStationName, toggle); }
static void SET_RADIO_STATION_AS_FAVOURITE(const char* radioStation, BOOL toggle) { invoke<Void>(0xD84F70, radioStation, toggle); }
static BOOL IS_RADIO_STATION_FAVOURITED(const char* radioStation) { return invoke<BOOL>(0xD84FB0, radioStation); }
static BOOL GET_NEXT_AUDIBLE_BEAT(float* out1, float* out2, int* out3) { return invoke<BOOL>(0xD84FF0, out1, out2, out3); }
static void FORCE_MUSIC_TRACK_LIST(const char* radioStation, const char* trackListName, int milliseconds) { invoke<Void>(0xD85030, radioStation, trackListName, milliseconds); }
static int GET_CURRENT_TRACK_PLAY_TIME(const char* radioStationName) { return invoke<int>(0xD85090, radioStationName); }
static Hash GET_CURRENT_TRACK_SOUND_NAME(const char* radioStationName) { return invoke<Hash>(0xD850D0, radioStationName); }
static void SET_VEHICLE_MISSILE_WARNING_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85110, vehicle, toggle); }
static void SET_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1, BOOL p2) { invoke<Void>(0xD85180, zoneName, p1, p2); }
static void CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1) { invoke<Void>(0xD851C0, zoneName, p1); }
static void SET_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xD85200, ambientZone, p1, p2); }
static void CLEAR_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1) { invoke<Void>(0xD85290, ambientZone, p1); }
static void SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xD85180, ambientZone, p1, p2); }
static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xD85200, ambientZone, p1, p2); }
static BOOL IS_AMBIENT_ZONE_ENABLED(const char* ambientZone) { return invoke<BOOL>(0xD853E0, ambientZone); }
static void REFRESH_CLOSEST_OCEAN_SHORELINE() { invoke<Void>(0xD85450); }
static void SET_CUTSCENE_AUDIO_OVERRIDE(const char* name) { invoke<Void>(0xD85460, name); }
static void SET_VARIABLE_ON_SYNCH_SCENE_AUDIO(const char* variableName, float value) { invoke<Void>(0xD85490, variableName, value); }
static int PLAY_POLICE_REPORT(const char* name, float p1) { return invoke<int>(0xD854D0, name, p1); }
static void CANCEL_ALL_POLICE_REPORTS() { invoke<Void>(0xD85500); }
static void BLIP_SIREN(Vehicle vehicle) { invoke<Void>(0xD85510, vehicle); }
static void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL override, int hornHash) { invoke<Void>(0xD85560, vehicle, override, hornHash); }
static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0xD85600, vehicle); }
static void SET_AGGRESSIVE_HORNS(BOOL toggle) { invoke<Void>(0xD85660, toggle); }
static void SET_RADIO_POSITION_AUDIO_MUTE(BOOL p0) { invoke<Void>(0xD85680, p0); }
static void SET_VEHICLE_CONVERSATIONS_PERSIST(BOOL p0, BOOL p1) { invoke<Void>(0xD85690, p0, p1); }
static void SET_VEHICLE_CONVERSATIONS_PERSIST_NEW(BOOL p0, BOOL p1, BOOL p2) { invoke<Void>(0xD85690, p0, p1, p2); }
static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0xD856F0); }
static int GET_STREAM_PLAY_TIME() { return invoke<int>(0xD85720); }
static BOOL LOAD_STREAM(const char* streamName, const char* soundSet) { return invoke<BOOL>(0xD85750, streamName, soundSet); }
static BOOL LOAD_STREAM_WITH_START_OFFSET(const char* streamName, int startOffset, const char* soundSet) { return invoke<BOOL>(0xD85750, streamName, startOffset, soundSet); }
static void PLAY_STREAM_FROM_PED(Ped ped) { invoke<Void>(0xD857D0, ped); }
static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xD85820, vehicle); }
static void PLAY_STREAM_FROM_OBJECT(Object object) { invoke<Void>(0xD85870, object); }
static void PLAY_STREAM_FRONTEND() { invoke<Void>(0xD858C0); }
static void PLAY_STREAM_FROM_POSITION(float x, float y, float z) { invoke<Void>(0xD858D0, x, y, z); }
static void STOP_STREAM() { invoke<Void>(0xD85930); }
static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0xD85940, ped, shaking); }
static void BLOCK_ALL_SPEECH_FROM_PED(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xD859A0, ped, p1, p2); }
static void STOP_PED_SPEAKING_SYNCED(Ped ped, BOOL p1) { invoke<Void>(0xD85940, ped, p1); }
static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0xD85A70, ped, toggle); }
static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0xD85AD0, ped); }
static void BLOCK_SPEECH_CONTEXT_GROUP(const char* p0, int p1) { invoke<Void>(0xD85B50, p0, p1); }
static void UNBLOCK_SPEECH_CONTEXT_GROUP(const char* p0) { invoke<Void>(0xD85B50, p0); }
static void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85BA0, vehicle, toggle); }
static void SET_SIREN_BYPASS_MP_DRIVER_CHECK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85C10, vehicle, toggle); }
static void TRIGGER_SIREN_AUDIO(Vehicle vehicle) { invoke<Void>(0xD85C80, vehicle); }
static void SET_HORN_PERMANENTLY_ON(Vehicle vehicle) { invoke<Void>(0xD85CF0, vehicle); }
static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85D50, vehicle, toggle); }
static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0xD85DE0, vehicle, p1); }
static void SET_HORN_PERMANENTLY_ON_TIME(Vehicle vehicle, float time) { invoke<Void>(0xD85CF0, vehicle, time); }
static void USE_SIREN_AS_HORN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD85EC0, vehicle, toggle); }
static void FORCE_USE_AUDIO_GAME_OBJECT(Vehicle vehicle, const char* audioName) { invoke<Void>(0xD85F50, vehicle, audioName); }
static void PRELOAD_VEHICLE_AUDIO_BANK(Hash vehicleModel) { invoke<Void>(0xD85FB0, vehicleModel); }
static void SET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle, const char* p1, const char* p2) { invoke<Void>(0xD85FD0, vehicle, p1, p2); }
static void RESET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle) { invoke<Void>(0xD85FD0, vehicle); }
static void SET_VEHICLE_FORCE_REVERSE_WARNING(Any p0, Any p1) { invoke<Void>(0xD86050, p0, p1); }
static BOOL IS_VEHICLE_AUDIBLY_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xD860C0, vehicle); }
static void SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(Vehicle vehicle, float damageFactor) { invoke<Void>(0xD86140, vehicle, damageFactor); }
static void SET_VEHICLE_AUDIO_BODY_DAMAGE_FACTOR(Vehicle vehicle, float intensity) { invoke<Void>(0xD861A0, vehicle, intensity); }
static void ENABLE_VEHICLE_FANBELT_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD86270, vehicle, toggle); }
static void ENABLE_VEHICLE_EXHAUST_POPS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD862F0, vehicle, toggle); }
static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD86380, vehicle, toggle); }
static void SET_PLAYER_VEHICLE_ALARM_AUDIO_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD86410, vehicle, toggle); }
static void SET_SCRIPT_UPDATE_DOOR_AUDIO(Hash doorHash, BOOL toggle) { invoke<Void>(0xD86480, doorHash, toggle); }
static void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0xD864D0, vehicle, doorId); }
static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0xD86560, vehicle, doorId); }
static void ENABLE_STALL_WARNING_SOUNDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD865F0, vehicle, toggle); }
static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0xD866D0); }
static void SET_GPS_ACTIVE(BOOL active) { invoke<Void>(0xD86700, active); }
static void PLAY_MISSION_COMPLETE_AUDIO(const char* audioName) { invoke<Void>(0xD86720, audioName); }
static BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0xD86740); }
static BOOL IS_MISSION_COMPLETE_READY_FOR_UI() { return invoke<BOOL>(0xD86770); }
static void BLOCK_DEATH_JINGLE(BOOL toggle) { invoke<Void>(0xD86790, toggle); }
static BOOL START_AUDIO_SCENE(const char* scene) { return invoke<BOOL>(0xD867B0, scene); }
static void STOP_AUDIO_SCENE(const char* scene) { invoke<Void>(0xD867F0, scene); }
static void STOP_AUDIO_SCENES() { invoke<Void>(0xD867F0); }
static BOOL IS_AUDIO_SCENE_ACTIVE(const char* scene) { return invoke<BOOL>(0xD86830, scene); }
static void SET_AUDIO_SCENE_VARIABLE(const char* scene, const char* variable, float value) { invoke<Void>(0xD86870, scene, variable, value); }
static void SET_AUDIO_SCRIPT_CLEANUP_TIME(int time) { invoke<Void>(0xD86890, time); }
static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Entity entity, const char* groupName, float p2) { invoke<Void>(0xD868B0, entity, groupName, p2); }
static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Entity entity, float p1) { invoke<Void>(0xD86940, entity, p1); }
static BOOL AUDIO_IS_MUSIC_PLAYING() { return invoke<BOOL>(0xD869C0); }
static BOOL AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<BOOL>(0xD869F0); }
static BOOL PREPARE_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xD86A20, eventName); }
static BOOL CANCEL_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xD86A90, eventName); }
static BOOL TRIGGER_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xD86AD0, eventName); }
static BOOL IS_MUSIC_ONESHOT_PLAYING() { return invoke<BOOL>(0xD86B10); }
static int GET_MUSIC_PLAYTIME() { return invoke<int>(0xD86B30); }
static void SET_GLOBAL_RADIO_SIGNAL_LEVEL(Any p0) { invoke<Void>(0xD86B50, p0); }
static void RECORD_BROKEN_GLASS(float x, float y, float z, float radius) { invoke<Void>(0xD86B70, x, y, z, radius); }
static void CLEAR_ALL_BROKEN_GLASS() { invoke<Void>(0xD86BD0); }
static void SCRIPT_OVERRIDES_WIND_ELEVATION(BOOL p0, Any p1) { invoke<Void>(0xD86BF0, p0, p1); }
static void SET_PED_WALLA_DENSITY(float p0, float p1) { invoke<Void>(0xD86C50, p0, p1); }
static void SET_PED_INTERIOR_WALLA_DENSITY(float p0, float p1) { invoke<Void>(0xD86C70, p0, p1); }
static void FORCE_PED_PANIC_WALLA() { invoke<Void>(0xD86C90); }
static BOOL PREPARE_ALARM(const char* alarmName) { return invoke<BOOL>(0xD86CA0, alarmName); }
static void START_ALARM(const char* alarmName, BOOL p2) { invoke<Void>(0xD86CD0, alarmName, p2); }
static void STOP_ALARM(const char* alarmName, BOOL toggle) { invoke<Void>(0xD86CF0, alarmName, toggle); }
static void STOP_ALL_ALARMS(BOOL stop) { invoke<Void>(0xD86D10, stop); }
static BOOL IS_ALARM_PLAYING(const char* alarmName) { return invoke<BOOL>(0xD86D30, alarmName); }
static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle vehicle) { return invoke<Hash>(0xD86D90, vehicle); }
static Hash GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(Vehicle vehicle) { return invoke<Hash>(0xD86D90, vehicle); }
static void RESET_PED_AUDIO_FLAGS(Ped ped) { invoke<Void>(0xD86E70, ped); }
static void SET_PED_FOOTSTEPS_EVENTS_ENABLED(Ped ped, BOOL toggle) { invoke<Void>(0xD86EC0, ped, toggle); }
static void SET_PED_CLOTH_EVENTS_ENABLED(Ped ped, BOOL toggle) { invoke<Void>(0xD86F10, ped, toggle); }
static void OVERRIDE_PLAYER_GROUND_MATERIAL(Hash hash, BOOL toggle) { invoke<Void>(0xD86F60, hash, toggle); }
static void USE_FOOTSTEP_SCRIPT_SWEETENERS(Ped ped, BOOL p1, Hash hash) { invoke<Void>(0xD86FD0, ped, p1, hash); }
static void OVERRIDE_MICROPHONE_SETTINGS(Hash hash, BOOL toggle) { invoke<Void>(0xD87060, hash, toggle); }
static void FREEZE_MICROPHONE() { invoke<Void>(0xD870D0); }
static void DISTANT_COP_CAR_SIRENS(BOOL value) { invoke<Void>(0xD87110, value); }
static void SET_SIREN_CAN_BE_CONTROLLED_BY_AUDIO(Vehicle vehicle, BOOL p1) { invoke<Void>(0xD871B0, vehicle, p1); }
static void ENABLE_STUNT_JUMP_AUDIO() { invoke<Void>(0xD87280); }
static void SET_AUDIO_FLAG(const char* flagName, BOOL toggle) { invoke<Void>(0xD87300, flagName, toggle); }
static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT(const char* audioEvent, Any p1) { return invoke<BOOL>(0xD87360, audioEvent, p1); }
static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(int sceneID, const char* audioEvent) { return invoke<BOOL>(0xD87360, sceneID, audioEvent); }
static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0xD873E0, sceneID); }
static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0xD87420, sceneID); }
static void INIT_SYNCH_SCENE_AUDIO_WITH_POSITION(const char* audioEvent, float x, float y, float z) { invoke<Void>(0xD87460, audioEvent, x, y, z); }
static void INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY(const char* audioEvent, Entity entity) { invoke<Void>(0xD874D0, audioEvent, entity); }
static void SET_AUDIO_SPECIAL_EFFECT_MODE(int mode) { invoke<Void>(0xD87550, mode); }
static void SET_PORTAL_SETTINGS_OVERRIDE(const char* p0, const char* p1) { invoke<Void>(0xD87570, p0, p1); }
static void REMOVE_PORTAL_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0xD875A0, p0); }
static void STOP_SMOKE_GRENADE_EXPLOSION_SOUNDS() { invoke<Void>(0xD875D0); }
static int GET_MUSIC_VOL_SLIDER() { return invoke<int>(0xD875E0); }
static void REQUEST_TENNIS_BANKS(Ped ped) { invoke<Void>(0xD87610, ped); }
static void UNREQUEST_TENNIS_BANKS() { invoke<Void>(0xD87610); }
static void SET_SKIP_MINIGUN_SPIN_UP_AUDIO(BOOL p0) { invoke<Void>(0xD87670, p0); }
static void STOP_CUTSCENE_AUDIO() { invoke<Void>(0xD87690); }
static BOOL HAS_LOADED_MP_DATA_SET() { return invoke<BOOL>(0xD876A0); }
static BOOL HAS_LOADED_SP_DATA_SET() { return invoke<BOOL>(0xD876C0); }
static int GET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle) { return invoke<int>(0xD876E0, vehicle); }
static void SET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle, int value) { invoke<Void>(0xD87740, vehicle, value); }
static void ADD_SCRIPT_TO_RANDOM_PED(const char* name, Hash model, float p2, float p3) { invoke<Void>(0xD87E90, name, model, p2, p3); }
static void REGISTER_OBJECT_SCRIPT_BRAIN(const char* scriptName, Hash modelHash, int p2, float activationRange, int p4, int p5) { invoke<Void>(0xD87F70, scriptName, modelHash, p2, activationRange, p4, p5); }
static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return invoke<BOOL>(0xD88040, object); }
static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(const char* scriptName, float activationRange, int p2) { invoke<Void>(0xD880F0, scriptName, activationRange, p2); }
static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0xD881A0); }
static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xD881C0, brainSet); }
static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xD881E0, brainSet); }
static void REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0xD88200); }
static void REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0xD88210); }
static void REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0xD88220, scriptName); }
static void REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0xD88230, scriptName); }
static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, Any p5) { invoke<Void>(0xD90E50, render, ease, easeTime, p3, p4, p5); }
static void STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(BOOL render, float p1, int p2, Any p3) { invoke<Void>(0xD90F00, render, p1, p2, p3); }
static Cam CREATE_CAM(const char* camName, BOOL p1) { return invoke<Cam>(0xD90F80, camName, p1); }
static Cam CREATE_CAM_WITH_PARAMS(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0xD90F80, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0xD90F80, camHash, p1); }
static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return invoke<Cam>(0xD90F80, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
static void DESTROY_CAM(Cam cam, BOOL bScriptHostCam) { invoke<Void>(0xD91360, cam, bScriptHostCam); }
static void DESTROY_ALL_CAMS(BOOL bScriptHostCam) { invoke<Void>(0xD913C0, bScriptHostCam); }
static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0xD91400, cam); }
static void SET_CAM_ACTIVE(Cam cam, BOOL active) { invoke<Void>(0xD91450, cam, active); }
static BOOL IS_CAM_ACTIVE(Cam cam) { return invoke<BOOL>(0xD91470, cam); }
static BOOL IS_CAM_RENDERING(Cam cam) { return invoke<BOOL>(0xD914D0, cam); }
static Cam GET_RENDERING_CAM() { return invoke<Cam>(0xD91550); }
static vector3 GET_CAM_COORD(Cam cam) { return invoke<vector3>(0xD915A0, cam); }
static vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return invoke<vector3>(0xD91660, cam, rotationOrder); }
static float GET_CAM_FOV(Cam cam) { return invoke<float>(0xD91760, cam); }
static float GET_CAM_NEAR_CLIP(Cam cam) { return invoke<float>(0xD917E0, cam); }
static float GET_CAM_FAR_CLIP(Cam cam) { return invoke<float>(0xD91860, cam); }
static float GET_CAM_NEAR_DOF(Cam cam) { return invoke<float>(0xD918E0, cam); }
static float GET_CAM_FAR_DOF(Cam cam) { return invoke<float>(0xD91960, cam); }
static float GET_CAM_DOF_STRENGTH(Cam cam) { return invoke<float>(0xD919E0, cam); }
static void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11) { invoke<Void>(0xD91A60, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11); }
static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { invoke<Void>(0xD91AA0, cam, posX, posY, posZ); }
static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder) { invoke<Void>(0xD91B50, cam, rotX, rotY, rotZ, rotationOrder); }
static void SET_CAM_FOV(Cam cam, float fieldOfView) { invoke<Void>(0xD91B70, cam, fieldOfView); }
static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { invoke<Void>(0xD91C30, cam, nearClip); }
static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { invoke<Void>(0xD91CB0, cam, farClip); }
static void FORCE_CAM_FAR_CLIP(Cam cam, float p1) { invoke<Void>(0xD91D40, cam, p1); }
static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { invoke<Void>(0xD91E00, cam, strength); }
static void SET_CAM_NEAR_DOF(Cam cam, float nearDOF) { invoke<Void>(0xD91E90, cam, nearDOF); }
static void SET_CAM_FAR_DOF(Cam cam, float farDOF) { invoke<Void>(0xD91F10, cam, farDOF); }
static void SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) { invoke<Void>(0xD91F90, cam, dofStrength); }
static void SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) { invoke<Void>(0xD92020, cam, p1, p2, p3, p4); }
static void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { invoke<Void>(0xD920E0, cam, toggle); }
static void SET_USE_HI_DOF() { invoke<Void>(0xD92160); }
static void SET_USE_HI_DOF_ON_SYNCED_SCENE_THIS_UPDATE() { invoke<Void>(0xD92160); }
static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0xD921A0, camera, p1); }
static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(Any p0, float p1) { invoke<Void>(0xD921A0, p0, p1); }
static void SET_CAM_DOF_FNUMBER_OF_LENS(Cam camera, float p1) { invoke<Void>(0xD92360, camera, p1); }
static void SET_CAM_DOF_FOCAL_LENGTH_MULTIPLIER(Cam camera, float multiplier) { invoke<Void>(0xD92430, camera, multiplier); }
static void SET_CAM_DOF_FOCUS_DISTANCE_BIAS(Cam camera, float p1) { invoke<Void>(0xD92500, camera, p1); }
static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0xD925D0, camera, p1); }
static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(Cam camera, float p1) { invoke<Void>(0xD925D0, camera, p1); }
static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0xD92810, cam, entity, xOffset, yOffset, zOffset, isRelative); }
static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0xD92830, cam, ped, boneIndex, x, y, z, heading); }
static void HARD_ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { invoke<Void>(0xD92830, cam, ped, boneIndex, p3, p4, p5, p6, p7, p8, p9); }
static void HARD_ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xRot, float yRot, float zRot, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0xD92810, cam, entity, xRot, yRot, zRot, xOffset, yOffset, zOffset, isRelative); }
static void ATTACH_CAM_TO_VEHICLE_BONE(Cam cam, Vehicle vehicle, int boneIndex, BOOL relativeRotation, float rotX, float rotY, float rotZ, float offsetX, float offsetY, float offsetZ, BOOL fixedDirection) { invoke<Void>(0xD928B0, cam, vehicle, boneIndex, relativeRotation, rotX, rotY, rotZ, offsetX, offsetY, offsetZ, fixedDirection); }
static void DETACH_CAM(Cam cam) { invoke<Void>(0xD92900, cam); }
static void SET_CAM_INHERIT_ROLL_VEHICLE(Cam cam, BOOL p1) { invoke<Void>(0xD92980, cam, p1); }
static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { invoke<Void>(0xD92990, cam, x, y, z); }
static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xD92A50, cam, entity, p2, p3, p4, p5); }
static void POINT_CAM_AT_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL p6) { invoke<Void>(0xD92A70, cam, ped, boneIndex, x, y, z, p6); }
static void STOP_CAM_POINTING(Cam cam) { invoke<Void>(0xD92A90, cam); }
static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0xD92B10, cam, toggle); }
static void SET_CAM_CONTROLS_MINI_MAP_HEADING(Cam cam, BOOL toggle) { invoke<Void>(0xD92BA0, cam, toggle); }
static void SET_CAM_IS_INSIDE_VEHICLE(Cam cam, BOOL toggle) { invoke<Void>(0xD92C60, cam, toggle); }
static void ALLOW_MOTION_BLUR_DECAY(Any p0, BOOL p1) { invoke<Void>(0xD92CF0, p0, p1); }
static void SET_CAM_DEBUG_NAME(Cam camera, const char* name) { invoke<Void>(0xD92D80, camera, name); }
static Cam GET_DEBUG_CAM() { return invoke<Cam>(0xD92D90); }
static void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int smoothingStyle, int rotationOrder) { invoke<Void>(0xD92DB0, camera, x, y, z, xRot, yRot, zRot, length, smoothingStyle, rotationOrder); }
static void ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0xD92DB0, cam, cam2, length, p3); }
static void ADD_CAM_SPLINE_NODE_USING_CAMERA(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0xD92DB0, cam, cam2, length, p3); }
static void ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(Cam cam, int length, int p2) { invoke<Void>(0xD92DB0, cam, length, p2); }
static void SET_CAM_SPLINE_PHASE(Cam cam, float p1) { invoke<Void>(0xD92EB0, cam, p1); }
static float GET_CAM_SPLINE_PHASE(Cam cam) { return invoke<float>(0xD92F50, cam); }
static float GET_CAM_SPLINE_NODE_PHASE(Cam cam) { return invoke<float>(0xD92FF0, cam); }
static void SET_CAM_SPLINE_DURATION(Cam cam, int timeDuration) { invoke<Void>(0xD93090, cam, timeDuration); }
static void SET_CAM_SPLINE_SMOOTHING_STYLE(Cam cam, int smoothingStyle) { invoke<Void>(0xD93110, cam, smoothingStyle); }
static int GET_CAM_SPLINE_NODE_INDEX(Cam cam) { return invoke<int>(0xD93190, cam); }
static void SET_CAM_SPLINE_NODE_EASE(Cam cam, int easingFunction, int p2, float p3) { invoke<Void>(0xD93220, cam, easingFunction, p2, p3); }
static void SET_CAM_SPLINE_NODE_VELOCITY_SCALE(Cam cam, int p1, float scale) { invoke<Void>(0xD932E0, cam, p1, scale); }
static void OVERRIDE_CAM_SPLINE_VELOCITY(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xD93300, cam, p1, p2, p3); }
static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xD933D0, cam, p1, p2, p3); }
static void SET_CAM_SPLINE_NODE_EXTRA_FLAGS(Cam cam, int p1, int flags) { invoke<Void>(0xD934A0, cam, p1, flags); }
static BOOL IS_CAM_SPLINE_PAUSED(Cam cam) { return invoke<BOOL>(0xD934C0, cam); }
static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { invoke<Void>(0xD91450, camTo, camFrom, duration, easeLocation, easeRotation); }
static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0xD935D0, cam); }
static void SHAKE_CAM(Cam cam, const char* type, float amplitude) { invoke<Void>(0xD93600, cam, type, amplitude); }
static void ANIMATED_SHAKE_CAM(Cam cam, const char* p1, const char* p2, const char* p3, float amplitude) { invoke<Void>(0xD93600, cam, p1, p2, p3, amplitude); }
static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0xD93750, cam); }
static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { invoke<Void>(0xD937D0, cam, amplitude); }
static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0xD93850, cam, p1); }
static void SHAKE_SCRIPT_GLOBAL(const char* p0, float p1) { invoke<Void>(0xD938D0, p0, p1); }
static void ANIMATED_SHAKE_SCRIPT_GLOBAL(const char* p0, const char* p1, const char* p2, float p3) { invoke<Void>(0xD938D0, p0, p1, p2, p3); }
static BOOL IS_SCRIPT_GLOBAL_SHAKING() { return invoke<BOOL>(0xD93960); }
static void STOP_SCRIPT_GLOBAL_SHAKING(BOOL p0) { invoke<Void>(0xD93990, p0); }
static void TRIGGER_VEHICLE_PART_BROKEN_CAMERA_SHAKE(Vehicle vehicle, int p1, float p2) { invoke<Void>(0xD939C0, vehicle, p1, p2); }
static BOOL PLAY_CAM_ANIM(Cam cam, const char* animName, const char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0xD93A50, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); }
static BOOL IS_CAM_PLAYING_ANIM(Cam cam, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xD93A90, cam, animName, animDictionary); }
static void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { invoke<Void>(0xD93B40, cam, phase); }
static float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return invoke<float>(0xD93BB0, cam); }
static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xD93C00, p0, p1, animName, animDictionary); }
static void SET_FLY_CAM_HORIZONTAL_RESPONSE(Cam cam, float p1, float p2, float p3) { invoke<Void>(0xD93C30, cam, p1, p2, p3); }
static void SET_FLY_CAM_VERTICAL_RESPONSE(Cam cam, float p1, float p2, float p3) { invoke<Void>(0xD93CF0, cam, p1, p2, p3); }
static void SET_FLY_CAM_MAX_HEIGHT(Cam cam, float height) { invoke<Void>(0xD93DB0, cam, height); }
static void SET_FLY_CAM_COORD_AND_CONSTRAIN(Cam cam, float x, float y, float z) { invoke<Void>(0xD93E40, cam, x, y, z); }
static void SET_FLY_CAM_VERTICAL_CONTROLS_THIS_UPDATE(Cam cam) { invoke<Void>(0xD93EF0, cam); }
static BOOL WAS_FLY_CAM_CONSTRAINED_ON_PREVIOUS_UDPATE(Cam cam) { return invoke<BOOL>(0xD93F60, cam); }
static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0xD93FF0); }
static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0xD94010); }
static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0xD94030); }
static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0xD94050); }
static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0xD94070, duration); }
static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0xD94080, duration); }
static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { invoke<Void>(0xD94090, p0, p1); }
static BOOL ARE_WIDESCREEN_BORDERS_ACTIVE() { return invoke<BOOL>(0xD940B0); }
static vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<vector3>(0xD940D0); }
static vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<vector3>(0xD94110, rotationOrder); }
static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0xD941B0); }
static void SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(float p0) { invoke<Void>(0xD941E0, p0); }
static void SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(float p0) { invoke<Void>(0xD94220, p0); }
static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0xD94270); }
static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0xD942A0, heading); }
static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0xD942B0); }
static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float angle, float scalingFactor) { invoke<Void>(0xD942E0, angle, scalingFactor); }
static void RESET_GAMEPLAY_CAM_FULL_ATTACH_PARENT_TRANSFORM_TIMER() { invoke<Void>(0xD94350); }
static void FORCE_CAMERA_RELATIVE_HEADING_AND_PITCH(float roll, float pitch, float yaw) { invoke<Void>(0xD94380, roll, pitch, yaw); }
static void FORCE_BONNET_CAMERA_RELATIVE_HEADING_AND_PITCH(float p0, float p1) { invoke<Void>(0xD943A0, p0, p1); }
static void SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(float yaw) { invoke<Void>(0xD944C0, yaw); }
static void SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(float pitch) { invoke<Void>(0xD94500, pitch); }
static void SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(BOOL p0) { invoke<Void>(0xD94560, p0); }
static void SHAKE_GAMEPLAY_CAM(const char* shakeName, float intensity) { invoke<Void>(0xD94580, shakeName, intensity); }
static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0xD945C0); }
static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0xD945F0, amplitude); }
static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0xD94620, p0); }
static void SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Ped ped) { invoke<Void>(0xD94650, ped); }
static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0xD946C0); }
static BOOL IS_INTERPOLATING_FROM_SCRIPT_CAMS() { return invoke<BOOL>(0xD946F0); }
static BOOL IS_INTERPOLATING_TO_SCRIPT_CAMS() { return invoke<BOOL>(0xD94730); }
static void SET_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_STATE(BOOL p0) { invoke<Void>(0xD94770, p0); }
static void DISABLE_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_THIS_UPDATE() { invoke<Void>(0xD947A0); }
static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0xD947C0); }
static void SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Entity entity) { invoke<Void>(0xD947F0, entity); }
static void DISABLE_CAM_COLLISION_FOR_OBJECT(Entity entity) { invoke<Void>(0xD94860, entity); }
static void BYPASS_CAMERA_COLLISION_BUOYANCY_TEST_THIS_UPDATE() { invoke<Void>(0xD948C0); }
static void SET_GAMEPLAY_CAM_ENTITY_TO_LIMIT_FOCUS_OVER_BOUNDING_SPHERE_THIS_UPDATE(Entity entity) { invoke<Void>(0xD948F0, entity); }
static void DISABLE_FIRST_PERSON_CAMERA_WATER_CLIPPING_TEST_THIS_UPDATE() { invoke<Void>(0xD94960); }
static void SET_FOLLOW_CAM_IGNORE_ATTACH_PARENT_MOVEMENT_THIS_UPDATE() { invoke<Void>(0xD94980); }
static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0xD949A0, x, y, z, radius); }
static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0xD94A10); }
static BOOL SET_FOLLOW_PED_CAM_THIS_UPDATE(const char* camName, int p1) { return invoke<BOOL>(0xD94A40, camName, p1); }
static void USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(BOOL p0, BOOL p1) { invoke<Void>(0xD94AD0, p0, p1); }
static void SET_FOLLOW_PED_CAM_LADDER_ALIGN_THIS_UPDATE() { invoke<Void>(0xD94B20); }
static void SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0xD94B50, minimum, maximum); }
static void SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0xD94BF0, minimum, maximum); }
static void SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(float p0, float distance) { invoke<Void>(0xD94C90, p0, distance); }
static void SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Vehicle p0, int p1) { invoke<Void>(0xD94D40, p0, p1); }
static void DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE() { invoke<Void>(0xD94DB0); }
static void DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE() { invoke<Void>(0xD94DD0); }
static void BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE() { invoke<Void>(0xD94DE0); }
static int GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<int>(0xD94E10); }
static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0xD94E30); }
static void SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xD94E50, viewMode); }
static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0xD94E60); }
static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_THIS_UPDATE(BOOL p0) { invoke<Void>(0xD94E90, p0); }
static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(BOOL p0, BOOL p1) { invoke<Void>(0xD94EC0, p0, p1); }
static BOOL SET_TABLE_GAMES_CAMERA_THIS_UPDATE(Hash hash) { return invoke<BOOL>(0xD94EF0, hash); }
static int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0xD94F70); }
static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { invoke<Void>(0xD94F90, zoomLevel); }
static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0xD94FA0); }
static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xD94FC0, viewMode); }
static int GET_CAM_VIEW_MODE_FOR_CONTEXT(int context) { return invoke<int>(0xD94FD0, context); }
static void SET_CAM_VIEW_MODE_FOR_CONTEXT(int context, int viewMode) { invoke<Void>(0xD94FF0, context, viewMode); }
static int GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() { return invoke<int>(0xD95000); }
static void USE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { invoke<Void>(0xD95030); }
static void USE_DEDICATED_STUNT_CAMERA_THIS_UPDATE(const char* camName) { invoke<Void>(0xD95050, camName); }
static void FORCE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { invoke<Void>(0xD95080); }
static void SET_FOLLOW_VEHICLE_CAM_SEAT_THIS_UPDATE(int seatIndex) { invoke<Void>(0xD950A0, seatIndex); }
static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xD950C0); }
static BOOL IS_AIM_CAM_ACTIVE_IN_ACCURATE_MODE() { return invoke<BOOL>(0xD950C0); }
static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xD95160); }
static void DISABLE_AIM_CAM_THIS_UPDATE() { invoke<Void>(0xD95190); }
static float GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() { return invoke<float>(0xD951D0); }
static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(float zoomFactor) { invoke<Void>(0xD951F0, zoomFactor); }
static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xD951F0, p0, p1); }
static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xD95230, p0, p1); }
static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xD953A0, p0, p1); }
static void SET_FIRST_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xD95440, p0); }
static void SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xD95480, p0); }
static void SET_ALLOW_CUSTOM_VEHICLE_DRIVE_BY_CAM_THIS_UPDATE(BOOL p0) { invoke<Void>(0xD954C0, p0); }
static void FORCE_TIGHTSPACE_CUSTOM_FRAMING_THIS_UPDATE() { invoke<Void>(0xD954F0); }
static vector3 GET_FINAL_RENDERED_CAM_COORD() { return invoke<vector3>(0xD95510); }
static vector3 GET_FINAL_RENDERED_CAM_ROT(int rotationOrder) { return invoke<vector3>(0xD95550, rotationOrder); }
static vector3 GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_ROT(Player player, int rotationOrder) { return invoke<vector3>(0xD955E0, player, rotationOrder); }
static float GET_FINAL_RENDERED_CAM_FOV() { return invoke<float>(0xD956E0); }
static float GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_FOV(Player player) { return invoke<float>(0xD95700, player); }
static float GET_FINAL_RENDERED_CAM_NEAR_CLIP() { return invoke<float>(0xD95750); }
static float GET_FINAL_RENDERED_CAM_FAR_CLIP() { return invoke<float>(0xD95770); }
static float GET_FINAL_RENDERED_CAM_NEAR_DOF() { return invoke<float>(0xD95790); }
static float GET_FINAL_RENDERED_CAM_FAR_DOF() { return invoke<float>(0xD957B0); }
static float GET_FINAL_RENDERED_CAM_MOTION_BLUR_STRENGTH() { return invoke<float>(0xD957D0); }
static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int p6) { invoke<Void>(0xD957F0, x, y, z, duration, blendOutDuration, blendInDuration, p6); }
static void SET_GAMEPLAY_PED_HINT(Ped ped, float x1, float y1, float z1, BOOL p4, int duration, int blendOutDuration, int blendInDuration) { invoke<Void>(0xD95880, ped, x1, y1, z1, p4, duration, blendOutDuration, blendInDuration); }
static void SET_GAMEPLAY_VEHICLE_HINT(Vehicle vehicle, float offsetX, float offsetY, float offsetZ, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0xD95950, vehicle, offsetX, offsetY, offsetZ, p4, time, easeInTime, easeOutTime); }
static void SET_GAMEPLAY_OBJECT_HINT(Object object, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0xD95A20, object, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime); }
static void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime, int p8) { invoke<Void>(0xD95AF0, entity, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime, p8); }
static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xD95BC0); }
static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xD95C00, p0); }
static void STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(BOOL p0) { invoke<Void>(0xD95C00, p0); }
static void STOP_CODE_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xD95C50, p0); }
static BOOL IS_CODE_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xD95C90); }
static void SET_GAMEPLAY_HINT_FOV(float FOV) { invoke<Void>(0xD95CC0, FOV); }
static void SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(float value) { invoke<Void>(0xD95D10, value); }
static void SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(float value) { invoke<Void>(0xD95D50, value); }
static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(float xOffset) { invoke<Void>(0xD95D90, xOffset); }
static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(float yOffset) { invoke<Void>(0xD95DD0, yOffset); }
static void SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(BOOL toggle) { invoke<Void>(0xD95E10, toggle); }
static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0xD95E40, p0); }
static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xD95EA0); }
static void SHAKE_CINEMATIC_CAM(const char* shakeType, float amount) { invoke<Void>(0xD95ED0, shakeType, amount); }
static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0xD95F10); }
static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<Void>(0xD95F40, p0); }
static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { invoke<Void>(0xD95F70, p0); }
static void DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE() { invoke<Void>(0xD95FA0); }
static void DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE() { invoke<Void>(0xD95FC0); }
static void INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE() { invoke<Void>(0xD95FE0); }
static void INVALIDATE_IDLE_CAM() { invoke<Void>(0xD96000); }
static BOOL IS_CINEMATIC_IDLE_CAM_RENDERING() { return invoke<BOOL>(0xD96020); }
static BOOL IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING() { return invoke<BOOL>(0xD96050); }
static void CREATE_CINEMATIC_SHOT(Hash p0, int time, BOOL p2, Entity entity) { invoke<Void>(0xD96080, p0, time, p2, entity); }
static BOOL IS_CINEMATIC_SHOT_ACTIVE(Hash p0) { return invoke<BOOL>(0xD960A0, p0); }
static void STOP_CINEMATIC_SHOT(Hash p0) { invoke<Void>(0xD96110, p0); }
static void FORCE_CINEMATIC_RENDERING_THIS_UPDATE(BOOL toggle) { invoke<Void>(0xD96170, toggle); }
static void SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE() { invoke<Void>(0xD961D0); }
static void SET_CINEMATIC_MODE_ACTIVE(BOOL toggle) { invoke<Void>(0xD961F0, toggle); }
static BOOL IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING() { return invoke<BOOL>(0xD96250); }
static BOOL DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE() { return invoke<BOOL>(0xD96270); }
static BOOL IS_BONNET_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xD96290); }
static BOOL IS_CINEMATIC_CAM_INPUT_ACTIVE() { return invoke<BOOL>(0xD962C0); }
static void IGNORE_MENU_PREFERENCE_FOR_BONNET_CAMERA_THIS_UPDATE() { invoke<Void>(0xD96310); }
static void BYPASS_CUTSCENE_CAM_RENDERING_THIS_UPDATE() { invoke<Void>(0xD96330); }
static void STOP_CUTSCENE_CAM_SHAKING(Any p0) { invoke<Void>(0xD96350, p0); }
static void SET_CUTSCENE_CAM_FAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xD96380, p0); }
static Ped GET_FOCUS_PED_ON_SCREEN(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return invoke<Ped>(0xD963C0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE() { invoke<Void>(0xD96420); }
static void SET_CAM_DEATH_FAIL_EFFECT_STATE(int p0) { invoke<Void>(0xD96430, p0); }
static void SET_FIRST_PERSON_FLASH_EFFECT_TYPE(Any p0) { invoke<Void>(0xD96440, p0); }
static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME(const char* vehicleName) { invoke<Void>(0xD96470, vehicleName); }
static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_HASH(Hash vehicleModel) { invoke<Void>(0xD964A0, vehicleModel); }
static BOOL IS_ALLOWED_INDEPENDENT_CAMERA_MODES() { return invoke<BOOL>(0xD964D0); }
static void CAMERA_PREVENT_COLLISION_SETTINGS_FOR_TRIPLEHEAD_IN_INTERIORS_THIS_UPDATE() { invoke<Void>(0xD964F0); }
static float REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() { return invoke<float>(0xD96510); }
static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0xD969B0, hour, minute, second); }
static void PAUSE_CLOCK(BOOL toggle) { invoke<Void>(0xD969E0, toggle); }
static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0xD96A00, hour, minute, second); }
static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xD96A20, hours, minutes, seconds); }
static int GET_CLOCK_HOURS() { return invoke<int>(0xD96A40); }
static int GET_CLOCK_MINUTES() { return invoke<int>(0xD96A50); }
static int GET_CLOCK_SECONDS() { return invoke<int>(0xD96A60); }
static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0xD96A70, day, month, year); }
static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0xD96A90); }
static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0xD96AA0); }
static int GET_CLOCK_MONTH() { return invoke<int>(0xD96AB0); }
static int GET_CLOCK_YEAR() { return invoke<int>(0xD96AC0); }
static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0xD96AD0); }
static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xD96AE0, year, month, day, hour, minute, second); }
static void GET_UTC_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xD96B00, year, month, day, hour, minute, second); }
static void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xD96B20, year, month, day, hour, minute, second); }
static void REQUEST_CUTSCENE(const char* cutsceneName, int flags) { invoke<Void>(0xD98FD0, cutsceneName, flags); }
static void REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(const char* cutsceneName, int playbackFlags, int flags) { invoke<Void>(0xD98FD0, cutsceneName, playbackFlags, flags); }
static void REMOVE_CUTSCENE() { invoke<Void>(0xD990B0); }
static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0xD990E0); }
static BOOL HAS_THIS_CUTSCENE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0xD99110, cutsceneName); }
static void SET_SCRIPT_CAN_START_CUTSCENE(int threadId) { invoke<Void>(0xD99160, threadId); }
static BOOL CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY() { return invoke<BOOL>(0xD99180); }
static BOOL IS_CUTSCENE_PLAYBACK_FLAG_SET(int flag) { return invoke<BOOL>(0xD991C0, flag); }
static void SET_CUTSCENE_ENTITY_STREAMING_FLAGS(const char* cutsceneEntName, int p1, int p2) { invoke<Void>(0xD99200, cutsceneEntName, p1, p2); }
static void REQUEST_CUT_FILE(const char* cutsceneName) { invoke<Void>(0xD99220, cutsceneName); }
static BOOL HAS_CUT_FILE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0xD992D0, cutsceneName); }
static void REMOVE_CUT_FILE(const char* cutsceneName) { invoke<Void>(0xD99300, cutsceneName); }
static int GET_CUT_FILE_CONCAT_COUNT(const char* cutsceneName) { return invoke<int>(0xD99380, cutsceneName); }
static void START_CUTSCENE(int flags) { invoke<Void>(0xD993B0, flags); }
static void START_CUTSCENE_AT_COORDS(float x, float y, float z, int flags) { invoke<Void>(0xD993B0, x, y, z, flags); }
static void STOP_CUTSCENE(BOOL p0) { invoke<Void>(0xD993F0, p0); }
static void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0xD993F0); }
static void SET_CUTSCENE_ORIGIN(float x, float y, float z, float p3, int p4) { invoke<Void>(0xD99460, x, y, z, p3, p4); }
static void SET_CUTSCENE_ORIGIN_AND_ORIENTATION(float x1, float y1, float z1, float x2, float y2, float z2, int p6) { invoke<Void>(0xD99460, x1, y1, z1, x2, y2, z2, p6); }
static int GET_CUTSCENE_TIME() { return invoke<int>(0xD99490); }
static int GET_CUTSCENE_TOTAL_DURATION() { return invoke<int>(0xD994F0); }
static int GET_CUTSCENE_END_TIME() { return invoke<int>(0xD99540); }
static int GET_CUTSCENE_PLAY_DURATION() { return invoke<int>(0xD99570); }
static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0xD995A0); }
static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0xD995D0); }
static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0xD99600); }
static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0xD99630); }
static int GET_CUTSCENE_SECTION_PLAYING() { return invoke<int>(0xD99660); }
static Entity GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xD99680, cutsceneEntName, modelHash); }
static int GET_CUTSCENE_CONCAT_SECTION_PLAYING() { return invoke<int>(0xD99730); }
static BOOL IS_CUTSCENE_AUTHORIZED(const char* cutsceneName) { return invoke<BOOL>(0xD99760, cutsceneName); }
static int DOES_CUTSCENE_HANDLE_EXIST(int cutsceneHandle) { return invoke<int>(0xD99770, cutsceneHandle); }
static void REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash, int p4) { invoke<Void>(0xD99810, cutscenePed, cutsceneEntName, p2, modelHash, p4); }
static Entity GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xD99830, cutsceneEntName, modelHash); }
static void SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(Hash modelHash) { invoke<Void>(0xD99860, modelHash); }
static void SET_CUTSCENE_TRIGGER_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xD99880, x1, y1, z1, x2, y2, z2); }
static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xD99920, cutsceneEntName, modelHash); }
static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xD999A0, cutsceneEntName, modelHash); }
static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0xD99A20, p0); }
static void SET_PAD_CAN_SHAKE_DURING_CUTSCENE(BOOL toggle) { invoke<Void>(0xD99A60, toggle); }
static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xD99AA0, p0, p1, p2, p3); }
static void SET_CUTSCENE_MULTIHEAD_FADE(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xD99B50, p0, p1, p2, p3); }
static void SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(BOOL p0) { invoke<Void>(0xD99B50, p0); }
static BOOL IS_MULTIHEAD_FADE_UP() { return invoke<BOOL>(0xD99B70); }
static void NETWORK_SET_MOCAP_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xD99B80, p0); }
static void SET_CAR_GENERATORS_CAN_UPDATE_DURING_CUTSCENE(BOOL p0) { invoke<Void>(0xD99BC0, p0); }
static BOOL CAN_USE_MOBILE_PHONE_DURING_CUTSCENE() { return invoke<BOOL>(0xD99C00); }
static void SET_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xD99C50, p0); }
static void SET_CAN_DISPLAY_MINIMAP_DURING_CUTSCENE_THIS_UPDATE() { invoke<Void>(0xD99C90); }
static void SET_CUTSCENE_PED_COMPONENT_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0xD99CC0, cutsceneEntName, componentId, drawableId, textureId, modelHash); }
static void SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(const char* cutsceneEntName, Ped ped, Hash modelHash) { invoke<Void>(0xD99CC0, cutsceneEntName, ped, modelHash); }
static BOOL DOES_CUTSCENE_ENTITY_EXIST(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xD99D00, cutsceneEntName, modelHash); }
static void SET_CUTSCENE_PED_PROP_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0xD99DA0, cutsceneEntName, componentId, drawableId, textureId, modelHash); }
static BOOL HAS_CUTSCENE_CUT_THIS_FRAME() { return invoke<BOOL>(0xD99E60); }
static void DATAFILE_WATCH_REQUEST_ID(int requestId) { invoke<Void>(0xD9DCC0, requestId); }
static void DATAFILE_CLEAR_WATCH_LIST() { invoke<Void>(0xD9DCD0); }
static BOOL DATAFILE_IS_VALID_REQUEST_ID(int index) { return invoke<BOOL>(0xD9DD10, index); }
static BOOL DATAFILE_HAS_LOADED_FILE_DATA(int requestId) { return invoke<BOOL>(0xD9DD50, requestId); }
static BOOL DATAFILE_HAS_VALID_FILE_DATA(int requestId) { return invoke<BOOL>(0xD9DDA0, requestId); }
static BOOL DATAFILE_SELECT_ACTIVE_FILE(int requestId, Any p1) { return invoke<BOOL>(0xD9DE20, requestId, p1); }
static BOOL DATAFILE_DELETE_REQUESTED_FILE(int requestId) { return invoke<BOOL>(0xD9DE50, requestId); }
static BOOL UGC_CREATE_CONTENT(Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p7) { return invoke<BOOL>(0xD9DE80, data, dataCount, contentName, description, tagsCsv, contentTypeName, publish, p7); }
static BOOL UGC_CREATE_MISSION(const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p5) { return invoke<BOOL>(0xD9DEE0, contentName, description, tagsCsv, contentTypeName, publish, p5); }
static BOOL UGC_UPDATE_CONTENT(const char* contentId, Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p7) { return invoke<BOOL>(0xD9DF20, contentId, data, dataCount, contentName, description, tagsCsv, contentTypeName, p7); }
static BOOL UGC_UPDATE_MISSION(const char* contentId, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p5) { return invoke<BOOL>(0xD9DF70, contentId, contentName, description, tagsCsv, contentTypeName, p5); }
static BOOL UGC_SET_PLAYER_DATA(const char* contentId, float rating, const char* contentTypeName, Any p3) { return invoke<BOOL>(0xD9DFB0, contentId, rating, contentTypeName, p3); }
static BOOL DATAFILE_SELECT_UGC_DATA(int p0, Any p1) { return invoke<BOOL>(0xD9DFE0, p0, p1); }
static BOOL DATAFILE_SELECT_UGC_STATS(int p0, BOOL p1, Any p2) { return invoke<BOOL>(0xD9E010, p0, p1, p2); }
static BOOL DATAFILE_SELECT_UGC_PLAYER_DATA(int p0, Any p1) { return invoke<BOOL>(0xD9E040, p0, p1); }
static BOOL DATAFILE_SELECT_CREATOR_STATS(int p0, Any p1) { return invoke<BOOL>(0xD9E070, p0, p1); }
static BOOL DATAFILE_LOAD_OFFLINE_UGC(const char* filename, Any p1) { return invoke<BOOL>(0xD9E0A0, filename, p1); }
static void DATAFILE_CREATE(int p0) { invoke<Void>(0xD9E0D0, p0); }
static void DATAFILE_DELETE(int p0) { invoke<Void>(0xD9E0E0, p0); }
static void DATAFILE_STORE_MISSION_HEADER(int p0) { invoke<Void>(0xD9E1E0, p0); }
static void DATAFILE_FLUSH_MISSION_HEADER() { invoke<Void>(0xD9E1F0); }
static Any* DATAFILE_GET_FILE_DICT(int p0) { return invoke<Any*>(0xD9E2C0, p0); }
static BOOL DATAFILE_START_SAVE_TO_CLOUD(const char* filename, Any p1) { return invoke<BOOL>(0xD9E2F0, filename, p1); }
static BOOL DATAFILE_UPDATE_SAVE_TO_CLOUD(BOOL* p0) { return invoke<BOOL>(0xD9E380, p0); }
static BOOL DATAFILE_IS_SAVE_PENDING() { return invoke<BOOL>(0xD9E3D0); }
static BOOL DATAFILE_LOAD_OFFLINE_UGC_FOR_ADDITIONAL_DATA_FILE(Any p0, Any p1) { return invoke<BOOL>(0xD9E0A0, p0, p1); }
static void DATAFILE_DELETE_FOR_ADDITIONAL_DATA_FILE(Any p0) { invoke<Void>(0xD9E0E0, p0); }
static Any* DATAFILE_GET_FILE_DICT_FOR_ADDITIONAL_DATA_FILE(Any p0) { return invoke<Any*>(0xD9E2C0, p0); }
static void DATADICT_SET_BOOL(Any* objectData, const char* key, BOOL value) { invoke<Void>(0xD9E550, objectData, key, value); }
static void DATADICT_SET_INT(Any* objectData, const char* key, int value) { invoke<Void>(0xD9E570, objectData, key, value); }
static void DATADICT_SET_FLOAT(Any* objectData, const char* key, float value) { invoke<Void>(0xD9E590, objectData, key, value); }
static void DATADICT_SET_STRING(Any* objectData, const char* key, const char* value) { invoke<Void>(0xD9E5B0, objectData, key, value); }
static void DATADICT_SET_VECTOR(Any* objectData, const char* key, float valueX, float valueY, float valueZ) { invoke<Void>(0xD9E5D0, objectData, key, valueX, valueY, valueZ); }
static Any* DATADICT_CREATE_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xD9E600, objectData, key); }
static Any* DATADICT_CREATE_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0xD9E630, objectData, key); }
static BOOL DATADICT_GET_BOOL(Any* objectData, const char* key) { return invoke<BOOL>(0xD9E660, objectData, key); }
static int DATADICT_GET_INT(Any* objectData, const char* key) { return invoke<int>(0xD9E710, objectData, key); }
static float DATADICT_GET_FLOAT(Any* objectData, const char* key) { return invoke<float>(0xD9E7B0, objectData, key); }
static const char* DATADICT_GET_STRING(Any* objectData, const char* key) { return invoke<const char*>(0xD9E870, objectData, key); }
static vector3 DATADICT_GET_VECTOR(Any* objectData, const char* key) { return invoke<vector3>(0xD9E920, objectData, key); }
static Any* DATADICT_GET_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xD9E9F0, objectData, key); }
static Any* DATADICT_GET_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0xD9EA90, objectData, key); }
static int DATADICT_GET_TYPE(Any* objectData, const char* key) { return invoke<int>(0xD9EB30, objectData, key); }
static void DATAARRAY_ADD_BOOL(Any* arrayData, BOOL value) { invoke<Void>(0xD9EBD0, arrayData, value); }
static void DATAARRAY_ADD_INT(Any* arrayData, int value) { invoke<Void>(0xD9EBF0, arrayData, value); }
static void DATAARRAY_ADD_FLOAT(Any* arrayData, float value) { invoke<Void>(0xD9EC10, arrayData, value); }
static void DATAARRAY_ADD_STRING(Any* arrayData, const char* value) { invoke<Void>(0xD9EC30, arrayData, value); }
static void DATAARRAY_ADD_VECTOR(Any* arrayData, float valueX, float valueY, float valueZ) { invoke<Void>(0xD9EC50, arrayData, valueX, valueY, valueZ); }
static Any* DATAARRAY_ADD_DICT(Any* arrayData) { return invoke<Any*>(0xD9EC80, arrayData); }
static BOOL DATAARRAY_GET_BOOL(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0xD9ECB0, arrayData, arrayIndex); }
static int DATAARRAY_GET_INT(Any* arrayData, int arrayIndex) { return invoke<int>(0xD9ED20, arrayData, arrayIndex); }
static float DATAARRAY_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0xD9ED80, arrayData, arrayIndex); }
static const char* DATAARRAY_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<const char*>(0xD9EDF0, arrayData, arrayIndex); }
static vector3 DATAARRAY_GET_VECTOR(Any* arrayData, int arrayIndex) { return invoke<vector3>(0xD9EE60, arrayData, arrayIndex); }
static Any* DATAARRAY_GET_DICT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0xD9EEE0, arrayData, arrayIndex); }
static int DATAARRAY_GET_COUNT(Any* arrayData) { return invoke<int>(0xD9EF40, arrayData); }
static int DATAARRAY_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0xD9EF60, arrayData, arrayIndex); }
static BOOL DECOR_SET_TIME(Entity entity, const char* propertyName, int timestamp) { return invoke<BOOL>(0xDA0030, entity, propertyName, timestamp); }
static BOOL DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) { return invoke<BOOL>(0xDA0060, entity, propertyName, value); }
static BOOL DECOR_SET_FLOAT(Entity entity, const char* propertyName, float value) { return invoke<BOOL>(0xDA0140, entity, propertyName, value); }
static BOOL DECOR_SET_INT(Entity entity, const char* propertyName, int value) { return invoke<BOOL>(0xDA0220, entity, propertyName, value); }
static BOOL DECOR_GET_BOOL(Entity entity, const char* propertyName) { return invoke<BOOL>(0xDA02F0, entity, propertyName); }
static float DECOR_GET_FLOAT(Entity entity, const char* propertyName) { return invoke<float>(0xDA03B0, entity, propertyName); }
static int DECOR_GET_INT(Entity entity, const char* propertyName) { return invoke<int>(0xDA0480, entity, propertyName); }
static BOOL DECOR_EXIST_ON(Entity entity, const char* propertyName) { return invoke<BOOL>(0xDA0540, entity, propertyName); }
static BOOL DECOR_REMOVE(Entity entity, const char* propertyName) { return invoke<BOOL>(0xDA05C0, entity, propertyName); }
static void DECOR_REGISTER(const char* propertyName, int type) { invoke<Void>(0xDA0640, propertyName, type); }
static BOOL DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) { return invoke<BOOL>(0xDA06C0, propertyName, type); }
static void DECOR_REGISTER_LOCK() { invoke<Void>(0xDA0640); }
static BOOL ARE_ANY_CCS_PENDING() { return invoke<BOOL>(0xDD2B50); }
static BOOL IS_DLC_PRESENT(Hash dlcHash) { return invoke<BOOL>(0xDD2B80, dlcHash); }
static BOOL DLC_CHECK_CLOUD_DATA_CORRECT() { return invoke<BOOL>(0xDD2BB0); }
static int GET_EXTRACONTENT_CLOUD_RESULT() { return invoke<int>(0xDD2BC0); }
static BOOL DLC_CHECK_COMPAT_PACK_CONFIGURATION() { return invoke<BOOL>(0xDD2BD0); }
static BOOL GET_EVER_HAD_BAD_PACK_ORDER() { return invoke<BOOL>(0xDD2BE0); }
static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xDD2C00); }
static BOOL GET_IS_INITIAL_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xDD2C20); }
static BOOL HAS_CLOUD_REQUESTS_FINISHED(BOOL* p0, int unused) { return invoke<BOOL>(0xDD2C30, p0, unused); }
static void ON_ENTER_SP() { invoke<Void>(0xDD2C50); }
static void ON_ENTER_MP() { invoke<Void>(0xDD2CA0); }
static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0xDB2290, entity); }
static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0xDB22F0, entity, p1); }
static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0xDB2370, entity); }
static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0xDB23D0, entity); }
static BOOL DOES_ENTITY_HAVE_SKELETON(Entity entity) { return invoke<BOOL>(0xDB2430, entity); }
static BOOL DOES_ENTITY_HAVE_ANIM_DIRECTOR(Entity entity) { return invoke<BOOL>(0xDB24C0, entity); }
static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, const char* animDict, const char* animName, int p3) { return invoke<BOOL>(0xDB2520, entity, animDict, animName, p3); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xDB2550, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0xDB25B0, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xDB2610, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0xDB2670, entity1, entity2, p2); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xDB26A0, entity1, entity2, traceType); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_ADJUST_FOR_COVER(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xDB26A0, entity1, entity2, traceType); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0xDB26A0, entity1, entity2); }
static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0xDB2730, entity); }
static Entity _GET_LAST_ENTITY_HIT_BY_ENTITY(Entity entity) { return invoke<Entity>(0xDB27B0, entity); }
static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0xDB2840, entity); }
static vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<vector3>(0xDB2920, entity); }
static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { invoke<Void>(0xDB2A20, entity); }
static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0xDB2A90, entity, animDict, animName); }
static float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0xDB2AC0, entity, animDict, animName); }
static float GET_ANIM_DURATION(const char* animDict, const char* animName) { return invoke<float>(0xDB2AF0, animDict, animName); }
static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0xDB2B30, entity); }
static vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<vector3>(0xDB2BC0, entity, alive); }
static vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<vector3>(0xDB2C70, entity); }
static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0xDB2D10, entity); }
static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0xDB2D80, entity); }
static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0xDB2DF0, entity); }
static float GET_ENTITY_HEADING_FROM_EULERS(Entity entity) { return invoke<float>(0xDB2DF0, entity); }
static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0xDB3010, entity); }
static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0xDB3060, entity); }
static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0xDB30B0, entity, value); }
static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0xDB3120, entity, X, Y, Z, atTop, inWorldCoords); }
static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0xDB3120, entity); }
static void GET_ENTITY_MATRIX(Entity entity, vector3* forwardVector, vector3* rightVector, vector3* upVector, vector3* position) { invoke<Void>(0xDB31E0, entity, forwardVector, rightVector, upVector, position); }
static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0xDB3330, entity); }
static vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<vector3>(0xDB3350, entity, posX, posY, posZ); }
static vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, vector3 xyz) { return invoke<vector3>(0xDB3470, entity, xyz); }
static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0xDB3530, entity); }
static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { invoke<Void>(0xDB3560, entity, x, y, z, w); }
static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0xDB36A0, entity); }
static vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return invoke<vector3>(0xDB36D0, entity, rotationOrder); }
static vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return invoke<vector3>(0xDB36D0, entity); }
static const char* GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) { return invoke<const char*>(0xDB3920, entity, script); }
static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0xDB3980, entity); }
static vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<vector3>(0xDB3980, entity, relative); }
static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return invoke<float>(0xDB3B70, entity); }
static vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<vector3>(0xDB3BC0, entity); }
static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0xDB3C90, entity); }
static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0xDB3CA0, entity); }
static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0xDB3CB0, entity); }
static vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<vector3>(0xDB3CC0, entity, boneIndex); }
static Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return invoke<Player>(0xDB3D30, entity); }
static Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return invoke<Player>(0xDB3D30, entity, team); }
static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0xDB3DD0, entity); }
static int GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0xDB3E40, entity); }
static BOOL IS_AN_ENTITY(ScrHandle handle) { return invoke<BOOL>(0xDB3EB0, handle); }
static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0xDB3EF0, entity); }
static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0xDB3F50, entity); }
static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0xDB3FB0, entity); }
static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0xDB4010, entity); }
static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0xDB4070, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); }
static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0xDB40C0, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); }
static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0xDB4110, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xDB4110, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0xDB4110, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xDB4110, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0xDB4110, from, to); }
static BOOL IS_ENTITY_DEAD(Entity entity, BOOL p1) { return invoke<BOOL>(0xDB4380, entity, p1); }
static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0xDB4440, entity); }
static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ, Any p10) { return invoke<BOOL>(0xDB4470, entity, x1, y1, z1, x2, y2, z2, width, debug, includeZ, p10); }
static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0xDB44C0, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); }
static BOOL IS_ENTITY_IN_ZONE(Entity entity, const char* zone) { return invoke<BOOL>(0xDB4510, entity, zone); }
static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0xDB4600, entity); }
static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0xDB4630, entity); }
static void SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(Entity entity, BOOL toggle) { invoke<Void>(0xDB46A0, entity, toggle); }
static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0xDB4700, entity); }
static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, const char* animDict, const char* animName, int taskFlag) { return invoke<BOOL>(0xDB47A0, entity, animDict, animName, taskFlag); }
static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0xDB47D0, entity); }
static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0xDB4830, entity, targetEntity); }
static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0xDB4860, entity, modelHash); }
static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0xDB4890, entity, angle); }
static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0xDB4920, entity); }
static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0xDB4980, entity); }
static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0xDB4980, entity); }
static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0xDB4A60, entity); }
static BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0xDB4A90, entityModelHash, x, y, z, p4); }
static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0xDB4AD0, entity); }
static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { invoke<Void>(0xDB4BA0, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); }
static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { invoke<Void>(0xDB4C40, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); }
static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, Any p15) { invoke<Void>(0xDB4CC0, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot, p15); }
static void ATTACH_ENTITY_BONE_TO_ENTITY_BONE(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { invoke<Void>(0xDB4E60, entity1, entity2, boneIndex1, boneIndex2, p4, p5); }
static void ATTACH_ENTITY_BONE_TO_ENTITY_BONE_Y_FORWARD(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { invoke<Void>(0xDB4E60, entity1, entity2, boneIndex1, boneIndex2, p4, p5); }
static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { invoke<Void>(0xDB4CC0, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); }
static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { invoke<Void>(0xDB5020, entity); }
static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, const char* boneName) { return invoke<int>(0xDB5030, entity, boneName); }
static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0xDB5100, entity); }
static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0xDB5160, entity); }
static void DETACH_ENTITY(Entity entity, BOOL dynamic, BOOL collision) { invoke<Void>(0xDB5170, entity, dynamic, collision); }
static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0xDB5190, entity, toggle); }
static void SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Entity entity, BOOL toggle) { invoke<Void>(0xDB51B0, entity, toggle); }
static BOOL PLAY_ENTITY_ANIM(Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0xDB52A0, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); }
static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, int syncedScene, const char* animation, const char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0xDB5310, entity, syncedScene, animation, propName, p4, p5, p6, p7); }
static BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2, const char* p6, const char* p7, float p8, float p9, Any p10, float p11) { return invoke<BOOL>(0xDB5360, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9, p10, p11); }
static BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2) { return invoke<BOOL>(0xDB5450, x1, y1, z1, x2, y2, z2); }
static BOOL STOP_ENTITY_ANIM(Entity entity, const char* animation, const char* animGroup, float p3) { return invoke<BOOL>(0xDB54F0, entity, animation, animGroup, p3); }
static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0xDB5510, entity, p1, p2); }
static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0xDB5550, entity, actionHash); }
static BOOL FIND_ANIM_EVENT_PHASE(const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0xDB5580, animDictionary, animName, p2, p3, p4); }
static void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDictionary, const char* animName, float time) { invoke<Void>(0xDB55C0, entity, animDictionary, animName, time); }
static void SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDictionary, const char* animName, float speedMultiplier) { invoke<Void>(0xDB55E0, entity, animDictionary, animName, speedMultiplier); }
static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0xDB5600, entity, p1, p2); }
static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0xDB5620, entity); }
static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0xDB5680, ped); }
static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0xDB56E0, vehicle); }
static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0xDB5740, object); }
static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0xDB57A0, entity, toggle); }
static BOOL GET_ENTITY_CAN_BE_DAMAGED(Entity entity) { return invoke<BOOL>(0xDB5830, entity); }
static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { invoke<Void>(0xDB57A0, entity, bCanBeDamaged, relGroup); }
static void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(Entity entity, BOOL toggle) { invoke<Void>(0xDB5960, entity, toggle); }
static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { invoke<Void>(0xDB59E0, entity, toggle); }
static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xDB5AE0, entity, toggle, keepPhysics); }
static BOOL GET_ENTITY_COLLISION_DISABLED(Entity entity) { return invoke<BOOL>(0xDB5B10, entity); }
static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xDB5B70, entity, toggle, keepPhysics); }
static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0xDB5BA0, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); }
static void SET_ENTITY_COORDS_WITHOUT_PLANTS_RESET(Entity entity, float xPos, float yPos, float zPos, BOOL alive, BOOL deadFlag, BOOL ragdollFlag, BOOL clearArea) { invoke<Void>(0xDB5BA0, entity, xPos, yPos, zPos, alive, deadFlag, ragdollFlag, clearArea); }
static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, vector3 xyz, BOOL xAxis, BOOL yAxis, BOOL zAxis) { invoke<Void>(0xDB5BA0, entity, xyz, xAxis, yAxis, zAxis); }
static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0xDB5C70, entity, toggle); }
static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0xDB5CF0, entity, heading); }
static void SET_ENTITY_HEALTH(Entity entity, int health, int p2) { invoke<Void>(0xDB5D00, entity, health, p2); }
static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0xDB5D20, entity, toggle); }
static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { invoke<Void>(0xDB5E00, entity, p1, p2); }
static void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { invoke<Void>(0xDB5F20, entity, toggle); }
static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle, Any p2) { invoke<Void>(0xDB5F90, entity, toggle, p2); }
static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0xDB5FE0, entity); }
static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { invoke<Void>(0xDB6050, entity, speed); }
static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0xDB60C0, entity, toggle); }
static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0xDB6140, entity, p1, p2); }
static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL steamProof, BOOL p7, BOOL waterProof) { invoke<Void>(0xDB6210, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, waterProof); }
static BOOL GET_ENTITY_PROOFS(Entity entity, BOOL* bulletProof, BOOL* fireProof, BOOL* explosionProof, BOOL* collisionProof, BOOL* meleeProof, BOOL* steamProof, BOOL* p7, BOOL* drownProof) { return invoke<BOOL>(0xDB6350, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, drownProof); }
static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0xDB6480, entity, x, y, z, w); }
static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { invoke<Void>(0xDB6650, entity, toggle); }
static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { invoke<Void>(0xDB66A0, entity, pitch, roll, yaw, rotationOrder, p5); }
static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL p2) { invoke<Void>(0xDB66C0, entity, toggle, p2); }
static void SET_ENTITY_WATER_REFLECTION_FLAG(Entity entity, BOOL toggle) { invoke<Void>(0xDB66E0, entity, toggle); }
static void SET_ENTITY_MIRROR_REFLECTION_FLAG(Entity entity, BOOL p1) { invoke<Void>(0xDB6750, entity, p1); }
static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0xDB67C0, entity, x, y, z); }
static void SET_ENTITY_ANGULAR_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0xDB6850, entity, x, y, z); }
static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0xDB68E0, entity, toggle); }
static void SET_ENTITY_LOD_DIST(Entity entity, int value) { invoke<Void>(0xDB6A00, entity, value); }
static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0xDB6A50, entity); }
static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { invoke<Void>(0xDB6AB0, entity, alphaLevel, skin); }
static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0xDB6B10, entity); }
static void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0xDB6AB0, entity); }
static void RESET_PICKUP_ENTITY_GLOW(Entity entity) { invoke<Void>(0xDB6B80, entity); }
static void SET_PICKUP_COLLIDES_WITH_PROJECTILES(Any p0, Any p1) { invoke<Void>(0xDB6BC0, p0, p1); }
static void SET_ENTITY_SORT_BIAS(Entity entity, float p1) { invoke<Void>(0xDB6C20, entity, p1); }
static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0xDB6C80, entity, toggle); }
static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0xDB6CE0, entity, toggle); }
static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { invoke<Void>(0xDB6D60, entity, state); }
static void SET_ENTITY_IS_IN_VEHICLE(Entity entity) { invoke<Void>(0xDB6DC0, entity); }
static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xDB6E20, x, y, z, radius, originalModel, newModel, p6); }
static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xDB6F00, x, y, z, radius, originalModel, newModel, p6); }
static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xDB6F90, x, y, z, radius, modelHash, p5); }
static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xDB6F90, x, y, z, radius, modelHash, p5); }
static void REMOVE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xDB7130, x, y, z, radius, modelHash, p5); }
static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0xDB71C0, x, y, z, p3, modelHash, p5); }
static void REMOVE_FORCED_OBJECT(float x, float y, float z, float p3, Hash modelHash) { invoke<Void>(0xDB7290, x, y, z, p3, modelHash); }
static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL thisFrameOnly) { invoke<Void>(0xDB7310, entity1, entity2, thisFrameOnly); }
static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0xDB7340, entity, toggle); }
static void SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xDB73A0, entity, toggle); }
static void SET_CAN_CLIMB_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xDB7420, entity, toggle); }
static void SET_WAIT_FOR_COLLISIONS_BEFORE_PROBE(Entity entity, BOOL toggle) { invoke<Void>(0xDB74A0, entity, toggle); }
static void SET_ENTITY_NOWEAPONDECALS(Entity entity, BOOL p1) { invoke<Void>(0xDB7500, entity, p1); }
static void SET_ENTITY_USE_MAX_DISTANCE_FOR_WATER_REFLECTION(Entity entity, BOOL p1) { invoke<Void>(0xDB7570, entity, p1); }
static vector3 GET_ENTITY_BONE_ROTATION(Entity entity, int boneIndex) { return invoke<vector3>(0xDB75D0, entity, boneIndex); }
static vector3 GET_ENTITY_BONE_POSTION(Entity entity, int boneIndex) { return invoke<vector3>(0xDB7640, entity, boneIndex); }
static vector3 GET_ENTITY_BONE_OBJECT_ROTATION(Entity entity, int boneIndex) { return invoke<vector3>(0xDB76B0, entity, boneIndex); }
static vector3 GET_ENTITY_BONE_OBJECT_POSTION(Entity entity, int boneIndex) { return invoke<vector3>(0xDB7720, entity, boneIndex); }
static int GET_ENTITY_BONE_COUNT(Entity entity) { return invoke<int>(0xDB7810, entity); }
static void ENABLE_ENTITY_BULLET_COLLISION(Entity entity) { invoke<Void>(0xDB78C0, entity); }
static void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2) { invoke<Void>(0xDB7920, entity1, entity2); }
static void SET_ENTITY_CANT_CAUSE_COLLISION_DAMAGED_ENTITY(Entity entity1, Entity entity2) { invoke<Void>(0xDB79A0, entity1, entity2); }
static void SET_ALLOW_MIGRATE_TO_SPECTATOR(Entity entity, Any p1) { invoke<Void>(0xDB7A20, entity, p1); }
static Entity GET_ENTITY_OF_TYPE_ATTACHED_TO_ENTITY(Entity entity, Hash modelHash) { return invoke<Entity>(0xDB7A90, entity, modelHash); }
static void SET_PICK_UP_BY_CARGOBOB_DISABLED(Entity entity, BOOL toggle) { invoke<Void>(0xDB7B30, entity, toggle); }
static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0xDB9360, ped, name); }
static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int eventType) { invoke<Void>(0xDB93C0, name, eventType); }
static void BLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0xDB9400, name, eventType); }
static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0xDB9400, name, eventType); }
static int ADD_SHOCKING_EVENT_AT_POSITION(int eventType, float x, float y, float z, float duration) { return invoke<int>(0xDB9470, eventType, x, y, z, duration); }
static int ADD_SHOCKING_EVENT_FOR_ENTITY(int eventType, Entity entity, float duration) { return invoke<int>(0xDB9500, eventType, entity, duration); }
static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int eventType, float x, float y, float z, float radius) { return invoke<BOOL>(0xDB95B0, eventType, x, y, z, radius); }
static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0xDB95E0, event); }
static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0xDB9610, p0); }
static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xDB95E0); }
static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0xDB9640); }
static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int eventType) { invoke<Void>(0xDB9650, eventType); }
static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<Void>(0xDB9670); }
static int GET_NUM_TATTOO_SHOP_DLC_ITEMS(int character) { return invoke<int>(0xDA23B0, character); }
static BOOL GET_TATTOO_SHOP_DLC_ITEM_DATA(int characterType, int decorationIndex, Any* outComponent) { return invoke<BOOL>(0xDA23E0, characterType, decorationIndex, outComponent); }
static int GET_TATTOO_SHOP_DLC_ITEM_INDEX(Hash overlayHash, Any p1, int character) { return invoke<int>(0xDA2490, overlayHash, p1, character); }
static void INIT_SHOP_PED_COMPONENT(Any* outComponent) { invoke<Void>(0xDA24D0, outComponent); }
static void INIT_SHOP_PED_PROP(Any* outProp) { invoke<Void>(0xDA2510, outProp); }
static int SETUP_SHOP_PED_APPAREL_QUERY(int p0, int p1, int p2, int p3) { return invoke<int>(0xDA2550, p0, p1, p2, p3); }
static int SETUP_SHOP_PED_APPAREL_QUERY_TU(int character, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0xDA2550, character, p1, p2, p3, p4, componentId); }
static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, Any* outComponent) { invoke<Void>(0xDA2640, componentId, outComponent); }
static int GET_SHOP_PED_QUERY_COMPONENT_INDEX(Hash componentHash) { return invoke<int>(0xDA2640, componentHash); }
static void GET_SHOP_PED_COMPONENT(Hash componentHash, Any* outComponent) { invoke<Void>(0xDA2680, componentHash, outComponent); }
static void GET_SHOP_PED_QUERY_PROP(int componentId, Any* outProp) { invoke<Void>(0xDA2690, componentId, outProp); }
static int GET_SHOP_PED_QUERY_PROP_INDEX(Hash componentHash) { return invoke<int>(0xDA2690, componentHash); }
static void GET_SHOP_PED_PROP(Hash componentHash, Any* outProp) { invoke<Void>(0xDA26D0, componentHash, outProp); }
static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0xDA26E0, entity, componentId, drawableVariant, textureVariant); }
static Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return invoke<Hash>(0xDA2720, entity, componentId, propIndex, propTextureIndex); }
static int GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0xDA2760, componentHash); }
static int GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Hash propHash) { return invoke<int>(0xDA2790, propHash); }
static void GET_VARIANT_COMPONENT(Hash componentHash, int variantComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0xDA27C0, componentHash, variantComponentIndex, nameHash, enumValue, componentType); }
static void GET_VARIANT_PROP(Hash componentHash, int variantPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { invoke<Void>(0xDA27F0, componentHash, variantPropIndex, nameHash, enumValue, anchorPoint); }
static int GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0xDA2820, componentHash); }
static int GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(Hash componentHash) { return invoke<int>(0xDA2850, componentHash); }
static void GET_FORCED_COMPONENT(Hash componentHash, int forcedComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0xDA2880, componentHash, forcedComponentIndex, nameHash, enumValue, componentType); }
static void GET_FORCED_PROP(Hash componentHash, int forcedPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { invoke<Void>(0xDA28B0, componentHash, forcedPropIndex, nameHash, enumValue, anchorPoint); }
static BOOL DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Hash componentHash, Hash restrictionTagHash, int componentId) { return invoke<BOOL>(0xDA28E0, componentHash, restrictionTagHash, componentId); }
static BOOL DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return invoke<BOOL>(0xDA2910, ped, componentId, restrictionTagHash); }
static BOOL DOES_CURRENT_PED_PROP_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return invoke<BOOL>(0xDA29C0, ped, componentId, restrictionTagHash); }
static int SETUP_SHOP_PED_OUTFIT_QUERY(int character, BOOL p1) { return invoke<int>(0xDA2A70, character, p1); }
static void GET_SHOP_PED_QUERY_OUTFIT(int outfitIndex, Any* outfit) { invoke<Void>(0xDA2AB0, outfitIndex, outfit); }
static void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { invoke<Void>(0xDA2AC0, p0, p1); }
static int GET_SHOP_PED_OUTFIT_LOCATE(Any p0) { return invoke<int>(0xDA2AC0, p0); }
static BOOL GET_SHOP_PED_OUTFIT_PROP_VARIANT(Hash outfitHash, int variantIndex, Any* outPropVariant) { return invoke<BOOL>(0xDA2AC0, outfitHash, variantIndex, outPropVariant); }
static BOOL GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Hash outfitHash, int variantIndex, Any* outComponentVariant) { return invoke<BOOL>(0xDA2AC0, outfitHash, variantIndex, outComponentVariant); }
static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0xDA2C10); }
static Hash GET_DLC_VEHICLE_MODEL(int dlcVehicleIndex) { return invoke<Hash>(0xDA2C30, dlcVehicleIndex); }
static BOOL GET_DLC_VEHICLE_DATA(int dlcVehicleIndex, Any* outData) { return invoke<BOOL>(0xDA2C60, dlcVehicleIndex, outData); }
static int GET_DLC_VEHICLE_FLAGS(int dlcVehicleIndex) { return invoke<int>(0xDA2CB0, dlcVehicleIndex); }
static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0xDA2CF0); }
static int GET_NUM_DLC_WEAPONS_SP() { return invoke<int>(0xDA2CF0); }
static BOOL GET_DLC_WEAPON_DATA(int dlcWeaponIndex, Any* outData) { return invoke<BOOL>(0xDA2D40, dlcWeaponIndex, outData); }
static BOOL GET_DLC_WEAPON_DATA_SP(int dlcWeaponIndex, Any* outData) { return invoke<BOOL>(0xDA2D40, dlcWeaponIndex, outData); }
static int GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) { return invoke<int>(0xDA2DC0, dlcWeaponIndex); }
static int GET_NUM_DLC_WEAPON_COMPONENTS_SP(int dlcWeaponIndex) { return invoke<int>(0xDA2DC0, dlcWeaponIndex); }
static BOOL GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0xDA2E20, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); }
static BOOL GET_DLC_WEAPON_COMPONENT_DATA_SP(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0xDA2E20, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); }
static BOOL IS_CONTENT_ITEM_LOCKED(Hash itemHash) { return invoke<BOOL>(0xDA2EB0, itemHash); }
static BOOL IS_DLC_VEHICLE_MOD(Hash hash) { return invoke<BOOL>(0xDA2EE0, hash); }
static Hash GET_DLC_VEHICLE_MOD_LOCK_HASH(Hash hash) { return invoke<Hash>(0xDA2F40, hash); }
static void EXECUTE_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { invoke<Void>(0xDA2FA0, hash); }
static void REVERT_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { invoke<Void>(0xDA2FC0, hash); }
static FireId START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<FireId>(0xDBAFF0, X, Y, Z, maxChildren, isGasFire); }
static void REMOVE_SCRIPT_FIRE(FireId fireHandle) { invoke<Void>(0xDBB0C0, fireHandle); }
static FireId START_ENTITY_FIRE(Entity entity) { return invoke<FireId>(0xDBB100, entity); }
static void STOP_ENTITY_FIRE(Entity entity) { invoke<Void>(0xDBB180, entity); }
static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0xDBB1F0, entity); }
static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0xDBB260, x, y, z, radius); }
static void SET_FLAMMABILITY_MULTIPLIER(float p0) { invoke<Void>(0xDBB2A0, p0); }
static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0xDBB2E0, x, y, z, radius); }
static BOOL GET_CLOSEST_FIRE_POS(vector3* outPosition, float x, float y, float z) { return invoke<BOOL>(0xDBB310, outPosition, x, y, z); }
static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake, BOOL noDamage) { invoke<Void>(0xDBB3E0, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake, noDamage); }
static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xDBB420, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
static void ADD_EXPLOSION_WITH_USER_VFX(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xDBB3E0, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); }
static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xDBB490, explosionType, x1, y1, z1, x2, y2, z2); }
static BOOL IS_EXPLOSION_ACTIVE_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xDBB560, explosionType, x1, y1, z1, x2, y2, z2); }
static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0xDBB630, explosionType, x, y, z, radius); }
static Entity GET_OWNER_OF_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<Entity>(0xDBB6B0, explosionType, x, y, z, radius); }
static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<BOOL>(0xDBB740, explosionType, x1, y1, z1, x2, y2, z2, width); }
static Entity GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0xDBB7D0, explosionType, x1, y1, z1, x2, y2, z2, radius); }
static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0xDCB750, enabled); }
static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xDCB760, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<Void>(0xDCB760, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); }
static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB780, x, y, z, radius, red, green, blue, alpha); }
static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xDCB790, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB7A0, x, y, z, size, red, green, blue, alpha); }
static void DRAW_DEBUG_TEXT(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB7B0, text, x, y, z, red, green, blue, alpha); }
static void DRAW_DEBUG_TEXT_2D(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB7B0, text, x, y, z, red, green, blue, alpha); }
static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB7D0, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha) { invoke<Void>(0xDCB8A0, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha); }
static void DRAW_TEXTURED_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { invoke<Void>(0xDCB980, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); }
static void DRAW_TEXTURED_POLY_WITH_THREE_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float red1, float green1, float blue1, int alpha1, float red2, float green2, float blue2, int alpha2, float red3, float green3, float blue3, int alpha3, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { invoke<Void>(0xDCB980, x1, y1, z1, x2, y2, z2, x3, y3, z3, red1, green1, blue1, alpha1, red2, green2, blue2, alpha2, red3, green3, blue3, alpha3, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); }
static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xDCBA80, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void SET_BACKFACECULLING(BOOL toggle) { invoke<Void>(0xDCBB50, toggle); }
static void SET_DEPTHWRITING(BOOL toggle) { invoke<Void>(0xDCBB70, toggle); }
static BOOL BEGIN_TAKE_MISSION_CREATOR_PHOTO() { return invoke<BOOL>(0xDCBBB0); }
static int GET_STATUS_OF_TAKE_MISSION_CREATOR_PHOTO() { return invoke<int>(0xDCBBD0); }
static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO() { invoke<Void>(0xDCBBF0); }
static BOOL LOAD_MISSION_CREATOR_PHOTO(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xDCBC00, p0, p1, p2, p3); }
static int GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(Any* p0) { return invoke<int>(0xDCBC00, p0); }
static BOOL BEGIN_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<BOOL>(0xDCBC90); }
static int GET_STATUS_OF_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<int>(0xDCBCC0); }
static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO_PREVIEW() { invoke<Void>(0xDCBBF0); }
static BOOL BEGIN_TAKE_HIGH_QUALITY_PHOTO() { return invoke<BOOL>(0xDCBD00); }
static int GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO() { return invoke<int>(0xDCBD20); }
static void FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO() { invoke<Void>(0xDCBD40); }
static void SET_TAKEN_PHOTO_IS_MUGSHOT(BOOL toggle) { invoke<Void>(0xDCBD50, toggle); }
static void SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(Any p0, int p1) { invoke<Void>(0xDCBD70, p0, p1); }
static void SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(Any p0) { invoke<Void>(0xDCBD80, p0); }
static BOOL SAVE_HIGH_QUALITY_PHOTO(int unused) { return invoke<BOOL>(0xDCBDA0, unused); }
static int GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() { return invoke<int>(0xDCBDA0); }
static BOOL BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(Any p0) { return invoke<BOOL>(0xDCBDE0, p0); }
static int GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int p0) { return invoke<int>(0xDCBE10, p0); }
static void FREE_MEMORY_FOR_LOW_QUALITY_PHOTO() { invoke<Void>(0xDCBE30); }
static void DRAW_LOW_QUALITY_PHOTO_TO_PHONE(BOOL p0, BOOL p1) { invoke<Void>(0xDCBE40, p0, p1); }
static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0xDCBE60); }
static int GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0xDCBE70); }
static int GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0xDCBE80); }
static BOOL QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(Any p0) { return invoke<BOOL>(0xDCBEA0, p0); }
static int GET_STATUS_OF_SORTED_LIST_OPERATION(Any p0) { return invoke<int>(0xDCBED0, p0); }
static void CLEAR_STATUS_OF_SORTED_LIST_OPERATION() { invoke<Void>(0xDCBF00); }
static BOOL DOES_THIS_PHOTO_SLOT_CONTAIN_A_VALID_PHOTO(Any p0) { return invoke<BOOL>(0xDCBF10, p0); }
static BOOL LOAD_HIGH_QUALITY_PHOTO(Any p0) { return invoke<BOOL>(0xDCBF20, p0); }
static int GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(int p0) { return invoke<int>(0xDCBF20, p0); }
static void DRAW_LIGHT_WITH_RANGEEX(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { invoke<Void>(0xDCBF40, x, y, z, r, g, b, range, intensity, shadow); }
static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { invoke<Void>(0xDCBF70, posX, posY, posZ, colorR, colorG, colorB, range, intensity); }
static void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) { invoke<Void>(0xDCBFA0, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, hardness, radius, falloff); }
static void DRAW_SHADOWED_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, int shadowId) { invoke<Void>(0xDCBFD0, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff, shadowId); }
static void FADE_UP_PED_LIGHT(float p0) { invoke<Void>(0xDCC040, p0); }
static void UPDATE_LIGHTS_ON_ENTITY(Entity entity) { invoke<Void>(0xDCC050, entity); }
static void SET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE(Any p0) { invoke<Void>(0xDCC0F0, p0); }
static float GET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE() { return invoke<float>(0xDCC100); }
static void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) { invoke<Void>(0xDCC120, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); }
static void DRAW_MARKER_EX(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, Any p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts, BOOL p24, BOOL p25) { invoke<Void>(0xDCC120, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts, p24, p25); }
static void DRAW_MARKER_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, float alpha) { invoke<Void>(0xDCC120, x, y, z, radius, red, green, blue, alpha); }
static int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float diameter, int red, int green, int blue, int alpha, int reserved) { return invoke<int>(0xDCC460, type, posX1, posY1, posZ1, posX2, posY2, posZ2, diameter, red, green, blue, alpha, reserved); }
static void SET_CHECKPOINT_INSIDE_CYLINDER_HEIGHT_SCALE(int checkpoint, float scale) { invoke<Void>(0xDCC540, checkpoint, scale); }
static void SET_CHECKPOINT_INSIDE_CYLINDER_SCALE(int checkpoint, float scale) { invoke<Void>(0xDCC590, checkpoint, scale); }
static void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { invoke<Void>(0xDCC5E0, checkpoint, nearHeight, farHeight, radius); }
static void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xDCC650, checkpoint, red, green, blue, alpha); }
static void SET_CHECKPOINT_RGBA2(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xDCC650, checkpoint, red, green, blue, alpha); }
static void SET_CHECKPOINT_CLIPPLANE_WITH_POS_NORM(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { invoke<Void>(0xDCC750, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); }
static void SET_CHECKPOINT_FORCE_OLD_ARROW_POINTING(int checkpoint) { invoke<Void>(0xDCC7D0, checkpoint); }
static void SET_CHECKPOINT_DECAL_ROT_ALIGNED_TO_CAMERA_ROT(int checkpoint) { invoke<Void>(0xDCC810, checkpoint); }
static void SET_CHECKPOINT_FORCE_DIRECTION(int checkpoint) { invoke<Void>(0xDCC850, checkpoint); }
static void SET_CHECKPOINT_DIRECTION(int checkpoint, float posX, float posY, float posZ) { invoke<Void>(0xDCC890, checkpoint, posX, posY, posZ); }
static void DELETE_CHECKPOINT(int checkpoint) { invoke<Void>(0xDCC8F0, checkpoint); }
static void DONT_RENDER_IN_GAME_UI(BOOL p0) { invoke<Void>(0xDCC930, p0); }
static void FORCE_RENDER_IN_GAME_UI(BOOL toggle) { invoke<Void>(0xDCC950, toggle); }
static void REQUEST_STREAMED_TEXTURE_DICT(const char* textureDict, BOOL p1) { invoke<Void>(0xDCC970, textureDict, p1); }
static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(const char* textureDict) { return invoke<BOOL>(0xDCCA00, textureDict); }
static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* textureDict) { invoke<Void>(0xDCCA60, textureDict); }
static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a) { invoke<Void>(0xDCCAC0, x, y, width, height, r, g, b, a); }
static void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL toggle) { invoke<Void>(0xDCCB00, toggle); }
static void SET_SCRIPT_GFX_DRAW_ORDER(int drawOrder) { invoke<Void>(0xDCCB20, drawOrder); }
static void SET_SCRIPT_GFX_ALIGN(int horizontalAlign, int verticalAlign) { invoke<Void>(0xDCCBB0, horizontalAlign, verticalAlign); }
static void RESET_SCRIPT_GFX_ALIGN() { invoke<Void>(0xDCCBB0); }
static void SET_SCRIPT_GFX_ALIGN_PARAMS(float x, float y, float w, float h) { invoke<Void>(0xDCCBB0, x, y, w, h); }
static void GET_SCRIPT_GFX_ALIGN_POSITION(float x, float y, float* calculatedX, float* calculatedY) { invoke<Void>(0xDCCC30, x, y, calculatedX, calculatedY); }
static float GET_SAFE_ZONE_SIZE() { return invoke<float>(0xDCCCB0); }
static void DRAW_SPRITE(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha) { invoke<Void>(0xDCCCD0, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha); }
static void DRAW_SPRITE_ARX(const char* textureDict, const char* textureName, float x, float y, float width, float height, float p6, int red, int green, int blue, int alpha, Any p11, Any p12) { invoke<Void>(0xDCCCD0, textureDict, textureName, x, y, width, height, p6, red, green, blue, alpha, p11, p12); }
static void DRAW_SPRITE_NAMED_RENDERTARGET(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, Any p11) { invoke<Void>(0xDCCCD0, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11); }
static void DRAW_SPRITE_ARX_WITH_UV(const char* textureDict, const char* textureName, float x, float y, float width, float height, float u1, float v1, float u2, float v2, float heading, int red, int green, int blue, int alpha, Any p15) { invoke<Void>(0xDCCCD0, textureDict, textureName, x, y, width, height, u1, v1, u2, v2, heading, red, green, blue, alpha, p15); }
static int ADD_ENTITY_ICON(Entity entity, const char* icon) { return invoke<int>(0xDCD330, entity, icon); }
static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { invoke<Void>(0xDCD3C0, entity, toggle); }
static void SET_ENTITY_ICON_COLOR(Entity entity, int red, int green, int blue, int alpha) { invoke<Void>(0xDCD420, entity, red, green, blue, alpha); }
static void SET_DRAW_ORIGIN(float x, float y, float z, BOOL p3) { invoke<Void>(0xDCD4C0, x, y, z, p3); }
static void CLEAR_DRAW_ORIGIN() { invoke<Void>(0xDCD580); }
static int SET_BINK_MOVIE(const char* name) { return invoke<int>(0xDCD590, name); }
static void PLAY_BINK_MOVIE(int binkMovie) { invoke<Void>(0xDCD620, binkMovie); }
static void STOP_BINK_MOVIE(int binkMovie) { invoke<Void>(0xDCD660, binkMovie); }
static void RELEASE_BINK_MOVIE(int binkMovie) { invoke<Void>(0xDCD6A0, binkMovie); }
static void DRAW_BINK_MOVIE(int binkMovie, float p1, float p2, float p3, float p4, float p5, int r, int g, int b, int a) { invoke<Void>(0xDCD6F0, binkMovie, p1, p2, p3, p4, p5, r, g, b, a); }
static void SET_BINK_MOVIE_TIME(int binkMovie, float progress) { invoke<Void>(0xDCD590, binkMovie, progress); }
static float GET_BINK_MOVIE_TIME(int binkMovie) { return invoke<float>(0xDCD880, binkMovie); }
static void SET_BINK_MOVIE_VOLUME(int binkMovie, float value) { invoke<Void>(0xDCD590, binkMovie, value); }
static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0xDCD920, entity); }
static void SET_BINK_MOVIE_AUDIO_FRONTEND(int binkMovie, BOOL p1) { invoke<Void>(0xDCD590, binkMovie, p1); }
static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0xDCD9D0, toggle); }
static void SET_BINK_SHOULD_SKIP(int binkMovie, BOOL bShouldSkip) { invoke<Void>(0xDCD9F0, binkMovie, bShouldSkip); }
static int LOAD_MOVIE_MESH_SET(const char* movieMeshSetName) { return invoke<int>(0xDCDA40, movieMeshSetName); }
static void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { invoke<Void>(0xDCDAB0, movieMeshSet); }
static int QUERY_MOVIE_MESH_SET_STATE(Any p0) { return invoke<int>(0xDCDAF0, p0); }
static void GET_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xDCDB30, x, y); }
static void GET_ACTUAL_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xDCDB50, x, y); }
static float GET_ASPECT_RATIO(BOOL b) { return invoke<float>(0xDCDB80, b); }
static float GET_SCREEN_ASPECT_RATIO() { return invoke<float>(0xDCDBB0); }
static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0xDCDBE0); }
static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0xDCDC00); }
static void ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9() { invoke<Void>(0xDCDC20); }
static void SET_NIGHTVISION(BOOL toggle) { invoke<Void>(0xDCDC30, toggle); }
static BOOL GET_REQUESTINGNIGHTVISION() { return invoke<BOOL>(0xDCDC50); }
static BOOL GET_USINGNIGHTVISION() { return invoke<BOOL>(0xDCDC60); }
static void SET_EXPOSURETWEAK(BOOL toggle) { invoke<Void>(0xDCDCB0, toggle); }
static void FORCE_EXPOSURE_READBACK(BOOL toggle) { invoke<Void>(0xDCDCD0, toggle); }
static void OVERRIDE_NIGHTVISION_LIGHT_RANGE(float p0) { invoke<Void>(0xDCDCF0, p0); }
static void SET_NOISEOVERIDE(BOOL toggle) { invoke<Void>(0xDCDD00, toggle); }
static void SET_NOISINESSOVERIDE(float value) { invoke<Void>(0xDCDD20, value); }
static BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0xDCDD40, worldX, worldY, worldZ, screenX, screenY); }
static vector3 GET_TEXTURE_RESOLUTION(const char* textureDict, const char* textureName) { return invoke<vector3>(0xDCDDB0, textureDict, textureName); }
static BOOL OVERRIDE_PED_CREW_LOGO_TEXTURE(Ped ped, const char* txd, const char* txn) { return invoke<BOOL>(0xDCDE20, ped, txd, txn); }
static void SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(float p0) { invoke<Void>(0xDCDE50, p0); }
static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<Void>(0xDCDE70, p0, p1, fadeIn, duration, fadeOut); }
static void DISABLE_OCCLUSION_THIS_FRAME() { invoke<Void>(0xDCDEA0); }
static void SET_ARTIFICIAL_LIGHTS_STATE(BOOL state) { invoke<Void>(0xDCDEB0, state); }
static void SET_ARTIFICIAL_VEHICLE_LIGHTS_STATE(BOOL toggle) { invoke<Void>(0xDCDED0, toggle); }
static void DISABLE_HDTEX_THIS_FRAME() { invoke<Void>(0xDCDEF0); }
static int CREATE_TRACKED_POINT() { return invoke<int>(0xDCDF00); }
static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { invoke<Void>(0xDCDF20, point, x, y, z, radius); }
static BOOL IS_TRACKED_POINT_VISIBLE(int point) { return invoke<BOOL>(0xDCDFD0, point); }
static void DESTROY_TRACKED_POINT(int point) { invoke<Void>(0xDCE000, point); }
static int SET_GRASS_CULL_SPHERE(float p0, float p1, float p2, float p3) { return invoke<int>(0xDCE010, p0, p1, p2, p3); }
static void REMOVE_GRASS_CULL_SPHERE(int handle) { invoke<Void>(0xDCE020, handle); }
static void PROCGRASS_ENABLE_CULLSPHERE(int handle, float x, float y, float z, float scale) { invoke<Void>(0xDCE030, handle, x, y, z, scale); }
static void PROCGRASS_DISABLE_CULLSPHERE(int handle) { invoke<Void>(0xDCE090, handle); }
static BOOL PROCGRASS_IS_CULLSPHERE_ENABLED(int handle) { return invoke<BOOL>(0xDCE0B0, handle); }
static void PROCGRASS_ENABLE_AMBSCALESCAN() { invoke<Void>(0xDCE0E0); }
static void PROCGRASS_DISABLE_AMBSCALESCAN() { invoke<Void>(0xDCE0F0); }
static void DISABLE_PROCOBJ_CREATION() { invoke<Void>(0xDCE100); }
static void ENABLE_PROCOBJ_CREATION() { invoke<Void>(0xDCE110); }
static void GRASSBATCH_ENABLE_FLATTENING_EXT_IN_SPHERE(float x, float y, float z, Any p3, float p4, float p5, float p6, float scale) { invoke<Void>(0xDCE120, x, y, z, p3, p4, p5, p6, scale); }
static void GRASSBATCH_ENABLE_FLATTENING_IN_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6) { invoke<Void>(0xDCE1B0, x, y, z, radius, p4, p5, p6); }
static void GRASSBATCH_DISABLE_FLATTENING() { invoke<Void>(0xDCE240); }
static void CASCADE_SHADOWS_INIT_SESSION() { invoke<Void>(0xDCE250); }
static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { invoke<Void>(0xDCE270, p0, p1, p2, p3, p4, p5, p6, p7); }
static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(float p0) { invoke<Void>(0xDCE270, p0); }
static void CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(float p0) { invoke<Void>(0xDCE2C0, p0); }
static void CASCADE_SHADOWS_SET_SPLIT_Z_EXP_WEIGHT(float p0) { invoke<Void>(0xDCE2D0, p0); }
static void CASCADE_SHADOWS_SET_BOUND_POSITION(Any p0) { invoke<Void>(0xDCE2E0, p0); }
static void CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(BOOL toggle) { invoke<Void>(0xDCE2F0, toggle); }
static void CASCADE_SHADOWS_SET_SCREEN_SIZE_CHECK_ENABLED(BOOL p0) { invoke<Void>(0xDCE310, p0); }
static void CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(const char* type) { invoke<Void>(0xDCE330, type); }
static void CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE() { invoke<Void>(0xDCE340); }
static void CASCADE_SHADOWS_SET_AIRCRAFT_MODE(BOOL p0) { invoke<Void>(0xDCE350, p0); }
static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(BOOL p0) { invoke<Void>(0xDCE370, p0); }
static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(float p0) { invoke<Void>(0xDCE390, p0); }
static void CASCADE_SHADOWS_ENABLE_FREEZER(BOOL p0) { invoke<Void>(0xDCE3A0, p0); }
static void WATER_REFLECTION_SET_SCRIPT_OBJECT_VISIBILITY(Any p0) { invoke<Void>(0xDCE3C0, p0); }
static void GOLF_TRAIL_SET_ENABLED(BOOL toggle) { invoke<Void>(0xDCE3E0, toggle); }
static void GOLF_TRAIL_SET_PATH(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { invoke<Void>(0xDCE400, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void GOLF_TRAIL_SET_RADIUS(float p0, float p1, float p2) { invoke<Void>(0xDCE450, p0, p1, p2); }
static void GOLF_TRAIL_SET_COLOUR(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<Void>(0xDCE470, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void GOLF_TRAIL_SET_TESSELLATION(int p0, int p1) { invoke<Void>(0xDCE4E0, p0, p1); }
static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT_ENABLE(BOOL p0) { invoke<Void>(0xDCE4F0, p0); }
static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT(int type, float xPos, float yPos, float zPos, float p4, int red, int green, int blue, int alpha) { invoke<Void>(0xDCE510, type, xPos, yPos, zPos, p4, red, green, blue, alpha); }
static void GOLF_TRAIL_SET_SHADER_PARAMS(float p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xDCE5D0, p0, p1, p2, p3, p4); }
static void GOLF_TRAIL_SET_FACING(BOOL p0) { invoke<Void>(0xDCE600, p0); }
static float GOLF_TRAIL_GET_MAX_HEIGHT() { return invoke<float>(0xDCE620); }
static vector3 GOLF_TRAIL_GET_VISUAL_CONTROL_POINT(int p0) { return invoke<vector3>(0xDCE640, p0); }
static void SET_SEETHROUGH(BOOL toggle) { invoke<Void>(0xDCE690, toggle); }
static BOOL GET_USINGSEETHROUGH() { return invoke<BOOL>(0xDCE6D0); }
static void SEETHROUGH_RESET() { invoke<Void>(0xDCE6E0); }
static void SEETHROUGH_SET_FADE_STARTDISTANCE(float distance) { invoke<Void>(0xDCE6F0, distance); }
static void SEETHROUGH_SET_FADE_ENDDISTANCE(float distance) { invoke<Void>(0xDCE710, distance); }
static float SEETHROUGH_GET_MAX_THICKNESS() { return invoke<float>(0xDCE730); }
static void SEETHROUGH_SET_MAX_THICKNESS(float thickness) { invoke<Void>(0xDCE750, thickness); }
static void SEETHROUGH_SET_NOISE_MIN(float amount) { invoke<Void>(0xDCE780, amount); }
static void SEETHROUGH_SET_NOISE_MAX(float amount) { invoke<Void>(0xDCE7A0, amount); }
static void SEETHROUGH_SET_HILIGHT_INTENSITY(float intensity) { invoke<Void>(0xDCE7C0, intensity); }
static void SEETHROUGH_SET_HIGHLIGHT_NOISE(float noise) { invoke<Void>(0xDCE7E0, noise); }
static void SEETHROUGH_SET_HEATSCALE(int index, float heatScale) { invoke<Void>(0xDCE800, index, heatScale); }
static void SEETHROUGH_SET_COLOR_NEAR(int red, int green, int blue) { invoke<Void>(0xDCE840, red, green, blue); }
static void SET_MOTIONBLUR_MAX_VEL_SCALER(float p0) { invoke<Void>(0xDCE8C0, p0); }
static float GET_MOTIONBLUR_MAX_VEL_SCALER() { return invoke<float>(0xDCE8E0); }
static void SET_FORCE_MOTIONBLUR(BOOL toggle) { invoke<Void>(0xDCE900, toggle); }
static void TOGGLE_PLAYER_DAMAGE_OVERLAY(BOOL toggle) { invoke<Void>(0xDCE920, toggle); }
static void RESET_ADAPTATION(int p0) { invoke<Void>(0xDCE950, p0); }
static BOOL TRIGGER_SCREENBLUR_FADE_IN(float transitionTime) { return invoke<BOOL>(0xDCE960, transitionTime); }
static BOOL TRIGGER_SCREENBLUR_FADE_OUT(float transitionTime) { return invoke<BOOL>(0xDCE9B0, transitionTime); }
static void DISABLE_SCREENBLUR_FADE() { invoke<Void>(0xDCEA10); }
static float GET_SCREENBLUR_FADE_CURRENT_TIME() { return invoke<float>(0xDCEA20); }
static BOOL IS_SCREENBLUR_FADE_RUNNING() { return invoke<BOOL>(0xDCEA40); }
static void TOGGLE_PAUSED_RENDERPHASES(BOOL toggle) { invoke<Void>(0xDCEA80, toggle); }
static BOOL GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return invoke<BOOL>(0xDCEA80); }
static void RESET_PAUSED_RENDERPHASES() { invoke<Void>(0xDCEAC0); }
static void GRAB_PAUSEMENU_OWNERSHIP() { invoke<Void>(0xDCEAD0); }
static void SET_HIDOF_OVERRIDE(BOOL p0, BOOL p1, float nearplaneOut, float nearplaneIn, float farplaneOut, float farplaneIn) { invoke<Void>(0xDCEAF0, p0, p1, nearplaneOut, nearplaneIn, farplaneOut, farplaneIn); }
static void SET_LOCK_ADAPTIVE_DOF_DISTANCE(BOOL p0) { invoke<Void>(0xDCEB40, p0); }
static BOOL PHONEPHOTOEDITOR_TOGGLE(BOOL p0) { return invoke<BOOL>(0xDCEB60, p0); }
static BOOL PHONEPHOTOEDITOR_IS_ACTIVE() { return invoke<BOOL>(0xDCEBC0); }
static BOOL PHONEPHOTOEDITOR_SET_FRAME_TXD(const char* textureDict, BOOL p1) { return invoke<BOOL>(0xDCEBE0, textureDict, p1); }
static BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<BOOL>(0xDCEC10, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<BOOL>(0xDCECF0, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCEDE0, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCEE70, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCEF00, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCEF90, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDCEF00, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0xDCF0A0, r, g, b); }
static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0xDCF0C0, alpha); }
static void SET_PARTICLE_FX_NON_LOOPED_SCALE(float scale) { invoke<Void>(0xDCF0F0, scale); }
static void SET_PARTICLE_FX_NON_LOOPED_EMITTER_SIZE(float p0, float p1, float scale) { invoke<Void>(0xDCF100, p0, p1, scale); }
static void SET_PARTICLE_FX_FORCE_VEHICLE_INTERIOR(BOOL toggle) { invoke<Void>(0xDCF120, toggle); }
static int START_PARTICLE_FX_LOOPED_AT_COORD(const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<int>(0xDCF140, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); }
static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xDCF1A0, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static int START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xDCF200, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static int START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xDCF200, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0xDCF320, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, r, g, b, a); }
static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0xDCF320, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis, r, g, b, a); }
static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { invoke<Void>(0xDCF440, ptfxHandle, p1); }
static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { invoke<Void>(0xDCF460, ptfxHandle, p1); }
static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { invoke<Void>(0xDCF460, entity); }
static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0xDCF460, X, Y, Z, radius); }
static void FORCE_PARTICLE_FX_IN_VEHICLE_INTERIOR(Any p0, Any p1) { invoke<Void>(0xDCF500, p0, p1); }
static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0xDCF520, ptfxHandle); }
static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<Void>(0xDCF550, ptfxHandle, x, y, z, rotX, rotY, rotZ); }
static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, const char* propertyName, float amount, BOOL noNetwork) { invoke<Void>(0xDCF5A0, ptfxHandle, propertyName, amount, noNetwork); }
static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0xDCF5C0, ptfxHandle, r, g, b, p4); }
static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { invoke<Void>(0xDCF5F0, ptfxHandle, alpha); }
static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { invoke<Void>(0xDCF600, ptfxHandle, scale); }
static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxHandle, float range) { invoke<Void>(0xDCF610, ptfxHandle, range); }
static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0xDCF630, p0); }
static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDCF650, vehicle, p1); }
static void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { invoke<Void>(0xDCF6D0, p0); }
static void CLEAR_PARTICLE_FX_SHOOTOUT_BOAT() { invoke<Void>(0xDCF740); }
static void SET_PARTICLE_FX_BLOOD_SCALE(Any p0) { invoke<Void>(0xDCF770, p0); }
static void DISABLE_IN_WATER_PTFX(BOOL toggle) { invoke<Void>(0xDCF7B0, toggle); }
static void DISABLE_DOWNWASH_PTFX(BOOL toggle) { invoke<Void>(0xDCF7E0, toggle); }
static void SET_PARTICLE_FX_SLIPSTREAM_LODRANGE_SCALE(float scale) { invoke<Void>(0xDCF810, scale); }
static void ENABLE_CLOWN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xDCF850, toggle); }
static void ENABLE_ALIEN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xDCF890, toggle); }
static void SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale) { invoke<Void>(0xDCF8D0, scale); }
static void SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(float p0) { invoke<Void>(0xDCF910, p0); }
static void SET_PARTICLE_FX_BULLET_TRACE_NO_ANGLE_REJECT(BOOL p0) { invoke<Void>(0xDCF950, p0); }
static void SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(float p0) { invoke<Void>(0xDCF980, p0); }
static void SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(float p0) { invoke<Void>(0xDCF9C0, p0); }
static void SET_PARTICLE_FX_FOOT_OVERRIDE_NAME(const char* p0) { invoke<Void>(0xDCFA00, p0); }
static void SET_SKIDMARK_RANGE_SCALE(float scale) { invoke<Void>(0xDCFA80, scale); }
static void SET_PTFX_FORCE_VEHICLE_INTERIOR_FLAG(Any p0) { invoke<Void>(0xDCFAC0, p0); }
static void REGISTER_POSTFX_BULLET_IMPACT(float weaponWorldPosX, float weaponWorldPosY, float weaponWorldPosZ, float intensity) { invoke<Void>(0xDCFAF0, weaponWorldPosX, weaponWorldPosY, weaponWorldPosZ, intensity); }
static void FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(BOOL p0) { invoke<Void>(0xDCFB60, p0); }
static void USE_PARTICLE_FX_ASSET(const char* name) { invoke<Void>(0xDCFB80, name); }
static void SET_PARTICLE_FX_OVERRIDE(const char* oldAsset, const char* newAsset) { invoke<Void>(0xDCFBA0, oldAsset, newAsset); }
static void RESET_PARTICLE_FX_OVERRIDE(const char* name) { invoke<Void>(0xDCFBA0, name); }
static void SET_WEATHER_PTFX_USE_OVERRIDE_SETTINGS(BOOL p0) { invoke<Void>(0xDCFC50, p0); }
static void SET_WEATHER_PTFX_OVERRIDE_CURR_LEVEL(float p0) { invoke<Void>(0xDCFC70, p0); }
static void WASH_DECALS_IN_RANGE(float x, float y, float z, float range, float p4) { invoke<Void>(0xDCFC90, x, y, z, range, p4); }
static void WASH_DECALS_FROM_VEHICLE(Vehicle vehicle, float p1) { invoke<Void>(0xDCFCD0, vehicle, p1); }
static void FADE_DECALS_IN_RANGE(float x, float y, float z, float p3, float p4) { invoke<Void>(0xDCFD30, x, y, z, p3, p4); }
static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0xDCFD70, x, y, z, range); }
static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0xDCFDB0, obj); }
static void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { invoke<Void>(0xDCFDB0, obj, x, y, z); }
static void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDCFE80, vehicle); }
static int ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19) { return invoke<int>(0xDCFEE0, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19); }
static int ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0xDCFF70, x, y, z, groundLvl, width, transparency); }
static int ADD_OIL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0xDCFFF0, x, y, z, groundLvl, width, transparency); }
static void START_PETROL_TRAIL_DECALS(float p0) { invoke<Void>(0xDD0070, p0); }
static void ADD_PETROL_TRAIL_DECAL_INFO(float x, float y, float z, float p3) { invoke<Void>(0xDD00D0, x, y, z, p3); }
static void END_PETROL_TRAIL_DECALS() { invoke<Void>(0xDD0100); }
static void REMOVE_DECAL(int decal) { invoke<Void>(0xDD0110, decal); }
static BOOL IS_DECAL_ALIVE(int decal) { return invoke<BOOL>(0xDD0130, decal); }
static float GET_DECAL_WASH_LEVEL(int decal) { return invoke<float>(0xDD0160, decal); }
static void SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME() { invoke<Void>(0xDD0190); }
static void SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME() { invoke<Void>(0xDD01A0); }
static void SET_DISABLE_DECAL_RENDERING_THIS_FRAME() { invoke<Void>(0xDD01B0); }
static BOOL GET_IS_PETROL_DECAL_IN_RANGE(float xCoord, float yCoord, float zCoord, float radius) { return invoke<BOOL>(0xDD01C0, xCoord, yCoord, zCoord, radius); }
static void PATCH_DECAL_DIFFUSE_MAP(int decalType, const char* textureDict, const char* textureName) { invoke<Void>(0xDD0270, decalType, textureDict, textureName); }
static void UNPATCH_DECAL_DIFFUSE_MAP(int decalType) { invoke<Void>(0xDD0270, decalType); }
static void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0xDD02D0, p0, p1); }
static BOOL ADD_VEHICLE_CREW_EMBLEM(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return invoke<BOOL>(0xDD0360, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); }
static BOOL ABORT_VEHICLE_CREW_EMBLEM_REQUEST(int* p0) { return invoke<BOOL>(0xDD03B0, p0); }
static void REMOVE_VEHICLE_CREW_EMBLEM(Vehicle vehicle, int p1) { invoke<Void>(0xDD0400, vehicle, p1); }
static int GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(Vehicle vehicle, int p1) { return invoke<int>(0xDD0460, vehicle, p1); }
static BOOL DOES_VEHICLE_HAVE_CREW_EMBLEM(Vehicle vehicle, int p1) { return invoke<BOOL>(0xDD04C0, vehicle, p1); }
static void DISABLE_COMPOSITE_SHOTGUN_DECALS(BOOL toggle) { invoke<Void>(0xDD0530, toggle); }
static void DISABLE_SCUFF_DECALS(BOOL toggle) { invoke<Void>(0xDD0560, toggle); }
static void SET_DECAL_BULLET_IMPACT_RANGE_SCALE(float p0) { invoke<Void>(0xDD0590, p0); }
static void OVERRIDE_INTERIOR_SMOKE_NAME(const char* name) { invoke<Void>(0xDD05D0, name); }
static void OVERRIDE_INTERIOR_SMOKE_LEVEL(float level) { invoke<Void>(0xDD0600, level); }
static void OVERRIDE_INTERIOR_SMOKE_END() { invoke<Void>(0xDD0620); }
static void REGISTER_NOIR_LENS_EFFECT() { invoke<Void>(0xDD0630); }
static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { invoke<Void>(0xDD0660, toggle); }
static void RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(BOOL p0) { invoke<Void>(0xDD0680, p0); }
static void REQUEST_EARLY_LIGHT_CHECK() { invoke<Void>(0xDD06A0); }
static void USE_SNOW_FOOT_VFX_WHEN_UNSHELTERED(BOOL toggle) { invoke<Void>(0xDD06B0, toggle); }
static void USE_SNOW_WHEEL_VFX_WHEN_UNSHELTERED(BOOL toggle) { invoke<Void>(0xDD06F0, toggle); }
static void DISABLE_REGION_VFX(Any p0) { invoke<Void>(0xDD0710, p0); }
static void PRESET_INTERIOR_AMBIENT_CACHE(const char* timecycleModifierName) { invoke<Void>(0xDD0760, timecycleModifierName); }
static void SET_TIMECYCLE_MODIFIER(const char* modifierName) { invoke<Void>(0xDD07B0, modifierName); }
static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0xDD07B0, strength); }
static void SET_TRANSITION_TIMECYCLE_MODIFIER(const char* modifierName, float transition) { invoke<Void>(0xDD0850, modifierName, transition); }
static void SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(float strength) { invoke<Void>(0xDD08B0, strength); }
static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0xDD08D0); }
static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0xDD0910); }
static int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return invoke<int>(0xDD0930); }
static BOOL GET_IS_TIMECYCLE_TRANSITIONING_OUT() { return invoke<BOOL>(0xDD0950); }
static void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0xDD0970); }
static void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0xDD0980); }
static void SET_CURRENT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xDD0990, modifierName); }
static void SET_PLAYER_TCMODIFIER_TRANSITION(float value) { invoke<Void>(0xDD0A60, value); }
static void SET_NEXT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xDD0A80, modifierName); }
static void ADD_TCMODIFIER_OVERRIDE(const char* modifierName1, const char* modifierName2) { invoke<Void>(0xDD0B30, modifierName1, modifierName2); }
static void CLEAR_ALL_TCMODIFIER_OVERRIDES(const char* p0) { invoke<Void>(0xDD0BA0, p0); }
static void SET_EXTRA_TCMODIFIER(const char* modifierName) { invoke<Void>(0xDD0BB0, modifierName); }
static void CLEAR_EXTRA_TCMODIFIER() { invoke<Void>(0xDD0C30); }
static int GET_EXTRA_TCMODIFIER() { return invoke<int>(0xDD0C50); }
static void ENABLE_MOON_CYCLE_OVERRIDE(float strength) { invoke<Void>(0xDD0C70, strength); }
static void DISABLE_MOON_CYCLE_OVERRIDE() { invoke<Void>(0xDD0CA0); }
static int REQUEST_SCALEFORM_MOVIE(const char* scaleformName) { return invoke<int>(0xDD0CC0, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_WITH_IGNORE_SUPER_WIDESCREEN(const char* scaleformName) { return invoke<int>(0xDD0CC0, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_INSTANCE(const char* scaleformName) { return invoke<int>(0xDD0CC0, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED(const char* scaleformName) { return invoke<int>(0xDD0CC0, scaleformName); }
static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return invoke<BOOL>(0xDD0D80, scaleformHandle); }
static BOOL IS_ACTIVE_SCALEFORM_MOVIE_DELETING(int val) { return invoke<BOOL>(0xDD0E90, val); }
static BOOL IS_SCALEFORM_MOVIE_DELETING(int val) { return invoke<BOOL>(0xDD0F10, val); }
static BOOL HAS_SCALEFORM_MOVIE_FILENAME_LOADED(const char* scaleformName) { return invoke<BOOL>(0xDD0F50, scaleformName); }
static BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) { return invoke<BOOL>(0xDD0FF0, scaleformHandle); }
static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) { invoke<Void>(0xDD1020, scaleformHandle); }
static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { invoke<Void>(0xDD10A0, scaleform, toggle); }
static void SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(int scaleformHandle, BOOL toggle) { invoke<Void>(0xDD1100, scaleformHandle, toggle); }
static void SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(int scaleformHandle, BOOL toggle) { invoke<Void>(0xDD1150, scaleformHandle, toggle); }
static void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int p9) { invoke<Void>(0xDD11A0, scaleformHandle, x, y, width, height, red, green, blue, alpha, p9); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, int p5) { invoke<Void>(0xDD11A0, scaleform, red, green, blue, alpha, p5); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<Void>(0xDD11A0, scaleform1, scaleform2, red, green, blue, alpha); }
static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0xDD11A0, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); }
static void DRAW_SCALEFORM_MOVIE_3D_SOLID(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0xDD11A0, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); }
static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, const char* method) { invoke<Void>(0xDD1320, scaleform, method); }
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(int scaleform, const char* methodName, float param1, float param2, float param3, float param4, float param5) { invoke<Void>(0xDD1320, scaleform, methodName, param1, param2, param3, param4, param5); }
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(int scaleform, const char* methodName, const char* param1, const char* param2, const char* param3, const char* param4, const char* param5) { invoke<Void>(0xDD1320, scaleform, methodName, param1, param2, param3, param4, param5); }
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(int scaleform, const char* methodName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, const char* stringParam1, const char* stringParam2, const char* stringParam3, const char* stringParam4, const char* stringParam5) { invoke<Void>(0xDD1320, scaleform, methodName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); }
static BOOL BEGIN_SCALEFORM_SCRIPT_HUD_MOVIE_METHOD(int hudComponent, const char* methodName) { return invoke<BOOL>(0xDD1680, hudComponent, methodName); }
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD(int scaleform, const char* methodName) { return invoke<BOOL>(0xDD16D0, scaleform, methodName); }
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(const char* methodName) { return invoke<BOOL>(0xDD16D0, methodName); }
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER(const char* methodName) { return invoke<BOOL>(0xDD16D0, methodName); }
static void END_SCALEFORM_MOVIE_METHOD() { invoke<Void>(0xDD1870); }
static int END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE() { return invoke<int>(0xDD1870); }
static BOOL IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(int methodReturn) { return invoke<BOOL>(0xDD18A0, methodReturn); }
static int GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(int methodReturn) { return invoke<int>(0xDD18D0, methodReturn); }
static BOOL GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(int methodReturn) { return invoke<BOOL>(0xDD18F0, methodReturn); }
static const char* GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_STRING(int methodReturn) { return invoke<const char*>(0xDD1920, methodReturn); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(int value) { invoke<Void>(0xDD1990, value); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(float value) { invoke<Void>(0xDD19A0, value); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(BOOL value) { invoke<Void>(0xDD19C0, value); }
static void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(const char* componentType) { invoke<Void>(0xDD19E0, componentType); }
static void END_TEXT_COMMAND_SCALEFORM_STRING() { invoke<Void>(0xDD19F0); }
static void END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING() { invoke<Void>(0xDD1A00); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(const char* string) { invoke<Void>(0xDD1A10, string); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(const char* string) { invoke<Void>(0xDD1A30, string); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(const char* string) { invoke<Void>(0xDD1A50, string); }
static BOOL DOES_LATEST_BRIEF_STRING_EXIST(int p0) { return invoke<BOOL>(0xDD1A70, p0); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(int value) { invoke<Void>(0xDD1AA0, value); }
static void REQUEST_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0xDD1B10, hudComponent); }
static BOOL HAS_SCALEFORM_SCRIPT_HUD_MOVIE_LOADED(int hudComponent) { return invoke<BOOL>(0xDD1B30, hudComponent); }
static void REMOVE_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0xDD1B60, hudComponent); }
static BOOL PASS_KEYBOARD_INPUT_TO_SCALEFORM(int scaleformHandle) { return invoke<BOOL>(0xDD1B70, scaleformHandle); }
static void SET_TV_CHANNEL(int channel) { invoke<Void>(0xDD1BA0, channel); }
static int GET_TV_CHANNEL() { return invoke<int>(0xDD1BC0); }
static void SET_TV_VOLUME(float volume) { invoke<Void>(0xDD1BD0, volume); }
static float GET_TV_VOLUME() { return invoke<float>(0xDD1BE0); }
static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { invoke<Void>(0xDD1C00, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); }
static void SET_TV_CHANNEL_PLAYLIST(int tvChannel, const char* playlistName, BOOL restart) { invoke<Void>(0xDD1BA0, tvChannel, playlistName, restart); }
static void SET_TV_CHANNEL_PLAYLIST_AT_HOUR(int tvChannel, const char* playlistName, int hour) { invoke<Void>(0xDD1BA0, tvChannel, playlistName, hour); }
static void CLEAR_TV_CHANNEL_PLAYLIST(int tvChannel) { invoke<Void>(0xDD1D80, tvChannel); }
static BOOL IS_PLAYLIST_ON_CHANNEL(int tvChannel, Any p1) { return invoke<BOOL>(0xDD1DA0, tvChannel, p1); }
static BOOL IS_TVSHOW_CURRENTLY_PLAYING(Hash videoCliphash) { return invoke<BOOL>(0xDD1DD0, videoCliphash); }
static void ENABLE_MOVIE_KEYFRAME_WAIT(BOOL toggle) { invoke<Void>(0xDD1E00, toggle); }
static void SET_TV_PLAYER_WATCHING_THIS_FRAME(Any p0) { invoke<Void>(0xDD1E20, p0); }
static Hash GET_CURRENT_TV_CLIP_NAMEHASH() { return invoke<Hash>(0xDD1E70); }
static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0xDD1E90, toggle); }
static BOOL UI3DSCENE_IS_AVAILABLE() { return invoke<BOOL>(0xDD1EB0); }
static BOOL UI3DSCENE_PUSH_PRESET(const char* presetName) { return invoke<BOOL>(0xDD1ED0, presetName); }
static BOOL UI3DSCENE_ASSIGN_PED_TO_SLOT(const char* presetName, Ped ped, int slot, float posX, float posY, float posZ) { return invoke<BOOL>(0xDD1F40, presetName, ped, slot, posX, posY, posZ); }
static void UI3DSCENE_CLEAR_PATCHED_DATA() { invoke<Void>(0xDD2040); }
static void UI3DSCENE_MAKE_PUSHED_PRESET_PERSISTENT(BOOL toggle) { invoke<Void>(0xDD2060, toggle); }
static void TERRAINGRID_ACTIVATE(BOOL toggle) { invoke<Void>(0xDD2080, toggle); }
static void TERRAINGRID_SET_PARAMS(float x, float y, float z, float forwardX, float forwardY, float forwardZ, float sizeX, float sizeY, float sizeZ, float gridScale, float glowIntensity, float normalHeight, float heightDiff) { invoke<Void>(0xDD20A0, x, y, z, forwardX, forwardY, forwardZ, sizeX, sizeY, sizeZ, gridScale, glowIntensity, normalHeight, heightDiff); }
static void TERRAINGRID_SET_COLOURS(int lowR, int lowG, int lowB, int lowAlpha, int r, int g, int b, int alpha, int highR, int highG, int highB, int highAlpha) { invoke<Void>(0xDD2180, lowR, lowG, lowB, lowAlpha, r, g, b, alpha, highR, highG, highB, highAlpha); }
static void ANIMPOSTFX_PLAY(const char* effectName, int duration, BOOL looped) { invoke<Void>(0xDD21F0, effectName, duration, looped); }
static void ANIMPOSTFX_STOP(const char* effectName) { invoke<Void>(0xDD2280, effectName); }
static float ANIMPOSTFX_GET_CURRENT_TIME(const char* effectName) { return invoke<float>(0xDD22E0, effectName); }
static BOOL ANIMPOSTFX_IS_RUNNING(const char* effectName) { return invoke<BOOL>(0xDD2350, effectName); }
static void ANIMPOSTFX_STOP_ALL() { invoke<Void>(0xDD2280); }
static void ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS(const char* effectName) { invoke<Void>(0xDD2280, effectName); }
static void BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(const char* string) { invoke<Void>(0xDDFAC0, string); }
static void END_TEXT_COMMAND_BUSYSPINNER_ON(int busySpinnerType) { invoke<Void>(0xDDFAD0, busySpinnerType); }
static void BUSYSPINNER_OFF() { invoke<Void>(0xDDFAE0); }
static void PRELOAD_BUSYSPINNER() { invoke<Void>(0xDDFAF0); }
static BOOL BUSYSPINNER_IS_ON() { return invoke<BOOL>(0xDDFB00); }
static BOOL BUSYSPINNER_IS_DISPLAYING() { return invoke<BOOL>(0xDDFB20); }
static void DISABLE_PAUSEMENU_SPINNER(BOOL p0) { invoke<Void>(0xDDFB40, p0); }
static void SET_MOUSE_CURSOR_THIS_FRAME() { invoke<Void>(0xDDFB50); }
static void SET_MOUSE_CURSOR_STYLE(int spriteId) { invoke<Void>(0xDDFB60, spriteId); }
static void SET_MOUSE_CURSOR_VISIBLE(BOOL toggle) { invoke<Void>(0xDDFB70, toggle); }
static BOOL IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS() { return invoke<BOOL>(0xDDFB80); }
static BOOL GET_MOUSE_EVENT(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return invoke<BOOL>(0xDDFB90, scaleformHandle, p1, p2, p3); }
static void THEFEED_ONLY_SHOW_TOOLTIPS(BOOL toggle) { invoke<Void>(0xDDFBA0, toggle); }
static void THEFEED_SET_SCRIPTED_MENU_HEIGHT(float pos) { invoke<Void>(0xDDFBF0, pos); }
static void THEFEED_HIDE() { invoke<Void>(0xDDFC20); }
static void THEFEED_HIDE_THIS_FRAME() { invoke<Void>(0xDDFC20); }
static void THEFEED_SHOW() { invoke<Void>(0xDDFC60); }
static void THEFEED_FLUSH_QUEUE() { invoke<Void>(0xDDFC80); }
static void THEFEED_REMOVE_ITEM(int notificationId) { invoke<Void>(0xDDFCA0, notificationId); }
static void THEFEED_FORCE_RENDER_ON() { invoke<Void>(0xDDFCD0); }
static void THEFEED_FORCE_RENDER_OFF() { invoke<Void>(0xDDFCF0); }
static void THEFEED_PAUSE() { invoke<Void>(0xDDFD10); }
static void THEFEED_RESUME() { invoke<Void>(0xDDFD30); }
static BOOL THEFEED_IS_PAUSED() { return invoke<BOOL>(0xDDFD50); }
static void THEFEED_REPORT_LOGO_ON() { invoke<Void>(0xDDFD70); }
static void THEFEED_REPORT_LOGO_OFF() { invoke<Void>(0xDDFD90); }
static int THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() { return invoke<int>(0xDDFDB0); }
static void THEFEED_AUTO_POST_GAMETIPS_ON() { invoke<Void>(0xDDFDE0); }
static void THEFEED_AUTO_POST_GAMETIPS_OFF() { invoke<Void>(0xDDFE00); }
static void THEFEED_SET_BACKGROUND_COLOR_FOR_NEXT_POST(int hudColorIndex) { invoke<Void>(0xDDFE20, hudColorIndex); }
static void THEFEED_SET_RGBA_PARAMETER_FOR_NEXT_MESSAGE(int red, int green, int blue, int alpha) { invoke<Void>(0xDDFE50, red, green, blue, alpha); }
static void THEFEED_SET_FLASH_DURATION_PARAMETER_FOR_NEXT_MESSAGE(int count) { invoke<Void>(0xDCDE70, count); }
static void THEFEED_SET_VIBRATE_PARAMETER_FOR_NEXT_MESSAGE(BOOL toggle) { invoke<Void>(0xDDFEE0, toggle); }
static void THEFEED_RESET_ALL_PARAMETERS() { invoke<Void>(0xDDFF10); }
static void THEFEED_FREEZE_NEXT_POST() { invoke<Void>(0xDDFF30); }
static void THEFEED_CLEAR_FROZEN_POST() { invoke<Void>(0xDDFF50); }
static void THEFEED_UPDATE_ITEM_TEXTURE(const char* txdString1, const char* txnString1, const char* txdString2, const char* txnString2) { invoke<Void>(0xDDFF70, txdString1, txnString1, txdString2, txnString2); }
static void BEGIN_TEXT_COMMAND_THEFEED_POST(const char* text) { invoke<Void>(0xDDFFC0, text); }
static int END_TEXT_COMMAND_THEFEED_POST_STATS(const char* statTitle, int iconEnum, BOOL stepVal, int barValue, BOOL isImportant, const char* pictureTextureDict, const char* pictureTextureName) { return invoke<int>(0xDDFFD0, statTitle, iconEnum, stepVal, barValue, isImportant, pictureTextureDict, pictureTextureName); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0xDE0010, txdName, textureName, flash, iconType, sender, subject); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0xDE0010, txdName, textureName, flash, iconType, sender, subject); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration) { return invoke<int>(0xDE0010, txdName, textureName, flash, iconType, sender, subject, duration); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration, const char* clanTag) { return invoke<int>(0xDE0010, txdName, textureName, flash, iconType, sender, subject, duration, clanTag); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON(const char* txdName, const char* textureName, BOOL flash, int iconType1, const char* sender, const char* subject, float duration, const char* clanTag, int iconType2, int p9) { return invoke<int>(0xDE0010, txdName, textureName, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); }
static int END_TEXT_COMMAND_THEFEED_POST_TICKER(BOOL blink, BOOL p1) { return invoke<int>(0xDE0280, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_TICKER_FORCED(BOOL blink, BOOL p1) { return invoke<int>(0xDE0280, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(BOOL blink, BOOL p1) { return invoke<int>(0xDE0280, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_AWARD(const char* textureDict, const char* textureName, int rpBonus, int colorOverlay, const char* titleLabel) { return invoke<int>(0xDE0370, textureDict, textureName, rpBonus, colorOverlay, titleLabel); }
static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, int R, int G, int B) { return invoke<int>(0xDE03A0, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B); }
static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, const char* playerName, int R, int G, int B) { return invoke<int>(0xDE03A0, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B); }
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK(const char* gxtLabel1, int p1, const char* gxtLabel2) { return invoke<int>(0xDE04B0, gxtLabel1, p1, gxtLabel2); }
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(const char* gxtLabel1, int p1, const char* gxtLabel2, int p3) { return invoke<int>(0xDE04B0, gxtLabel1, p1, gxtLabel2, p3); }
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU_WITH_COLOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<int>(0xDE04B0, p0, p1, p2, p3, p4, p5); }
static int END_TEXT_COMMAND_THEFEED_POST_MPTICKER(BOOL blink, BOOL p1) { return invoke<int>(0xDE0560, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_CREW_RANKUP_WITH_LITERAL_FLAG(const char* p0, const char* p1, const char* p2, BOOL p3, BOOL p4) { return invoke<int>(0xDE05A0, p0, p1, p2, p3, p4); }
static int END_TEXT_COMMAND_THEFEED_POST_VERSUS_TU(const char* txdName1, const char* textureName1, int count1, const char* txdName2, const char* textureName2, int count2, int hudColor1, int hudColor2) { return invoke<int>(0xDE05E0, txdName1, textureName1, count1, txdName2, textureName2, count2, hudColor1, hudColor2); }
static void BEGIN_TEXT_COMMAND_PRINT(const char* GxtEntry) { invoke<Void>(0xDE0630, GxtEntry); }
static void END_TEXT_COMMAND_PRINT(int duration, BOOL drawImmediately) { invoke<Void>(0xDE0640, duration, drawImmediately); }
static void BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(const char* text) { invoke<Void>(0xDE0660, text); }
static BOOL END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED() { return invoke<BOOL>(0xDE0670); }
static void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(const char* text) { invoke<Void>(0xDE0690, text); }
static void END_TEXT_COMMAND_DISPLAY_TEXT(float x, float y, int p2) { invoke<Void>(0xDE06C0, x, y, p2); }
static void BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(const char* text) { invoke<Void>(0xDE0710, text); }
static float END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(BOOL p0) { return invoke<float>(0xDE0720, p0); }
static void BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(const char* entry) { invoke<Void>(0xDE0750, entry); }
static int END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(float x, float y) { return invoke<int>(0xDE0760, x, y); }
static void BEGIN_TEXT_COMMAND_DISPLAY_HELP(const char* inputType) { invoke<Void>(0xDE0790, inputType); }
static void END_TEXT_COMMAND_DISPLAY_HELP(int p0, BOOL loop, BOOL beep, int shape) { invoke<Void>(0xDE07A0, p0, loop, beep, shape); }
static void BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* labelName) { invoke<Void>(0xDE07D0, labelName); }
static BOOL END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(int p0) { return invoke<BOOL>(0xDE07E0, p0); }
static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(const char* textLabel) { invoke<Void>(0xDE0810, textLabel); }
static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { invoke<Void>(0xDE0820, blip); }
static void BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(const char* p0) { invoke<Void>(0xDE0830, p0); }
static void END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xDE0840, p0); }
static void BEGIN_TEXT_COMMAND_CLEAR_PRINT(const char* text) { invoke<Void>(0xDE0860, text); }
static void END_TEXT_COMMAND_CLEAR_PRINT() { invoke<Void>(0xDE0870); }
static void BEGIN_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(const char* gxtEntry) { invoke<Void>(0xDE0880, gxtEntry); }
static void END_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(int p0) { invoke<Void>(0xDE0890, p0); }
static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<Void>(0xDE08A0, value); }
static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<Void>(0xDE08B0, value, decimalPlaces); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(const char* labelName) { invoke<Void>(0xDE08C0, labelName); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Hash gxtEntryHash) { invoke<Void>(0xDE08C0, gxtEntryHash); }
static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Blip blip) { invoke<Void>(0xDE08E0, blip); }
static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(const char* text) { invoke<Void>(0xDE08F0, text); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<Void>(0xDE0900, timestamp, flags); }
static void ADD_TEXT_COMPONENT_FORMATTED_INTEGER(int value, BOOL commaSeparated) { invoke<Void>(0xDE0910, value, commaSeparated); }
static void ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(const char* p0, int p1) { invoke<Void>(0xDE0920, p0, p1); }
static void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(const char* website) { invoke<Void>(0xDE09B0, website); }
static void ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(const char* string) { invoke<Void>(0xDE09C0, string); }
static void SET_COLOUR_OF_NEXT_TEXT_COMPONENT(int hudColor) { invoke<Void>(0xDE09D0, hudColor); }
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(const char* text, int position, int length) { return invoke<const char*>(0xDE09E0, text, position, length); }
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(const char* text, int position, int length, int maxLength) { return invoke<const char*>(0xDE09E0, text, position, length, maxLength); }
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(const char* text, int startPosition, int endPosition) { return invoke<const char*>(0xDE09E0, text, startPosition, endPosition); }
static const char* GET_FILENAME_FOR_AUDIO_CONVERSATION(const char* labelName) { return invoke<const char*>(0xDE0A80, labelName); }
static void CLEAR_PRINTS() { invoke<Void>(0xDE0B10); }
static void CLEAR_BRIEF() { invoke<Void>(0xDE0B20); }
static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0xDE0B40); }
static void CLEAR_THIS_PRINT(const char* p0) { invoke<Void>(0xDE0B50, p0); }
static void CLEAR_SMALL_PRINTS() { invoke<Void>(0xDE0CD0); }
static BOOL DOES_TEXT_BLOCK_EXIST(const char* gxt) { return invoke<BOOL>(0xDE0CE0, gxt); }
static void REQUEST_ADDITIONAL_TEXT(const char* gxt, int slot) { invoke<Void>(0xDE0D20, gxt, slot); }
static void REQUEST_ADDITIONAL_TEXT_FOR_DLC(const char* gxt, int slot) { invoke<Void>(0xDE0D20, gxt, slot); }
static BOOL HAS_ADDITIONAL_TEXT_LOADED(int slot) { return invoke<BOOL>(0xDE0D60, slot); }
static void CLEAR_ADDITIONAL_TEXT(int p0, BOOL p1) { invoke<Void>(0xDE0D90, p0, p1); }
static BOOL IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<BOOL>(0xDE0DB0, p0); }
static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(const char* gxt, int slot) { return invoke<BOOL>(0xDE0DE0, gxt, slot); }
static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xDE0E10); }
static BOOL DOES_TEXT_LABEL_EXIST(const char* gxt) { return invoke<BOOL>(0xDE0E30, gxt); }
static const char* GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(const char* string, int length) { return invoke<const char*>(0xDE0E60, string, length); }
static int GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(const char* gxt) { return invoke<int>(0xDE0ED0, gxt); }
static int GET_LENGTH_OF_LITERAL_STRING(const char* string) { return invoke<int>(0xDE0F20, string); }
static int GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(const char* string) { return invoke<int>(0xDE0F20, string); }
static const char* GET_STREET_NAME_FROM_HASH_KEY(Hash hash) { return invoke<const char*>(0xDE0F80, hash); }
static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xDE1040); }
static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xDE1060); }
static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xDE1080); }
static void DISPLAY_HUD(BOOL toggle) { invoke<Void>(0xDE10A0, toggle); }
static void DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0xDE10A0); }
static void DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME() { invoke<Void>(0xDE10A0); }
static void DISPLAY_RADAR(BOOL toggle) { invoke<Void>(0xDE1110, toggle); }
static void SET_FAKE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0xDE1140, toggle); }
static BOOL GET_FAKE_SPECTATOR_MODE() { return invoke<BOOL>(0xDE1160); }
static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0xDE1170); }
static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0xDE1190); }
static BOOL IS_MINIMAP_RENDERING() { return invoke<BOOL>(0xDE11B0); }
static void USE_VEHICLE_TARGETING_RETICULE(Any p0) { invoke<Void>(0xDE11C0, p0); }
static void ADD_VALID_VEHICLE_HIT_HASH(Any p0) { invoke<Void>(0xDE1200, p0); }
static void CLEAR_VALID_VEHICLE_HIT_HASHES() { invoke<Void>(0xDE12B0); }
static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { invoke<Void>(0xDE12F0, blip, enabled); }
static void CLEAR_ALL_BLIP_ROUTES() { invoke<Void>(0xDE1310); }
static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { invoke<Void>(0xDE12F0, blip, colour); }
static void SET_FORCE_SHOW_GPS(BOOL toggle) { invoke<Void>(0xDE1340, toggle); }
static void SET_USE_SET_DESTINATION_IN_PAUSE_MAP(BOOL toggle) { invoke<Void>(0xDE1360, toggle); }
static void SET_BLOCK_WANTED_FLASH(BOOL disabled) { invoke<Void>(0xDE1380, disabled); }
static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xDE13A0, p0); }
static void FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(int p0) { invoke<Void>(0xDE13C0, p0); }
static void SET_RADAR_ZOOM_PRECISE(float zoom) { invoke<Void>(0xDE13E0, zoom); }
static void SET_RADAR_ZOOM(int zoomLevel) { invoke<Void>(0xDE1420, zoomLevel); }
static void SET_RADAR_ZOOM_TO_BLIP(Blip blip, float zoom) { invoke<Void>(0xDE1420, blip, zoom); }
static void SET_RADAR_ZOOM_TO_DISTANCE(float zoom) { invoke<Void>(0xDE1420, zoom); }
static void UPDATE_RADAR_ZOOM_TO_BLIP() { invoke<Void>(0xDE15E0); }
static void GET_HUD_COLOUR(int hudColorIndex, int* r, int* g, int* b, int* a) { invoke<Void>(0xDE15F0, hudColorIndex, r, g, b, a); }
static void SET_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0xDE1650, r, g, b, a); }
static void SET_SECOND_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0xDE1670, r, g, b, a); }
static void REPLACE_HUD_COLOUR(int hudColorIndex, int hudColorIndex2) { invoke<Void>(0xDE1690, hudColorIndex, hudColorIndex2); }
static void REPLACE_HUD_COLOUR_WITH_RGBA(int hudColorIndex, int r, int g, int b, int a) { invoke<Void>(0xDE1690, hudColorIndex, r, g, b, a); }
static void SET_ABILITY_BAR_VISIBILITY(BOOL visible) { invoke<Void>(0xDE1700, visible); }
static void SET_ALLOW_ABILITY_BAR(BOOL toggle) { invoke<Void>(0xDE1720, toggle); }
static void FLASH_ABILITY_BAR(int millisecondsToFlash) { invoke<Void>(0xDE1750, millisecondsToFlash); }
static void SET_ABILITY_BAR_VALUE(float p0, float p1) { invoke<Void>(0xDE1760, p0, p1); }
static void FLASH_WANTED_DISPLAY(BOOL p0) { invoke<Void>(0xDE1780, p0); }
static void FORCE_OFF_WANTED_STAR_FLASH(BOOL toggle) { invoke<Void>(0xDE17A0, toggle); }
static void SET_CUSTOM_MP_HUD_COLOR(int hudColorId) { invoke<Void>(0xDE17C0, hudColorId); }
static float GET_RENDERED_CHARACTER_HEIGHT(float size, int font) { return invoke<float>(0xDE1810, size, font); }
static void SET_TEXT_SCALE(float scale, float size) { invoke<Void>(0xDE18D0, scale, size); }
static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<Void>(0xDE18F0, red, green, blue, alpha); }
static void SET_TEXT_CENTRE(BOOL align) { invoke<Void>(0xDE1930, align); }
static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { invoke<Void>(0xDE1950, toggle); }
static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<Void>(0xDE1970, justifyType); }
static void SET_TEXT_WRAP(float start, float end) { invoke<Void>(0xDE19A0, start, end); }
static void SET_TEXT_LEADING(int p0) { invoke<Void>(0xDE19C0, p0); }
static void SET_TEXT_PROPORTIONAL(BOOL p0) { invoke<Void>(0xDE19E0, p0); }
static void SET_TEXT_FONT(int fontType) { invoke<Void>(0xDE19F0, fontType); }
static void SET_TEXT_DROP_SHADOW() { invoke<Void>(0xDE1A10); }
static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<Void>(0xDE1A20, distance, r, g, b, a); }
static void SET_TEXT_OUTLINE() { invoke<Void>(0xDE1A40); }
static void SET_TEXT_EDGE(int p0, int r, int g, int b, int a) { invoke<Void>(0xDE1A50, p0, r, g, b, a); }
static void SET_TEXT_RENDER_ID(int renderId) { invoke<Void>(0xDE1A60, renderId); }
static int GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0xDE1AD0); }
static BOOL REGISTER_NAMED_RENDERTARGET(const char* name, BOOL p1) { return invoke<BOOL>(0xDE1AE0, name, p1); }
static BOOL IS_NAMED_RENDERTARGET_REGISTERED(const char* name) { return invoke<BOOL>(0xDE1BA0, name); }
static BOOL RELEASE_NAMED_RENDERTARGET(const char* name) { return invoke<BOOL>(0xDE1BE0, name); }
static void LINK_NAMED_RENDERTARGET(Hash modelHash) { invoke<Void>(0xDE1C20, modelHash); }
static int GET_NAMED_RENDERTARGET_RENDER_ID(const char* name) { return invoke<int>(0xDE1CD0, name); }
static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash modelHash) { return invoke<BOOL>(0xDE1D10, modelHash); }
static void CLEAR_HELP(BOOL toggle) { invoke<Void>(0xDE1DD0, toggle); }
static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0xDE1DF0); }
static BOOL HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME() { return invoke<BOOL>(0xDE1E50); }
static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xDE1E70); }
static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0xDE1E90); }
static void SET_HELP_MESSAGE_STYLE(int style, int hudColor, int alpha, int p3, int p4) { invoke<Void>(0xDE1EB0, style, hudColor, alpha, p3, p4); }
static int GET_STANDARD_BLIP_ENUM_ID() { return invoke<int>(0xDE1ED0); }
static int GET_WAYPOINT_BLIP_ENUM_ID() { return invoke<int>(0xDE1EE0); }
static int GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0xDE1EF0); }
static Blip GET_NEXT_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xDE1F60, blipSprite); }
static Blip GET_FIRST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xDE1F80, blipSprite); }
static Blip GET_CLOSEST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xDE1FB0, blipSprite); }
static vector3 GET_BLIP_INFO_ID_COORD(Blip blip) { return invoke<vector3>(0xDE1FD0, blip); }
static int GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<int>(0xDE2080, blip); }
static int GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<int>(0xDE20C0, blip); }
static Entity GET_BLIP_INFO_ID_ENTITY_INDEX(Blip blip) { return invoke<Entity>(0xDE2100, blip); }
static Pickup GET_BLIP_INFO_ID_PICKUP_INDEX(Blip blip) { return invoke<Pickup>(0xDE2170, blip); }
static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Blip>(0xDE2180, entity); }
static Blip ADD_BLIP_FOR_RADIUS(float posX, float posY, float posZ, float radius) { return invoke<Blip>(0xDE21A0, posX, posY, posZ, radius); }
static Blip ADD_BLIP_FOR_AREA(float x, float y, float z, float width, float height) { return invoke<Blip>(0xDE2260, x, y, z, width, height); }
static Blip ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<Blip>(0xDE2290, entity); }
static Blip ADD_BLIP_FOR_PICKUP(Pickup pickup) { return invoke<Blip>(0xDE22B0, pickup); }
static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0xDE22D0, x, y, z); }
static void TRIGGER_SONAR_BLIP(float posX, float posY, float posZ, float radius, int p4) { invoke<Void>(0xDE2380, posX, posY, posZ, radius, p4); }
static void ALLOW_SONAR_BLIPS(BOOL toggle) { invoke<Void>(0xDE23F0, toggle); }
static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { invoke<Void>(0xDE2410, blip, posX, posY, posZ); }
static vector3 GET_BLIP_COORDS(Blip blip) { return invoke<vector3>(0xDE24B0, blip); }
static void SET_BLIP_SPRITE(Blip blip, int spriteId) { invoke<Void>(0xDE2560, blip, spriteId); }
static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0xDE2580, blip); }
static void SET_COP_BLIP_SPRITE(int p0, float p1) { invoke<Void>(0xDE25C0, p0, p1); }
static void SET_COP_BLIP_SPRITE_AS_STANDARD() { invoke<Void>(0xDE25C0); }
static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, const char* gxtEntry) { invoke<Void>(0xDE2600, blip, gxtEntry); }
static void SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player player) { invoke<Void>(0xDE2640, blip, player); }
static void SET_BLIP_ALPHA(Blip blip, int alpha) { invoke<Void>(0xDE2680, blip, alpha); }
static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0xDE26C0, blip); }
static void SET_BLIP_FADE(Blip blip, int opacity, int duration) { invoke<Void>(0xDE2700, blip, opacity, duration); }
static int GET_BLIP_FADE_DIRECTION(Blip blip) { return invoke<int>(0xDE2730, blip); }
static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0xDE2760, blip, rotation); }
static void SET_BLIP_ROTATION_WITH_FLOAT(Blip blip, float heading) { invoke<Void>(0xDE2760, blip, heading); }
static int GET_BLIP_ROTATION(Blip blip) { return invoke<int>(0xDE27A0, blip); }
static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { invoke<Void>(0xDE27E0, blip, duration); }
static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { invoke<Void>(0xDE2800, blip, p1); }
static void SET_BLIP_COLOUR(Blip blip, int color) { invoke<Void>(0xDE2820, blip, color); }
static void SET_BLIP_SECONDARY_COLOUR(Blip blip, int r, int g, int b) { invoke<Void>(0xDE2840, blip, r, g, b); }
static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0xDE28C0, blip); }
static int GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<int>(0xDE2900, blip); }
static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0xDE29A0, blip); }
static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0xDE29E0, blip); }
static BOOL DOES_BLIP_HAVE_GPS_ROUTE(Blip blip) { return invoke<BOOL>(0xDE2A20, blip); }
static void SET_BLIP_HIDDEN_ON_LEGEND(Blip blip, BOOL toggle) { invoke<Void>(0xDE2A60, blip, toggle); }
static void SET_BLIP_HIGH_DETAIL(Blip blip, BOOL toggle) { invoke<Void>(0xDE2A80, blip, toggle); }
static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2AA0, blip, toggle); }
static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0xDE2AC0, blip); }
static Blip GET_NEW_SELECTED_MISSION_CREATOR_BLIP() { return invoke<Blip>(0xDE2B00); }
static BOOL IS_HOVERING_OVER_MISSION_CREATOR_BLIP() { return invoke<BOOL>(0xDE2B40); }
static void SHOW_START_MISSION_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0xDE2B90, toggle); }
static void SHOW_CONTACT_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0xDE2BE0, toggle); }
static void RELOAD_MAP_MENU() { invoke<Void>(0xDE2C80); }
static void SET_BLIP_MARKER_LONG_DISTANCE(Any p0, Any p1) { invoke<Void>(0xDE2CA0, p0, p1); }
static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { invoke<Void>(0xDE2CC0, blip, toggle); }
static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { invoke<Void>(0xDE2CC0, blip, toggle); }
static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0xDE2D00, blip); }
static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL toggle) { invoke<Void>(0xDE2D40, blip, toggle); }
static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0xDE2D60, blip, scale); }
static void SET_BLIP_SCALE_2D(Blip blip, float xScale, float yScale) { invoke<Void>(0xDE2D60, blip, xScale, yScale); }
static void SET_BLIP_PRIORITY(Blip blip, int priority) { invoke<Void>(0xDE2DF0, blip, priority); }
static void SET_BLIP_DISPLAY(Blip blip, int displayId) { invoke<Void>(0xDE2E10, blip, displayId); }
static void SET_BLIP_CATEGORY(Blip blip, int index) { invoke<Void>(0xDE2E30, blip, index); }
static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0xDE2E50, blip); }
static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0xDE2EC0, blip, toggle); }
static void PULSE_BLIP(Blip blip) { invoke<Void>(0xDE2EE0, blip); }
static void SHOW_NUMBER_ON_BLIP(Blip blip, int number) { invoke<Void>(0xDE2F00, blip, number); }
static void HIDE_NUMBER_ON_BLIP(Blip blip) { invoke<Void>(0xDE2F30, blip); }
static void SHOW_HEIGHT_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2F50, blip, toggle); }
static void SHOW_TICK_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2F70, blip, toggle); }
static void SHOW_GOLD_TICK_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2F90, blip, toggle); }
static void SHOW_FOR_SALE_ICON_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2FB0, blip, toggle); }
static void SHOW_HEADING_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2FD0, blip, toggle); }
static void SHOW_OUTLINE_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE2FF0, blip, toggle); }
static void SHOW_FRIEND_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE3010, blip, toggle); }
static void SHOW_CREW_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE3030, blip, toggle); }
static void SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(Blip blip, BOOL toggle) { invoke<Void>(0xDE3050, blip, toggle); }
static void SET_BLIP_SHORT_HEIGHT_THRESHOLD(Any p0, Any p1) { invoke<Void>(0xDE3070, p0, p1); }
static void SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(Blip blip, Any p1) { invoke<Void>(0xDE3090, blip, p1); }
static void SET_BLIP_AS_MINIMAL_ON_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0xDE30B0, blip, toggle); }
static void SET_RADIUS_BLIP_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0xDE30D0, blip, toggle); }
static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0xDE30F0, blip); }
static void SET_WAYPOINT_OFF() { invoke<Void>(0xDE3120); }
static void DELETE_WAYPOINTS_FROM_THIS_PLAYER() { invoke<Void>(0xDE3130); }
static void REFRESH_WAYPOINT() { invoke<Void>(0xDE3150); }
static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0xDE3160); }
static void SET_NEW_WAYPOINT(float x, float y) { invoke<Void>(0xDE3190, x, y); }
static void SET_BLIP_BRIGHT(Blip blip, BOOL toggle) { invoke<Void>(0xDE3250, blip, toggle); }
static void SET_BLIP_SHOW_CONE(Blip blip, BOOL toggle, int hudColorIndex) { invoke<Void>(0xDE3270, blip, toggle, hudColorIndex); }
static void REMOVE_COP_BLIP_FROM_PED(Ped ped) { invoke<Void>(0xDE32C0, ped); }
static void SETUP_FAKE_CONE_DATA(Blip blip, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, int p8) { invoke<Void>(0xDE3310, blip, p1, p2, p3, p4, p5, p6, p7, p8); }
static void REMOVE_FAKE_CONE_DATA(Blip blip) { invoke<Void>(0xDE3350, blip); }
static void CLEAR_FAKE_CONE_ARRAY() { invoke<Void>(0xDE3360); }
static BOOL SET_MINIMAP_COMPONENT(int componentId, BOOL toggle, int overrideColor) { return invoke<BOOL>(0xDE33C0, componentId, toggle, overrideColor); }
static void SET_MINIMAP_SONAR_SWEEP(BOOL toggle) { invoke<Void>(0xDE3400, toggle); }
static void SHOW_ACCOUNT_PICKER() { invoke<Void>(0xDE3420); }
static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0xDE3430); }
static void SET_PM_WARNINGSCREEN_ACTIVE(BOOL p0) { invoke<Void>(0xDE3470, p0); }
static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0xDE3490); }
static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int z, int zoom) { invoke<Void>(0xDE34A0, interior, x, y, z, zoom); }
static void SET_INSIDE_VERY_SMALL_INTERIOR(BOOL toggle) { invoke<Void>(0xDE34F0, toggle); }
static void SET_INSIDE_VERY_LARGE_INTERIOR(BOOL toggle) { invoke<Void>(0xDE3510, toggle); }
static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0xDE3530); }
static void SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(float x, float y) { invoke<Void>(0xDE3540, x, y); }
static void SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(float x, float y, Any p2) { invoke<Void>(0xDE3560, x, y, p2); }
static BOOL IS_PAUSEMAP_IN_INTERIOR_MODE() { return invoke<BOOL>(0xDE3590); }
static void HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME() { invoke<Void>(0xDE35A0); }
static void HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME() { invoke<Void>(0xDE35B0); }
static void SET_USE_ISLAND_MAP(BOOL toggle) { invoke<Void>(0xDE35C0, toggle); }
static void DONT_TILT_MINIMAP_THIS_FRAME() { invoke<Void>(0xDE35F0); }
static void DONT_ZOOM_MINIMAP_WHEN_RUNNING_THIS_FRAME() { invoke<Void>(0xDE3600); }
static void DONT_ZOOM_MINIMAP_WHEN_SNIPING_THIS_FRAME() { invoke<Void>(0xDE3610); }
static void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0xDE3620, p0); }
static void DISPLAY_AREA_NAME(BOOL toggle) { invoke<Void>(0xDE3640, toggle); }
static void DISPLAY_CASH(BOOL toggle) { invoke<Void>(0xDE3660, toggle); }
static void USE_FAKE_MP_CASH(BOOL toggle) { invoke<Void>(0xDE3680, toggle); }
static void CHANGE_FAKE_MP_CASH(int cash, int bank) { invoke<Void>(0xDE36A0, cash, bank); }
static void DISPLAY_AMMO_THIS_FRAME(BOOL display) { invoke<Void>(0xDE36B0, display); }
static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0xDE36D0); }
static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0xDE36E0); }
static void ALLOW_DISPLAY_OF_MULTIPLAYER_CASH_TEXT(BOOL allow) { invoke<Void>(0xDE36F0, allow); }
static void SET_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0xDE3710); }
static void REMOVE_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0xDE3730); }
static void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xDE3750); }
static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xDE3770); }
static void SET_MULTIPLAYER_HUD_CASH(int p0, BOOL p1) { invoke<Void>(0xDE3790, p0, p1); }
static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0xDE37A0); }
static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0xDE37D0); }
static BOOL IS_IME_IN_PROGRESS() { return invoke<BOOL>(0xDE37E0); }
static void DISPLAY_HELP_TEXT_THIS_FRAME(const char* message, BOOL p1) { invoke<Void>(0xDE37F0, message, p1); }
static void HUD_FORCE_WEAPON_WHEEL(BOOL show) { invoke<Void>(0xDE3850, show); }
static void HUD_FORCE_SPECIAL_VEHICLE_WEAPON_WHEEL() { invoke<Void>(0xDE3870); }
static void HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME() { invoke<Void>(0xDE3880); }
static Hash HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED() { return invoke<Hash>(0xDE3890); }
static void HUD_SET_WEAPON_WHEEL_TOP_SLOT(Hash weaponHash) { invoke<Void>(0xDE38B0, weaponHash); }
static Hash HUD_GET_WEAPON_WHEEL_TOP_SLOT(int weaponTypeIndex) { return invoke<Hash>(0xDE3900, weaponTypeIndex); }
static void HUD_SHOWING_CHARACTER_SWITCH_SELECTION(BOOL toggle) { invoke<Void>(0xDE3960, toggle); }
static void SET_GPS_FLAGS(int p0, float p1) { invoke<Void>(0xDE3980, p0, p1); }
static void CLEAR_GPS_FLAGS() { invoke<Void>(0xDE39B0); }
static void SET_RACE_TRACK_RENDER(BOOL toggle) { invoke<Void>(0xDE39D0, toggle); }
static void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0xDE39F0); }
static void START_GPS_CUSTOM_ROUTE(int hudColor, BOOL displayOnFoot, BOOL followPlayer) { invoke<Void>(0xDE3A00, hudColor, displayOnFoot, followPlayer); }
static void ADD_POINT_TO_GPS_CUSTOM_ROUTE(float x, float y, float z) { invoke<Void>(0xDE3A20, x, y, z); }
static void SET_GPS_CUSTOM_ROUTE_RENDER(BOOL toggle, int radarThickness, int mapThickness) { invoke<Void>(0xDE3A80, toggle, radarThickness, mapThickness); }
static void CLEAR_GPS_CUSTOM_ROUTE() { invoke<Void>(0xDE3AA0); }
static void START_GPS_MULTI_ROUTE(int hudColor, BOOL routeFromPlayer, BOOL displayOnFoot) { invoke<Void>(0xDE3AC0, hudColor, routeFromPlayer, displayOnFoot); }
static void ADD_POINT_TO_GPS_MULTI_ROUTE(float x, float y, float z) { invoke<Void>(0xDE3AE0, x, y, z); }
static void SET_GPS_MULTI_ROUTE_RENDER(BOOL toggle) { invoke<Void>(0xDE3B40, toggle); }
static void CLEAR_GPS_MULTI_ROUTE() { invoke<Void>(0xDE3B60); }
static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0xDE3B70); }
static void SET_GPS_FLASHES(BOOL toggle) { invoke<Void>(0xDE3B90, toggle); }
static void SET_PLAYER_ICON_COLOUR(int color) { invoke<Void>(0xDE3BB0, color); }
static void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0xDE3BC0); }
static void FLASH_MINIMAP_DISPLAY_WITH_COLOR(int hudColorIndex) { invoke<Void>(0xDE3BC0, hudColorIndex); }
static void TOGGLE_STEALTH_RADAR(BOOL toggle) { invoke<Void>(0xDE3BE0, toggle); }
static void SET_MINIMAP_IN_SPECTATOR_MODE(BOOL toggle, Ped ped) { invoke<Void>(0xDE3C00, toggle, ped); }
static void SET_MISSION_NAME(BOOL p0, const char* name) { invoke<Void>(0xDE3C70, p0, name); }
static void SET_MISSION_NAME_FOR_UGC_MISSION(BOOL p0, const char* name) { invoke<Void>(0xDE3C70, p0, name); }
static void SET_DESCRIPTION_FOR_UGC_MISSION_EIGHT_STRINGS(BOOL p0, const char* p1, const char* p2, const char* p3, const char* p4, const char* p5, const char* p6, const char* p7, const char* p8) { invoke<Void>(0xDE3D00, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL toggle) { invoke<Void>(0xDE3D50, toggle); }
static void SET_MINIMAP_IN_PROLOGUE(BOOL toggle) { invoke<Void>(0xDE3D70, toggle); }
static void SET_MINIMAP_HIDE_FOW(BOOL toggle) { invoke<Void>(0xDE3DA0, toggle); }
static float GET_MINIMAP_FOW_DISCOVERY_RATIO() { return invoke<float>(0xDE3DC0); }
static BOOL GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(float x, float y, float z) { return invoke<BOOL>(0xDE3DE0, x, y, z); }
static void SET_MINIMAP_FOW_DO_NOT_UPDATE(BOOL p0) { invoke<Void>(0xDE3E50, p0); }
static void SET_MINIMAP_FOW_REVEAL_COORDINATE(float x, float y, float z) { invoke<Void>(0xDE3E70, x, y, z); }
static void SET_MINIMAP_GOLF_COURSE(int hole) { invoke<Void>(0xDE3EC0, hole); }
static void SET_MINIMAP_GOLF_COURSE_OFF() { invoke<Void>(0xDE3EC0); }
static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0xDE3EE0, angle); }
static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0xDE3EE0); }
static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<Void>(0xDE3F10, x, y); }
static void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0xDE3F10); }
static void SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(float altitude, BOOL p1, Any p2) { invoke<Void>(0xDE3F50, altitude, p1, p2); }
static void SET_HEALTH_HUD_DISPLAY_VALUES(int health, int capacity, BOOL wasAdded) { invoke<Void>(0xDE3F80, health, capacity, wasAdded); }
static void SET_MAX_HEALTH_HUD_DISPLAY(int maximumValue) { invoke<Void>(0xDE3FA0, maximumValue); }
static void SET_MAX_ARMOUR_HUD_DISPLAY(int maximumValue) { invoke<Void>(0xDE3FB0, maximumValue); }
static void SET_BIGMAP_ACTIVE(BOOL toggleBigMap, BOOL showFullMap) { invoke<Void>(0xDE3FC0, toggleBigMap, showFullMap); }
static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xDE3FE0, id); }
static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xDE4030, id); }
static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xDE4070, id); }
static void SHOW_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xDE4090, id); }
static BOOL IS_SCRIPTED_HUD_COMPONENT_HIDDEN_THIS_FRAME(int id) { return invoke<BOOL>(0xDE40B0, id); }
static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xDE40F0, id); }
static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xDE4150, id); }
static void HIDE_STREET_AND_CAR_NAMES_THIS_FRAME() { invoke<Void>(0xDE4170); }
static void RESET_RETICULE_VALUES() { invoke<Void>(0xDE4180); }
static void RESET_HUD_COMPONENT_VALUES(int id) { invoke<Void>(0xDE4190, id); }
static void SET_HUD_COMPONENT_POSITION(int id, float x, float y) { invoke<Void>(0xDE41B0, id, x, y); }
static vector3 GET_HUD_COMPONENT_POSITION(int id) { return invoke<vector3>(0xDE4210, id); }
static void CLEAR_REMINDER_MESSAGE() { invoke<Void>(0xDE42D0); }
static int GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<int>(0xDE42E0, worldX, worldY, worldZ, screenX, screenY); }
static void OPEN_REPORTUGC_MENU() { invoke<Void>(0xDE4380); }
static void FORCE_CLOSE_REPORTUGC_MENU() { invoke<Void>(0xDE43B0); }
static BOOL IS_REPORTUGC_MENU_OPEN() { return invoke<BOOL>(0xDE43D0); }
static BOOL IS_FLOATING_HELP_TEXT_ON_SCREEN(int hudIndex) { return invoke<BOOL>(0xDE4440, hudIndex); }
static void SET_FLOATING_HELP_TEXT_SCREEN_POSITION(int hudIndex, float x, float y) { invoke<Void>(0xDE44B0, hudIndex, x, y); }
static void SET_FLOATING_HELP_TEXT_WORLD_POSITION(int hudIndex, float x, float y, float z) { invoke<Void>(0xDE4510, hudIndex, x, y, z); }
static void SET_FLOATING_HELP_TEXT_TO_ENTITY(int hudIndex, Entity entity, float offsetX, float offsetY) { invoke<Void>(0xDE4570, hudIndex, entity, offsetX, offsetY); }
static void SET_FLOATING_HELP_TEXT_STYLE(int hudIndex, int p1, int p2, int p3, int p4, int p5) { invoke<Void>(0xDE4610, hudIndex, p1, p2, p3, p4, p5); }
static void CLEAR_FLOATING_HELP(int hudIndex, BOOL p1) { invoke<Void>(0xDE4630, hudIndex, p1); }
static void CREATE_MP_GAMER_TAG_WITH_CREW_COLOR(Player player, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag, int r, int g, int b) { invoke<Void>(0xDE4650, player, username, pointedClanTag, isRockstarClan, clanTag, clanFlag, r, g, b); }
static BOOL IS_MP_GAMER_TAG_MOVIE_ACTIVE() { return invoke<BOOL>(0xDE4730); }
static int CREATE_FAKE_MP_GAMER_TAG(Ped ped, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag) { return invoke<int>(0xDE4760, ped, username, pointedClanTag, isRockstarClan, clanTag, clanFlag); }
static void REMOVE_MP_GAMER_TAG(int gamerTagId) { invoke<Void>(0xDE4890, gamerTagId); }
static BOOL IS_MP_GAMER_TAG_ACTIVE(int gamerTagId) { return invoke<BOOL>(0xDE48B0, gamerTagId); }
static BOOL IS_MP_GAMER_TAG_FREE(int gamerTagId) { return invoke<BOOL>(0xDE48E0, gamerTagId); }
static void SET_MP_GAMER_TAG_VISIBILITY(int gamerTagId, int component, BOOL toggle, Any p3) { invoke<Void>(0xDE4910, gamerTagId, component, toggle, p3); }
static void SET_ALL_MP_GAMER_TAGS_VISIBILITY(int gamerTagId, BOOL toggle) { invoke<Void>(0xDE4950, gamerTagId, toggle); }
static void SET_MP_GAMER_TAGS_SHOULD_USE_VEHICLE_HEALTH(int gamerTagId, BOOL toggle) { invoke<Void>(0xDE4980, gamerTagId, toggle); }
static void SET_MP_GAMER_TAGS_SHOULD_USE_POINTS_HEALTH(int gamerTagId, BOOL toggle) { invoke<Void>(0xDE49B0, gamerTagId, toggle); }
static void SET_MP_GAMER_TAGS_POINT_HEALTH(int gamerTagId, int value, int maximumValue) { invoke<Void>(0xDE49E0, gamerTagId, value, maximumValue); }
static void SET_MP_GAMER_TAG_COLOUR(int gamerTagId, int component, int hudColorIndex) { invoke<Void>(0xDE4A10, gamerTagId, component, hudColorIndex); }
static void SET_MP_GAMER_TAG_HEALTH_BAR_COLOUR(int gamerTagId, int hudColorIndex) { invoke<Void>(0xDE4A40, gamerTagId, hudColorIndex); }
static void SET_MP_GAMER_TAG_ALPHA(int gamerTagId, int component, int alpha) { invoke<Void>(0xDE4A70, gamerTagId, component, alpha); }
static void SET_MP_GAMER_TAG_WANTED_LEVEL(int gamerTagId, int wantedlvl) { invoke<Void>(0xDE4AA0, gamerTagId, wantedlvl); }
static void SET_MP_GAMER_TAG_NUM_PACKAGES(int gamerTagId, int p1) { invoke<Void>(0xDE4AD0, gamerTagId, p1); }
static void SET_MP_GAMER_TAG_NAME(int gamerTagId, const char* string) { invoke<Void>(0xDE4B00, gamerTagId, string); }
static BOOL IS_UPDATING_MP_GAMER_TAG_NAME_AND_CREW_DETAILS(int gamerTagId) { return invoke<BOOL>(0xDE4B30, gamerTagId); }
static void SET_MP_GAMER_TAG_BIG_TEXT(int gamerTagId, const char* string) { invoke<Void>(0xDE4B70, gamerTagId, string); }
static int GET_CURRENT_WEBPAGE_ID() { return invoke<int>(0xDE4BA0); }
static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0xDE4BB0); }
static int GET_GLOBAL_ACTIONSCRIPT_FLAG(int flagIndex) { return invoke<int>(0xDE4BC0, flagIndex); }
static void RESET_GLOBAL_ACTIONSCRIPT_FLAG(int flagIndex) { invoke<Void>(0xDE4BF0, flagIndex); }
static BOOL IS_WARNING_MESSAGE_READY_FOR_CONTROL() { return invoke<BOOL>(0xDE4C10); }
static void SET_WARNING_MESSAGE(const char* titleMsg, int flags, const char* promptMsg, BOOL p3, int p4, const char* p5, const char* p6, BOOL showBackground, int errorCode) { invoke<Void>(0xDE4C60, titleMsg, flags, promptMsg, p3, p4, p5, p6, showBackground, errorCode); }
static void SET_WARNING_MESSAGE_WITH_HEADER(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any* showBackground, Any* p7, BOOL p8, Any p9) { invoke<Void>(0xDE4C60, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, showBackground, p7, p8, p9); }
static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any additionalIntInfo, const char* additionalTextInfoLine1, const char* additionalTextInfoLine2, BOOL showBackground, int errorCode) { invoke<Void>(0xDE4C60, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, additionalIntInfo, additionalTextInfoLine1, additionalTextInfoLine2, showBackground, errorCode); }
static void SET_WARNING_MESSAGE_WITH_HEADER_EXTENDED(const char* entryHeader, const char* entryLine1, int flags, const char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL showBg, Any p9, Any p10) { invoke<Void>(0xDE4C60, entryHeader, entryLine1, flags, entryLine2, p4, p5, p6, p7, showBg, p9, p10); }
static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS_EXTENDED(const char* labelTitle, const char* labelMessage, int p2, int p3, const char* labelMessage2, BOOL p5, int p6, int p7, const char* p8, const char* p9, BOOL background, int errorCode) { invoke<Void>(0xDE4C60, labelTitle, labelMessage, p2, p3, labelMessage2, p5, p6, p7, p8, p9, background, errorCode); }
static Hash GET_WARNING_SCREEN_MESSAGE_HASH() { return invoke<Hash>(0xDE4F50); }
static BOOL SET_WARNING_MESSAGE_OPTION_ITEMS(int index, const char* name, int cash, int rp, int lvl, int colour) { return invoke<BOOL>(0xDE4C60, index, name, cash, rp, lvl, colour); }
static BOOL SET_WARNING_MESSAGE_OPTION_HIGHLIGHT(Any p0) { return invoke<BOOL>(0xDE4C60, p0); }
static void REMOVE_WARNING_MESSAGE_OPTION_ITEMS() { invoke<Void>(0xDE4FE0); }
static BOOL IS_WARNING_MESSAGE_ACTIVE() { return invoke<BOOL>(0xDE4FF0); }
static void CLEAR_DYNAMIC_PAUSE_MENU_ERROR_MESSAGE() { invoke<Void>(0xDE5030); }
static void CUSTOM_MINIMAP_SET_ACTIVE(BOOL toggle) { invoke<Void>(0xDE5050, toggle); }
static void CUSTOM_MINIMAP_SET_BLIP_OBJECT(int spriteId) { invoke<Void>(0xDE5070, spriteId); }
static int CUSTOM_MINIMAP_CREATE_BLIP(float x, float y, float z) { return invoke<int>(0xDE5080, x, y, z); }
static void CUSTOM_MINIMAP_CLEAR_BLIPS() { invoke<Void>(0xDE50F0); }
static BOOL FORCE_SONAR_BLIPS_THIS_FRAME() { return invoke<BOOL>(0xDE5100); }
static Blip GET_NORTH_BLID_INDEX() { return invoke<Blip>(0xDE5110); }
static void DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(BOOL toggle) { invoke<Void>(0xDE5120, toggle); }
static void DRAW_FRONTEND_BACKGROUND_THIS_FRAME() { invoke<Void>(0xDE5140); }
static void DRAW_HUD_OVER_FADE_THIS_FRAME() { invoke<Void>(0xDE5150); }
static void ACTIVATE_FRONTEND_MENU(Hash menuhash, BOOL togglePause, int component) { invoke<Void>(0xDE5160, menuhash, togglePause, component); }
static void RESTART_FRONTEND_MENU(Hash menuHash, int p1) { invoke<Void>(0xDE51B0, menuHash, p1); }
static Hash GET_CURRENT_FRONTEND_MENU_VERSION() { return invoke<Hash>(0xDE51F0); }
static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { invoke<Void>(0xDE5220, toggle); }
static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0xDE5240); }
static void SUPPRESS_FRONTEND_RENDERING_THIS_FRAME() { invoke<Void>(0xDE5250); }
static void ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0xDE5260); }
static void SET_FRONTEND_ACTIVE(BOOL active) { invoke<Void>(0xDE5270, active); }
static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0xDE5290); }
static BOOL IS_STORE_PENDING_NETWORK_SHUTDOWN_TO_OPEN() { return invoke<BOOL>(0xDE52C0); }
static int GET_PAUSE_MENU_STATE() { return invoke<int>(0xDE52D0); }
static vector3 GET_PAUSE_MENU_POSITION() { return invoke<vector3>(0xDE52F0); }
static BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0xDE5370); }
static void FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(const char* p0) { invoke<Void>(0xDE5390, p0); }
static void PAUSE_MENUCEPTION_GO_DEEPER(int page) { invoke<Void>(0xDE53A0, page); }
static void PAUSE_MENUCEPTION_THE_KICK() { invoke<Void>(0xDE53B0); }
static void PAUSE_TOGGLE_FULLSCREEN_MAP(Any p0) { invoke<Void>(0xDE53C0, p0); }
static void PAUSE_MENU_ACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0xDE53E0, contextHash); }
static void PAUSE_MENU_DEACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0xDE5420, contextHash); }
static BOOL PAUSE_MENU_IS_CONTEXT_ACTIVE(Hash contextHash) { return invoke<BOOL>(0xDE5460, contextHash); }
static BOOL PAUSE_MENU_IS_CONTEXT_MENU_ACTIVE() { return invoke<BOOL>(0xDE54B0); }
static int PAUSE_MENU_GET_HAIR_COLOUR_INDEX() { return invoke<int>(0xDE5530); }
static int PAUSE_MENU_GET_MOUSE_HOVER_INDEX() { return invoke<int>(0xDE5550); }
static int PAUSE_MENU_GET_MOUSE_HOVER_UNIQUE_ID() { return invoke<int>(0xDE5570); }
static BOOL PAUSE_MENU_GET_MOUSE_CLICK_EVENT(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xDE5590, p0, p1, p2); }
static void PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(int p0) { invoke<Void>(0xDE55A0, p0); }
static void PAUSE_MENU_SET_BUSY_SPINNER(BOOL p0, int position, int spinnerIndex) { invoke<Void>(0xDE55B0, p0, position, spinnerIndex); }
static void PAUSE_MENU_SET_WARN_ON_TAB_CHANGE(BOOL p0) { invoke<Void>(0xDE55F0, p0); }
static BOOL IS_FRONTEND_READY_FOR_CONTROL() { return invoke<BOOL>(0xDE5610); }
static void TAKE_CONTROL_OF_FRONTEND() { invoke<Void>(0xDE5650); }
static void RELEASE_CONTROL_OF_FRONTEND() { invoke<Void>(0xDE5660); }
static BOOL CODE_WANTS_SCRIPT_TO_TAKE_CONTROL() { return invoke<BOOL>(0xDE5670); }
static int GET_SCREEN_CODE_WANTS_SCRIPT_TO_CONTROL() { return invoke<int>(0xDE5690); }
static BOOL IS_NAVIGATING_MENU_CONTENT() { return invoke<BOOL>(0xDE56B0); }
static BOOL HAS_MENU_TRIGGER_EVENT_OCCURRED() { return invoke<BOOL>(0xDE56C0); }
static BOOL HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED() { return invoke<BOOL>(0xDE56D0); }
static void SET_SAVEGAME_LIST_UNIQUE_ID(Any p0) { invoke<Void>(0xDE56E0, p0); }
static void GET_MENU_TRIGGER_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xDE56F0, lastItemMenuId, selectedItemUniqueId); }
static void GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xDE5720, lastItemMenuId, selectedItemMenuId, selectedItemUniqueId); }
static BOOL GET_PM_PLAYER_CREW_COLOR(int* r, int* g, int* b) { return invoke<BOOL>(0xDE5770, r, g, b); }
static BOOL GET_MENU_PED_INT_STAT(Any p0, Any* p1) { return invoke<BOOL>(0xDE57F0, p0, p1); }
static BOOL GET_CHARACTER_MENU_PED_INT_STAT(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0xDE5820, p0, p1, p2); }
static BOOL GET_MENU_PED_MASKED_INT_STAT(Hash statHash, int* outValue, int mask, BOOL p3) { return invoke<BOOL>(0xDE5850, statHash, outValue, mask, p3); }
static BOOL GET_CHARACTER_MENU_PED_MASKED_INT_STAT(Hash statHash, Any* outValue, int p2, int mask, BOOL p4) { return invoke<BOOL>(0xDE58F0, statHash, outValue, p2, mask, p4); }
static BOOL GET_MENU_PED_FLOAT_STAT(Hash statHash, float* outValue) { return invoke<BOOL>(0xDE5990, statHash, outValue); }
static BOOL GET_CHARACTER_MENU_PED_FLOAT_STAT(float statHash, float* outValue, BOOL p2) { return invoke<BOOL>(0xDE59C0, statHash, outValue, p2); }
static BOOL GET_MENU_PED_BOOL_STAT(Hash statHash, BOOL* outValue) { return invoke<BOOL>(0xDE59F0, statHash, outValue); }
static void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0xDE5A20); }
static void GIVE_PED_TO_PAUSE_MENU(Ped ped, int p1) { invoke<Void>(0xDE5A60, ped, p1); }
static void SET_PAUSE_MENU_PED_LIGHTING(BOOL state) { invoke<Void>(0xDE5A70, state); }
static void SET_PAUSE_MENU_PED_SLEEP_STATE(BOOL state) { invoke<Void>(0xDE5AD0, state); }
static void OPEN_ONLINE_POLICIES_MENU() { invoke<Void>(0xDE5B20); }
static BOOL ARE_ONLINE_POLICIES_UP_TO_DATE() { return invoke<BOOL>(0xDE5B70); }
static BOOL IS_ONLINE_POLICIES_MENU_ACTIVE() { return invoke<BOOL>(0xDE5B90); }
static void OPEN_SOCIAL_CLUB_MENU() { invoke<Void>(0xDE5BA0); }
static void CLOSE_SOCIAL_CLUB_MENU() { invoke<Void>(0xDE5BE0); }
static void SET_SOCIAL_CLUB_TOUR(const char* name) { invoke<Void>(0xDE5C00, name); }
static BOOL IS_SOCIAL_CLUB_ACTIVE() { return invoke<BOOL>(0xDE5C30); }
static void SET_TEXT_INPUT_BOX_ENABLED(BOOL p0) { invoke<Void>(0xDE5C40, p0); }
static void FORCE_CLOSE_TEXT_INPUT_BOX() { invoke<Void>(0xDE5C50); }
static void SET_ALLOW_COMMA_ON_TEXT_INPUT(Any p0) { invoke<Void>(0xDE5C60, p0); }
static void OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(Hash gxtEntryHash) { invoke<Void>(0xDE5C70, gxtEntryHash); }
static BOOL IS_MP_TEXT_CHAT_TYPING() { return invoke<BOOL>(0xDE5C80); }
static void CLOSE_MP_TEXT_CHAT() { invoke<Void>(0xDE5C90); }
static void MP_TEXT_CHAT_IS_TEAM_JOB(Any p0) { invoke<Void>(0xDE5CA0, p0); }
static void OVERRIDE_MP_TEXT_CHAT_COLOR(int p0, int hudColor) { invoke<Void>(0xDE5CB0, p0, hudColor); }
static void MP_TEXT_CHAT_DISABLE(BOOL toggle) { invoke<Void>(0xDE5CC0, toggle); }
static void FLAG_PLAYER_CONTEXT_IN_TOURNAMENT(BOOL toggle) { invoke<Void>(0xDE5CD0, toggle); }
static void SET_PED_HAS_AI_BLIP(Ped ped, BOOL hasCone) { invoke<Void>(0xDE5CF0, ped, hasCone); }
static void SET_PED_HAS_AI_BLIP_WITH_COLOUR(Ped ped, BOOL hasCone, int color) { invoke<Void>(0xDE5CF0, ped, hasCone, color); }
static BOOL DOES_PED_HAVE_AI_BLIP(Ped ped) { return invoke<BOOL>(0xDE5D70, ped); }
static void SET_PED_AI_BLIP_GANG_ID(Ped ped, int gangId) { invoke<Void>(0xDE5DA0, ped, gangId); }
static void SET_PED_AI_BLIP_HAS_CONE(Ped ped, BOOL toggle) { invoke<Void>(0xDE5DB0, ped, toggle); }
static void SET_PED_AI_BLIP_FORCED_ON(Ped ped, BOOL toggle) { invoke<Void>(0xDE5DD0, ped, toggle); }
static void SET_PED_AI_BLIP_NOTICE_RANGE(Ped ped, float range) { invoke<Void>(0xDE5DF0, ped, range); }
static void SET_PED_AI_BLIP_SPRITE(Ped ped, int spriteId) { invoke<Void>(0xDE5E00, ped, spriteId); }
static Blip GET_AI_PED_PED_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xDE5E10, ped); }
static Blip GET_AI_PED_VEHICLE_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xDE5E30, ped); }
static BOOL HAS_DIRECTOR_MODE_BEEN_LAUNCHED_BY_CODE() { return invoke<BOOL>(0xDE5E50); }
static void SET_DIRECTOR_MODE_LAUNCHED_BY_SCRIPT() { invoke<Void>(0xDE5E60); }
static void SET_PLAYER_IS_IN_DIRECTOR_MODE(BOOL toggle) { invoke<Void>(0xDE5E70, toggle); }
static void SET_DIRECTOR_MODE_AVAILABLE(BOOL toggle) { invoke<Void>(0xDE5E90, toggle); }
static void HIDE_HUDMARKERS_THIS_FRAME() { invoke<Void>(0xDE5EB0); }
static float GET_INTERIOR_HEADING(Interior interior) { return invoke<float>(0xDE8060, interior); }
static void GET_INTERIOR_LOCATION_AND_NAMEHASH(Interior interior, vector3* position, Hash* nameHash) { invoke<Void>(0xDE80B0, interior, position, nameHash); }
static int GET_INTERIOR_GROUP_ID(Interior interior) { return invoke<int>(0xDE8190, interior); }
static vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Interior interior, float x, float y, float z) { return invoke<vector3>(0xDE81E0, interior, x, y, z); }
static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0xDE82C0); }
static BOOL IS_VALID_INTERIOR(Interior interior) { return invoke<BOOL>(0xDE82D0, interior); }
static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0xDE82F0, entity); }
static void FORCE_ROOM_FOR_ENTITY(Entity entity, Interior interior, Hash roomHashKey) { invoke<Void>(0xDE8380, entity, interior, roomHashKey); }
static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0xDE83A0, entity); }
static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0xDE83C0, entity); }
static Interior GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<Interior>(0xDE8450, entity); }
static void RETAIN_ENTITY_IN_INTERIOR(Entity entity, Interior interior) { invoke<Void>(0xDE8470, entity, interior); }
static void CLEAR_INTERIOR_STATE_OF_ENTITY(Entity entity) { invoke<Void>(0xDE84E0, entity); }
static void FORCE_ACTIVATING_TRACKING_ON_ENTITY(Any p0, Any p1) { invoke<Void>(0xDE8530, p0, p1); }
static void FORCE_ROOM_FOR_GAME_VIEWPORT(int interiorID, Hash roomHashKey) { invoke<Void>(0xDE8590, interiorID, roomHashKey); }
static void SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(const char* roomName) { invoke<Void>(0xDE85A0, roomName); }
static void SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(Hash roomHashKey) { invoke<Void>(0xDE85B0, roomHashKey); }
static Hash GET_ROOM_KEY_FOR_GAME_VIEWPORT() { return invoke<Hash>(0xDE86E0); }
static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { invoke<Void>(0xDE8740); }
static Interior GET_INTERIOR_FROM_PRIMARY_VIEW() { return invoke<Interior>(0xDE87F0); }
static Interior GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<Interior>(0xDE8830, x, y, z); }
static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, const char* roomName) { invoke<Void>(0xDE88A0, pickup, roomName); }
static void PIN_INTERIOR_IN_MEMORY(Interior interior) { invoke<Void>(0xDE88F0, interior); }
static void UNPIN_INTERIOR(Interior interior) { invoke<Void>(0xDE8960, interior); }
static BOOL IS_INTERIOR_READY(Interior interior) { return invoke<BOOL>(0xDE89A0, interior); }
static BOOL SET_INTERIOR_IN_USE(Interior interior) { return invoke<BOOL>(0xDE8A00, interior); }
static Interior GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, const char* interiorType) { return invoke<Interior>(0xDE8830, x, y, z, interiorType); }
static Interior GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(float x, float y, float z, Hash typeHash) { return invoke<Interior>(0xDE8830, x, y, z, typeHash); }
static void ACTIVATE_INTERIOR_GROUPS_USING_CAMERA() { invoke<Void>(0xDE8B60); }
static BOOL IS_COLLISION_MARKED_OUTSIDE(float x, float y, float z) { return invoke<BOOL>(0xDE8B70, x, y, z); }
static Interior GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<Interior>(0xDE8C00, x, y, z); }
static void ENABLE_STADIUM_PROBES_THIS_FRAME(BOOL toggle) { invoke<Void>(0xDE8CB0, toggle); }
static void ACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0xDE8CE0, interior, entitySetName); }
static void DEACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0xDE8CE0, interior, entitySetName); }
static BOOL IS_INTERIOR_ENTITY_SET_ACTIVE(Interior interior, const char* entitySetName) { return invoke<BOOL>(0xDE8E00, interior, entitySetName); }
static void SET_INTERIOR_ENTITY_SET_TINT_INDEX(Interior interior, const char* entitySetName, int color) { invoke<Void>(0xDE8EB0, interior, entitySetName, color); }
static void REFRESH_INTERIOR(Interior interior) { invoke<Void>(0xDE8F50, interior); }
static void ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0xDE8FC0, mapObjectHash); }
static void ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0xDE8FF0, mapObjectHash); }
static void DISABLE_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xDE9020, interior, toggle); }
static BOOL IS_INTERIOR_DISABLED(Interior interior) { return invoke<BOOL>(0xDE90C0, interior); }
static void CAP_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xDE9110, interior, toggle); }
static BOOL IS_INTERIOR_CAPPED(Interior interior) { return invoke<BOOL>(0xDE91B0, interior); }
static void DISABLE_METRO_SYSTEM(BOOL toggle) { invoke<Void>(0xDE9200, toggle); }
static void SET_IS_EXTERIOR_ONLY(Entity entity, BOOL toggle) { invoke<Void>(0xDE9220, entity, toggle); }
static ScrHandle CREATE_ITEMSET(BOOL p0) { return invoke<ScrHandle>(0xDE9630, p0); }
static void DESTROY_ITEMSET(ScrHandle itemset) { invoke<Void>(0xDE96B0, itemset); }
static BOOL IS_ITEMSET_VALID(ScrHandle itemset) { return invoke<BOOL>(0xDE96F0, itemset); }
static BOOL ADD_TO_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0xDE9730, item, itemset); }
static void REMOVE_FROM_ITEMSET(ScrHandle item, ScrHandle itemset) { invoke<Void>(0xDE97A0, item, itemset); }
static int GET_ITEMSET_SIZE(ScrHandle itemset) { return invoke<int>(0xDE9800, itemset); }
static ScrHandle GET_INDEXED_ITEM_IN_ITEMSET(int index, ScrHandle itemset) { return invoke<ScrHandle>(0xDE9850, index, itemset); }
static BOOL IS_IN_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0xDE98B0, item, itemset); }
static void CLEAN_ITEMSET(ScrHandle itemset) { invoke<Void>(0xDE9920, itemset); }
static BOOL LOBBY_AUTO_MULTIPLAYER_MENU() { return invoke<BOOL>(0xDE9BB0); }
static BOOL LOBBY_AUTO_MULTIPLAYER_FREEMODE() { return invoke<BOOL>(0xDE9BC0); }
static void LOBBY_SET_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xDE9C00, toggle); }
static BOOL LOBBY_AUTO_MULTIPLAYER_EVENT() { return invoke<BOOL>(0xDE9C20); }
static void LOBBY_SET_AUTO_MULTIPLAYER_EVENT(BOOL toggle) { invoke<Void>(0xDE9C00, toggle); }
static BOOL LOBBY_AUTO_MULTIPLAYER_RANDOM_JOB() { return invoke<BOOL>(0xDE9C60); }
static void LOBBY_SET_AUTO_MP_RANDOM_JOB(BOOL toggle) { invoke<Void>(0xDE9C80, toggle); }
static void SHUTDOWN_SESSION_CLEARS_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xDE9CA0, toggle); }
static int LOCALIZATION_GET_SYSTEM_LANGUAGE() { return invoke<int>(0xDE9DD0); }
static int GET_CURRENT_LANGUAGE() { return invoke<int>(0xDE9E00); }
static int LOCALIZATION_GET_SYSTEM_DATE_TYPE() { return invoke<int>(0xDE9E30); }
static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0xDF5740); }
static int GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(int stackSize) { return invoke<int>(0xDF5770, stackSize); }
static void SET_RANDOM_SEED(int seed) { invoke<Void>(0xDF5790, seed); }
static void SET_TIME_SCALE(float timeScale) { invoke<Void>(0xDF57C0, timeScale); }
static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0xDF5800, toggle); }
static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0xDF5850); }
static void SET_RANDOM_EVENT_FLAG(BOOL toggle) { invoke<Void>(0xDF5870, toggle); }
static BOOL GET_RANDOM_EVENT_FLAG() { return invoke<BOOL>(0xDF58D0); }
static const char* GET_CONTENT_TO_LOAD() { return invoke<const char*>(0xDF58E0); }
static void ACTIVITY_FEED_CREATE(const char* p0, const char* p1) { invoke<Void>(0xDF5970, p0, p1); }
static void ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0xDF5980, p0); }
static void ACTIVITY_FEED_ADD_LITERAL_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0xDF5990, p0); }
static void ACTIVITY_FEED_ADD_INT_TO_CAPTION(Any p0) { invoke<Void>(0xDF59A0, p0); }
static void ACTIVITY_FEED_LARGE_IMAGE_URL(const char* p0) { invoke<Void>(0xDF59C0, p0); }
static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(const char* p0, const char* p1) { invoke<Void>(0xDF59E0, p0, p1); }
static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(const char* p0) { invoke<Void>(0xDF59E0, p0); }
static void ACTIVITY_FEED_POST() { invoke<Void>(0xDF5A10); }
static void ACTIVITY_FEED_ONLINE_PLAYED_WITH_POST(const char* p0) { invoke<Void>(0xDF5A30, p0); }
static BOOL HAS_RESUMED_FROM_SUSPEND() { return invoke<BOOL>(0xDF5A40); }
static void SET_SCRIPT_HIGH_PRIO(BOOL toggle) { invoke<Void>(0xDF5A70, toggle); }
static void SET_THIS_IS_A_TRIGGER_SCRIPT(BOOL toggle) { invoke<Void>(0xDF5AA0, toggle); }
static void INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION(const char* p0) { invoke<Void>(0xDF5AD0, p0); }
static BOOL GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(Any* p0, Any* p1, Any p2, BOOL p3) { return invoke<BOOL>(0xDF5AE0, p0, p1, p2, p3); }
static Hash GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xDF5B80); }
static Hash GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xDF5BA0); }
static BOOL IS_PREV_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0xDF5BC0, weatherType); }
static BOOL IS_NEXT_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0xDF5C10, weatherType); }
static void SET_WEATHER_TYPE_PERSIST(const char* weatherType) { invoke<Void>(0xDF5C60, weatherType); }
static void SET_WEATHER_TYPE_NOW_PERSIST(const char* weatherType) { invoke<Void>(0xDF5CB0, weatherType); }
static void SET_WEATHER_TYPE_NOW(const char* weatherType) { invoke<Void>(0xDF5D00, weatherType); }
static void SET_WEATHER_TYPE_OVERTIME_PERSIST(const char* weatherType, float time) { invoke<Void>(0xDF5D50, weatherType, time); }
static void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0xDF5DA0); }
static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0xDF5DC0); }
static void CLEAR_WEATHER_TYPE_NOW_PERSIST_NETWORK(int milliseconds) { invoke<Void>(0xDF5DD0, milliseconds); }
static void GET_CURR_WEATHER_STATE(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) { invoke<Void>(0xDF5E00, weatherType1, weatherType2, percentWeather2); }
static void SET_CURR_WEATHER_STATE(Hash weatherType1, Hash weatherType2, float percentWeather2) { invoke<Void>(0xDF5E50, weatherType1, weatherType2, percentWeather2); }
static void SET_OVERRIDE_WEATHER(const char* weatherType) { invoke<Void>(0xDF5EE0, weatherType); }
static void SET_OVERRIDE_WEATHEREX(const char* weatherType, BOOL p1) { invoke<Void>(0xDF5EE0, weatherType, p1); }
static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0xDF5F80); }
static void WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(float amplitude) { invoke<Void>(0xDF5F90, amplitude); }
static void WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xDF5FB0, minAmplitude); }
static void WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0xDF5FD0, maxAmplitude); }
static void WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xDF5FF0, minAmplitude); }
static void WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(float amplitude) { invoke<Void>(0xDF6010, amplitude); }
static void WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xDF6030, minAmplitude); }
static void WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0xDF6050, maxAmplitude); }
static void WATER_OVERRIDE_SET_RIPPLEBUMPINESS(float bumpiness) { invoke<Void>(0xDF6070, bumpiness); }
static void WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(float minBumpiness) { invoke<Void>(0xDF6090, minBumpiness); }
static void WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(float maxBumpiness) { invoke<Void>(0xDF60B0, maxBumpiness); }
static void WATER_OVERRIDE_SET_RIPPLEDISTURB(float disturb) { invoke<Void>(0xDF60D0, disturb); }
static void WATER_OVERRIDE_SET_STRENGTH(float strength) { invoke<Void>(0xDF60F0, strength); }
static void WATER_OVERRIDE_FADE_IN(float p0) { invoke<Void>(0xDF6110, p0); }
static void WATER_OVERRIDE_FADE_OUT(float p0) { invoke<Void>(0xDF6130, p0); }
static void SET_WIND(float speed) { invoke<Void>(0xDF6150, speed); }
static void SET_WIND_SPEED(float speed) { invoke<Void>(0xDF6150, speed); }
static float GET_WIND_SPEED() { return invoke<float>(0xDF61A0); }
static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0xDF6150, direction); }
static vector3 GET_WIND_DIRECTION() { return invoke<vector3>(0xDF61E0); }
static void SET_RAIN(float intensity) { invoke<Void>(0xDF6250, intensity); }
static float GET_RAIN_LEVEL() { return invoke<float>(0xDF6270); }
static void SET_SNOW(float level) { invoke<Void>(0xDF6290, level); }
static float GET_SNOW_LEVEL() { return invoke<float>(0xDF62B0); }
static void FORCE_LIGHTNING_FLASH() { invoke<Void>(0xDF62D0); }
static void SET_CLOUD_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0xDF62E0, p0); }
static void PRELOAD_CLOUD_HAT(const char* name) { invoke<Void>(0xDF6330, name); }
static void LOAD_CLOUD_HAT(const char* name, float transitionTime) { invoke<Void>(0xDF6350, name, transitionTime); }
static void UNLOAD_CLOUD_HAT(const char* name, float p1) { invoke<Void>(0xDF6350, name, p1); }
static void UNLOAD_ALL_CLOUD_HATS() { invoke<Void>(0xDF6390); }
static void SET_CLOUDS_ALPHA(float opacity) { invoke<Void>(0xDF63A0, opacity); }
static float GET_CLOUDS_ALPHA() { return invoke<float>(0xDF63C0); }
static int GET_GAME_TIMER() { return invoke<int>(0xDF63E0); }
static float GET_FRAME_TIME() { return invoke<float>(0xDF63F0); }
static float GET_SYSTEM_TIME_STEP() { return invoke<float>(0xDF6410); }
static int GET_FRAME_COUNT() { return invoke<int>(0xDF6430); }
static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0xDF6440, startRange, endRange); }
static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xDF64A0, startRange, endRange); }
static int GET_RANDOM_MWC_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xDF64F0, startRange, endRange); }
static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL ignoreWater, BOOL p5) { return invoke<BOOL>(0xDF65A0, x, y, z, groundZ, ignoreWater, p5); }
static BOOL GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(float x, float y, float z, float* groundZ, vector3* normal) { return invoke<BOOL>(0xDF65E0, x, y, z, groundZ, normal); }
static BOOL GET_GROUND_Z_EXCLUDING_OBJECTS_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL p4, BOOL p5) { return invoke<BOOL>(0xDF66E0, x, y, z, groundZ, p4, p5); }
static float ASIN(float p0) { return invoke<float>(0xDF6720, p0); }
static float ACOS(float p0) { return invoke<float>(0xDF6770, p0); }
static float TAN(float p0) { return invoke<float>(0xDF67C0, p0); }
static float ATAN(float p0) { return invoke<float>(0xDF67C0, p0); }
static float ATAN2(float p0, float p1) { return invoke<float>(0xDF67C0, p0, p1); }
static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return invoke<float>(0xDF67C0, x1, y1, z1, x2, y2, z2, useZ); }
static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0xDF68D0, x1, y1, x2, y2); }
static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0xDF6990, dx, dy); }
static float GET_RATIO_OF_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<float>(0xDF6A10, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); }
static vector3 GET_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<vector3>(0xDF6B30, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); }
static BOOL GET_LINE_PLANE_INTERSECTION(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float* p12) { return invoke<BOOL>(0xDF6C80, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static BOOL GET_POINT_AREA_OVERLAP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoke<BOOL>(0xDF6D60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void SET_BIT(int* address, int offset) { invoke<Void>(0xDF6DA0, address, offset); }
static void CLEAR_BIT(int* address, int offset) { invoke<Void>(0xDF6DC0, address, offset); }
static Hash GET_HASH_KEY(const char* string) { return invoke<Hash>(0xDF6DE0, string); }
static void SLERP_NEAR_QUATERNION(float t, float x, float y, float z, float w, float x1, float y1, float z1, float w1, float* outX, float* outY, float* outZ, float* outW) { invoke<Void>(0xDF6E10, t, x, y, z, w, x1, y1, z1, w1, outX, outY, outZ, outW); }
static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0xDF6E70, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static BOOL IS_AREA_OCCUPIED_SLOW(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<BOOL>(0xDF6E70, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static BOOL IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL checkVehicles, BOOL checkPeds, BOOL p7, BOOL p8, Entity ignoreEntity, BOOL p10) { return invoke<BOOL>(0xDF7230, x, y, z, range, p4, checkVehicles, checkPeds, p7, p8, ignoreEntity, p10); }
static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0xDF72B0, p0, p1, p2, p3, p4, p5, p6); }
static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL ignoreCopCars, BOOL ignoreObjects, BOOL p7) { invoke<Void>(0xDF7450, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7); }
static void CLEAR_AREA_LEAVE_VEHICLE_HEALTH(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xDF7450, x, y, z, radius, p4, p5, p6, p7); }
static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, Any p10) { invoke<Void>(0xDF7450, x, y, z, radius, p4, p5, p6, p7, p8, p9, p10); }
static void CLEAR_ANGLED_AREA_OF_VEHICLES(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11, Any p12, Any p13) { invoke<Void>(0xDF7550, x1, y1, z1, x2, y2, z2, width, p7, p8, p9, p10, p11, p12, p13); }
static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xDF7450, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xDF7450, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xDF7450, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, int flags) { invoke<Void>(0xDF7450, x, y, z, radius, flags); }
static void CLEAR_SCENARIO_SPAWN_HISTORY() { invoke<Void>(0xDF76B0); }
static void SET_SAVE_MENU_ACTIVE(BOOL ignoreVehicle) { invoke<Void>(0xDF76C0, ignoreVehicle); }
static int GET_STATUS_OF_MANUAL_SAVE() { return invoke<int>(0xDF77A0); }
static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0xDF77B0, toggle); }
static void SET_CREDITS_FADE_OUT_WITH_SCREEN(BOOL toggle) { invoke<Void>(0xDF77D0, toggle); }
static BOOL HAVE_CREDITS_REACHED_END() { return invoke<BOOL>(0xDF77F0); }
static BOOL ARE_CREDITS_RUNNING() { return invoke<BOOL>(0xDF7800); }
static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(const char* scriptName) { invoke<Void>(0xDF7810, scriptName); }
static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0xDF7850); }
static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0xDF7870, x, y, z, p3, p4); }
static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { invoke<Void>(0xDF79D0, hospitalIndex, toggle); }
static int ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<int>(0xDF79F0, p0, p1, p2, p3, p4); }
static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { invoke<Void>(0xDF7B50, policeIndex, toggle); }
static void SET_RESTART_COORD_OVERRIDE(float x, float y, float z, float heading) { invoke<Void>(0xDF7B70, x, y, z, heading); }
static void CLEAR_RESTART_COORD_OVERRIDE() { invoke<Void>(0xDF7C90); }
static void PAUSE_DEATH_ARREST_RESTART(BOOL toggle) { invoke<Void>(0xDF7CA0, toggle); }
static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0xDF7CC0, toggle); }
static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { invoke<Void>(0xDF7CE0, toggle); }
static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { invoke<Void>(0xDF7D00, toggle); }
static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0xDF7D20, toggle); }
static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0xDF7D40, toggle); }
static int REGISTER_SAVE_HOUSE(float x, float y, float z, float p3, const char* p4, Any p5, Any p6) { return invoke<int>(0xDF7D60, x, y, z, p3, p4, p5, p6); }
static void SET_SAVE_HOUSE(int savehouseHandle, BOOL p1, BOOL p2) { invoke<Void>(0xDF7DE0, savehouseHandle, p1, p2); }
static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0xDF7E00, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL GET_SAVE_HOUSE_DETAILS_AFTER_SUCCESSFUL_LOAD(vector3* p0, float* p1, BOOL* fadeInAfterLoad, BOOL* p3) { return invoke<BOOL>(0xDF7EE0, p0, p1, fadeInAfterLoad, p3); }
static void DO_AUTO_SAVE() { invoke<Void>(0xDF7FB0); }
static BOOL GET_IS_AUTO_SAVE_OFF() { return invoke<BOOL>(0xDF8030); }
static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0xDF8050); }
static BOOL HAS_CODE_REQUESTED_AUTOSAVE() { return invoke<BOOL>(0xDF8080); }
static void CLEAR_CODE_REQUESTED_AUTOSAVE() { invoke<Void>(0xDF8090); }
static void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0xDF80A0, p0, p1); }
static void ADD_REPLAY_STAT_VALUE(Any value) { invoke<Void>(0xDF80C0, value); }
static void END_REPLAY_STATS() { invoke<Void>(0xDF80E0); }
static BOOL HAVE_REPLAY_STATS_BEEN_STORED() { return invoke<BOOL>(0xDF80F0); }
static int GET_REPLAY_STAT_MISSION_ID() { return invoke<int>(0xDF8100); }
static int GET_REPLAY_STAT_MISSION_TYPE() { return invoke<int>(0xDF8110); }
static int GET_REPLAY_STAT_COUNT() { return invoke<int>(0xDF8120); }
static int GET_REPLAY_STAT_AT_INDEX(int index) { return invoke<int>(0xDF8150, index); }
static void CLEAR_REPLAY_STATS() { invoke<Void>(0xDF8180); }
static BOOL QUEUE_MISSION_REPEAT_LOAD() { return invoke<BOOL>(0xDF8190); }
static BOOL QUEUE_MISSION_REPEAT_SAVE() { return invoke<BOOL>(0xDF81B0); }
static BOOL QUEUE_MISSION_REPEAT_SAVE_FOR_BENCHMARK_TEST() { return invoke<BOOL>(0xDF81B0); }
static int GET_STATUS_OF_MISSION_REPEAT_SAVE() { return invoke<int>(0xDF8200); }
static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0xDF8220); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) { invoke<Void>(0xDF8240, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, Any p14) { invoke<Void>(0xDF8240, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, Entity targetEntity, BOOL p17, Any p18, Any p19, Any p20) { invoke<Void>(0xDF8240, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, targetEntity, p17, p18, p19, p20); }
static void GET_MODEL_DIMENSIONS(Hash modelHash, vector3* minimum, vector3* maximum) { invoke<Void>(0xDF8480, modelHash, minimum, maximum); }
static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<Void>(0xDF8500, fakeWantedLevel); }
static int GET_FAKE_WANTED_LEVEL() { return invoke<int>(0xDF85A0); }
static void USING_MISSION_CREATOR(BOOL toggle) { invoke<Void>(0xDF85B0, toggle); }
static void ALLOW_MISSION_CREATOR_WARP(BOOL toggle) { invoke<Void>(0xDF85E0, toggle); }
static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { invoke<Void>(0xDF8630, toggle); }
static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0xDF8650); }
static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0xDF8670); }
static BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0xDF86B0); }
static BOOL SHOULD_USE_METRIC_MEASUREMENTS() { return invoke<BOOL>(0xDF86C0); }
static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0xDF86E0, profileSetting); }
static BOOL ARE_STRINGS_EQUAL(const char* string1, const char* string2) { return invoke<BOOL>(0xDF8710, string1, string2); }
static int COMPARE_STRINGS(const char* str1, const char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0xDF8750, str1, str2, matchCase, maxLength); }
static int ABSI(int value) { return invoke<int>(0xDF87A0, value); }
static float ABSF(float value) { return invoke<float>(0xDF87C0, value); }
static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xDF87F0, x1, y1, z1, x2, y2, z2); }
static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF88B0, x1, y1, z1, x2, y2, z2, ownedByPlayer); }
static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF89B0, x1, y1, z1, x2, y2, z2, type, ownedByPlayer); }
static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8A10, x1, y1, z1, x2, y2, z2, width, p7, ownedByPlayer); }
static BOOL IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float x, float y, float z, Hash projectileHash, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF67C0, x, y, z, projectileHash, radius, ownedByPlayer); }
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Hash projectileHash, vector3* projectilePos, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8AB0, x1, y1, z1, x2, y2, z2, projectileHash, projectilePos, ownedByPlayer); }
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_IN_ANGLED_AREA(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float distanceOfOppositeFace, Hash weaponType, vector3* positionOut, BOOL bIsPlayer) { return invoke<BOOL>(0xDF8B40, vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, distanceOfOppositeFace, weaponType, positionOut, bIsPlayer); }
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, vector3* outCoords, BOOL p4) { return invoke<BOOL>(0xDF67C0, ped, weaponHash, distance, outCoords, p4); }
static BOOL GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, vector3* outCoords, Object* outProjectile, BOOL p5) { return invoke<BOOL>(0xDF67C0, ped, weaponHash, distance, outCoords, outProjectile, p5); }
static BOOL IS_BULLET_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8D40, x1, y1, z1, x2, y2, z2, width, ownedByPlayer); }
static BOOL IS_BULLET_IN_AREA(float x, float y, float z, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8E00, x, y, z, radius, ownedByPlayer); }
static BOOL IS_BULLET_IN_BOX(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xDF8EA0, x1, y1, z1, x2, y2, z2, ownedByPlayer); }
static BOOL HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xDF8F90, x, y, z, p3, p4, p5); }
static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0xDF9030, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0xDF9120); }
static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0xDF9130); }
static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0xDF9140); }
static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0xDF9150); }
static BOOL IS_PC_VERSION() { return invoke<BOOL>(0xDF9160); }
static BOOL IS_STEAM_VERSION() { return invoke<BOOL>(0xDF9170); }
static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0xDF9190); }
static BOOL IS_JAPANESE_VERSION() { return invoke<BOOL>(0xDF91A0); }
static BOOL IS_XBOX_PLATFORM() { return invoke<BOOL>(0xDF91C0); }
static BOOL IS_SCARLETT_VERSION() { return invoke<BOOL>(0xDF91D0); }
static BOOL IS_SCE_PLATFORM() { return invoke<BOOL>(0xDF91E0); }
static BOOL IS_PROSPERO_VERSION() { return invoke<BOOL>(0xDF91F0); }
static BOOL IS_STRING_NULL(const char* string) { return invoke<BOOL>(0xDF9200, string); }
static BOOL IS_STRING_NULL_OR_EMPTY(const char* string) { return invoke<BOOL>(0xDF9200, string); }
static BOOL STRING_TO_INT(const char* string, int* outInteger) { return invoke<BOOL>(0xDF9240, string, outInteger); }
static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0xDF6DA0, var, rangeStart, rangeEnd, p3); }
static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0xDF9330, var, rangeStart, rangeEnd); }
static int ADD_STUNT_JUMP(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float camX, float camY, float camZ, int p15, int p16, int p17) { return invoke<int>(0xDF9370, x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, camX, camY, camZ, p15, p16, p17); }
static int ADD_STUNT_JUMP_ANGLED(float x1, float y1, float z1, float x2, float y2, float z2, float radius1, float x3, float y3, float z3, float x4, float y4, float z4, float radius2, float camX, float camY, float camZ, int p17, int p18, int p19) { return invoke<int>(0xDF9370, x1, y1, z1, x2, y2, z2, radius1, x3, y3, z3, x4, y4, z4, radius2, camX, camY, camZ, p17, p18, p19); }
static void TOGGLE_SHOW_OPTIONAL_STUNT_JUMP_CAMERA(BOOL toggle) { invoke<Void>(0xDF9540, toggle); }
static void DELETE_STUNT_JUMP(int p0) { invoke<Void>(0xDF9560, p0); }
static void ENABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xDF9580, p0); }
static void DISABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xDF95A0, p0); }
static void SET_STUNT_JUMPS_CAN_TRIGGER(BOOL toggle) { invoke<Void>(0xDF95C0, toggle); }
static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0xDF95F0); }
static BOOL IS_STUNT_JUMP_MESSAGE_SHOWING() { return invoke<BOOL>(0xDF9620); }
static int GET_NUM_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0xDF9650); }
static int GET_TOTAL_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0xDF9680); }
static void CANCEL_STUNT_JUMP() { invoke<Void>(0xDF96B0); }
static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0xDF96D0, toggle); }
static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0xDF9700, toggle); }
static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0xDE2E50, toggle); }
static BOOL HAS_CHEAT_WITH_HASH_BEEN_ACTIVATED(Hash hash, int amount) { return invoke<BOOL>(0xDF9760, hash, amount); }
static BOOL HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(Hash hash) { return invoke<BOOL>(0xDF9790, hash); }
static void OVERRIDE_FREEZE_FLAGS(BOOL p0) { invoke<Void>(0xDF97A0, p0); }
static void SET_INSTANCE_PRIORITY_MODE(int p0) { invoke<Void>(0xDF67C0, p0); }
static void SET_INSTANCE_PRIORITY_HINT(int flag) { invoke<Void>(0xDF67C0, flag); }
static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0xDF97E0); }
static void POPULATE_NOW() { invoke<Void>(0xDF97F0); }
static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xDF9800); }
static void SET_GRAVITY_LEVEL(int level) { invoke<Void>(0xDF9830, level); }
static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { invoke<Void>(0xDF9850, p0, p1, p2); }
static void STOP_SAVE_DATA() { invoke<Void>(0xDF9890); }
static int GET_SIZE_OF_SAVE_DATA(BOOL p0) { return invoke<int>(0xDF98B0, p0); }
static void REGISTER_INT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF98E0, p0, name); }
static void REGISTER_INT64_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9910, p0, name); }
static void REGISTER_ENUM_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9940, p0, name); }
static void REGISTER_FLOAT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9970, p0, name); }
static void REGISTER_BOOL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF99A0, p0, name); }
static void REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF99D0, p0, name); }
static void REGISTER_TEXT_LABEL_15_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9A00, p0, name); }
static void REGISTER_TEXT_LABEL_23_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9A30, p0, name); }
static void REGISTER_TEXT_LABEL_31_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9A60, p0, name); }
static void REGISTER_TEXT_LABEL_63_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xDF9A90, p0, name); }
static void START_SAVE_STRUCT_WITH_SIZE(Any* p0, int size, const char* structName) { invoke<Void>(0xDF9AC0, p0, size, structName); }
static void STOP_SAVE_STRUCT() { invoke<Void>(0xDF9B00); }
static void START_SAVE_ARRAY_WITH_SIZE(Any* p0, int size, const char* arrayName) { invoke<Void>(0xDF9B20, p0, size, arrayName); }
static void STOP_SAVE_ARRAY() { invoke<Void>(0xDF9B60); }
static void COPY_SCRIPT_STRUCT(Any* dst, Any* src, int size) { invoke<Void>(0xDF9B80, dst, src, size); }
static void ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) { invoke<Void>(0xDF9BA0, dispatchService, toggle); }
static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(int dispatchService, BOOL toggle) { invoke<Void>(0xDF9BD0, dispatchService, toggle); }
static int GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(int dispatchService) { return invoke<int>(0xDF9C00, dispatchService); }
static BOOL CREATE_INCIDENT(int dispatchService, float x, float y, float z, int numUnits, float radius, int* outIncidentID, Any p7, Any p8) { return invoke<BOOL>(0xDF9C50, dispatchService, x, y, z, numUnits, radius, outIncidentID, p7, p8); }
static BOOL CREATE_INCIDENT_WITH_ENTITY(int dispatchService, Ped ped, int numUnits, float radius, int* outIncidentID, Any p5, Any p6) { return invoke<BOOL>(0xDF9C50, dispatchService, ped, numUnits, radius, outIncidentID, p5, p6); }
static void DELETE_INCIDENT(int incidentId) { invoke<Void>(0xDF9CD0, incidentId); }
static BOOL IS_INCIDENT_VALID(int incidentId) { return invoke<BOOL>(0xDF9D10, incidentId); }
static void SET_INCIDENT_REQUESTED_UNITS(int incidentId, int dispatchService, int numUnits) { invoke<Void>(0xDF9D50, incidentId, dispatchService, numUnits); }
static void SET_IDEAL_SPAWN_DISTANCE_FOR_INCIDENT(int incidentId, float p1) { invoke<Void>(0xDF67C0, incidentId, p1); }
static BOOL FIND_SPAWN_POINT_IN_DIRECTION(float posX, float posY, float posZ, float fwdVecX, float fwdVecY, float fwdVecZ, float distance, vector3* spawnPoint) { return invoke<BOOL>(0xDF9E20, posX, posY, posZ, fwdVecX, fwdVecY, fwdVecZ, distance, spawnPoint); }
static int ADD_POP_MULTIPLIER_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6, float p7, BOOL p8, BOOL p9) { return invoke<int>(0xDF9ED0, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); }
static BOOL DOES_POP_MULTIPLIER_AREA_EXIST(int id) { return invoke<BOOL>(0xDF9F90, id); }
static void REMOVE_POP_MULTIPLIER_AREA(int id, BOOL p1) { invoke<Void>(0xDF9FD0, id, p1); }
static BOOL IS_POP_MULTIPLIER_AREA_NETWORKED(int id) { return invoke<BOOL>(0xDF9FF0, id); }
static int ADD_POP_MULTIPLIER_SPHERE(float x, float y, float z, float radius, float pedMultiplier, float vehicleMultiplier, BOOL p6, BOOL p7) { return invoke<int>(0xDFA020, x, y, z, radius, pedMultiplier, vehicleMultiplier, p6, p7); }
static BOOL DOES_POP_MULTIPLIER_SPHERE_EXIST(int id) { return invoke<BOOL>(0xDFA0C0, id); }
static void REMOVE_POP_MULTIPLIER_SPHERE(int id, BOOL p1) { invoke<Void>(0xDFA100, id, p1); }
static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xDFA120, ped, toggle, p2); }
static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0xDFA140, ped); }
static void PLAY_TENNIS_SWING_ANIM(Ped ped, const char* animDict, const char* animName, float p3, float p4, BOOL p5) { invoke<Void>(0xDFA1C0, ped, animDict, animName, p3, p4, p5); }
static BOOL GET_TENNIS_SWING_ANIM_COMPLETE(Ped ped) { return invoke<BOOL>(0xDFA270, ped); }
static BOOL GET_TENNIS_SWING_ANIM_CAN_BE_INTERRUPTED(Ped ped) { return invoke<BOOL>(0xDFA2F0, ped); }
static BOOL GET_TENNIS_SWING_ANIM_SWUNG(Ped ped) { return invoke<BOOL>(0xDFA370, ped); }
static void PLAY_TENNIS_DIVE_ANIM(Ped ped, int p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xDFA3F0, ped, p1, p2, p3, p4, p5); }
static void SET_TENNIS_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* p1, float p2) { invoke<Void>(0xDFA4A0, ped, p1, p2); }
static void RESET_DISPATCH_SPAWN_LOCATION() { invoke<Void>(0xDFA560); }
static void SET_DISPATCH_SPAWN_LOCATION(float x, float y, float z) { invoke<Void>(0xDFA580, x, y, z); }
static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0xDF67C0); }
static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float distance) { invoke<Void>(0xDF67C0, distance); }
static void RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0) { invoke<Void>(0xDFA620, p0); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { invoke<Void>(0xDFA680, p0, p1); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { invoke<Void>(0xDFA680, p0, p1); }
static int ADD_DISPATCH_SPAWN_ANGLED_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0xDFA6A0, x1, y1, z1, x2, y2, z2, width); }
static int ADD_DISPATCH_SPAWN_SPHERE_BLOCKING_AREA(float x1, float y1, float x2, float y2) { return invoke<int>(0xDFA720, x1, y1, x2, y2); }
static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(int p0) { invoke<Void>(0xDFA790, p0); }
static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xDFA7C0); }
static void RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN() { invoke<Void>(0xDFA7E0); }
static void SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(int p0, int p1) { invoke<Void>(0xDFA800, p0, p1); }
static void ADD_TACTICAL_NAV_MESH_POINT(float x, float y, float z) { invoke<Void>(0xDFA840, x, y, z); }
static void CLEAR_TACTICAL_NAV_MESH_POINTS() { invoke<Void>(0xDFA870); }
static void SET_RIOT_MODE_ENABLED(BOOL toggle) { invoke<Void>(0xDFA880, toggle); }
static void DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(int p0, const char* windowTitle, Any* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, const char* defaultConcat4, const char* defaultConcat5, const char* defaultConcat6, const char* defaultConcat7, int maxInputLength) { invoke<Void>(0xDFA8A0, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); }
static void DISPLAY_ONSCREEN_KEYBOARD(int p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) { invoke<Void>(0xDFA910, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); }
static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0xDFA970); }
static const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<const char*>(0xDFA990); }
static void CANCEL_ONSCREEN_KEYBOARD() { invoke<Void>(0xDFA9C0); }
static void NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(int p0) { invoke<Void>(0xDFA9D0, p0); }
static void ACTION_MANAGER_ENABLE_ACTION(Hash hash, BOOL enable) { invoke<Void>(0xDFA9E0, hash, enable); }
static int GET_REAL_WORLD_TIME() { return invoke<int>(0xDFAA10); }
static void SUPRESS_RANDOM_EVENT_THIS_FRAME(int eventType, BOOL suppress) { invoke<Void>(0xDFAA30, eventType, suppress); }
static void SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xDFAA50, player); }
static void SET_FIRE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xDFAA90, player); }
static void SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { invoke<Void>(0xDFAAE0, player); }
static void SET_SUPER_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xDFAB20, player); }
static void SET_BEAST_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xDFAB50, player); }
static void SET_FORCED_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xDFAB80, player); }
static BOOL HAS_GAME_INSTALLED_THIS_SESSION() { return invoke<BOOL>(0xDFABB0); }
static void SET_TICKER_JOHNMARSTON_IS_DONE() { invoke<Void>(0xDFABC0); }
static BOOL ARE_PROFILE_SETTINGS_VALID() { return invoke<BOOL>(0xDFAC10); }
static void PREVENT_ARREST_STATE_THIS_FRAME() { invoke<Void>(0xDFAC30); }
static void FORCE_GAME_STATE_PLAYING() { invoke<Void>(0xDFAC40); }
static void SCRIPT_RACE_INIT(int p0, int p1, Any p2, Any p3) { invoke<Void>(0xDFAC70, p0, p1, p2, p3); }
static void SCRIPT_RACE_SHUTDOWN() { invoke<Void>(0xDFAC90); }
static void SCRIPT_RACE_PLAYER_HIT_CHECKPOINT(Player player, Any p1, Any p2, Any p3) { invoke<Void>(0xDFACA0, player, p1, p2, p3); }
static BOOL SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(Player player, int* p1, int* p2) { return invoke<BOOL>(0xDFACC0, player, p1, p2); }
static void START_END_USER_BENCHMARK() { invoke<Void>(0xDFACF0); }
static void STOP_END_USER_BENCHMARK() { invoke<Void>(0xDFAD00); }
static void RESET_END_USER_BENCHMARK() { invoke<Void>(0xDFAD10); }
static void SAVE_END_USER_BENCHMARK() { invoke<Void>(0xDFAD20); }
static BOOL UI_STARTED_END_USER_BENCHMARK() { return invoke<BOOL>(0xDFAD30); }
static BOOL LANDING_SCREEN_STARTED_END_USER_BENCHMARK() { return invoke<BOOL>(0xDFAD40); }
static BOOL IS_COMMANDLINE_END_USER_BENCHMARK() { return invoke<BOOL>(0xDFAD50); }
static int GET_BENCHMARK_ITERATIONS() { return invoke<int>(0xDFAD60); }
static int GET_BENCHMARK_PASS() { return invoke<int>(0xDFAD70); }
static void RESTART_GAME() { invoke<Void>(0xDFAD80); }
static void QUIT_GAME() { invoke<Void>(0xDFAD90); }
static BOOL HAS_ASYNC_INSTALL_FINISHED() { return invoke<BOOL>(0xDFADA0); }
static void CLEANUP_ASYNC_INSTALL() { invoke<Void>(0xDFADC0); }
static BOOL PLM_IS_IN_CONSTRAINED_MODE() { return invoke<BOOL>(0xDFADD0); }
static int PLM_GET_CONSTRAINED_DURATION_MS() { return invoke<int>(0xDFAE00); }
static void SET_PLAYER_IS_IN_ANIMAL_FORM(BOOL toggle) { invoke<Void>(0xDFAE30, toggle); }
static BOOL GET_IS_PLAYER_IN_ANIMAL_FORM() { return invoke<BOOL>(0xDFAE50); }
static void SET_PLAYER_IS_REPEATING_A_MISSION(BOOL toggle) { invoke<Void>(0xDFAE60, toggle); }
static void DISABLE_SCREEN_DIMMING_THIS_FRAME() { invoke<Void>(0xDFAE80); }
static float GET_CITY_DENSITY() { return invoke<float>(0xDFAE90); }
static void USE_ACTIVE_CAMERA_FOR_TIMESLICING_CENTRE() { invoke<Void>(0xDFAEA0); }
static void SET_CONTENT_ID_INDEX(Hash contentId, int index) { invoke<Void>(0xDFAEB0, contentId, index); }
static int GET_CONTENT_ID_INDEX(Hash contentId) { return invoke<int>(0xDFAF00, contentId); }
static void CREATE_MOBILE_PHONE(int phoneType) { invoke<Void>(0xEAF040, phoneType); }
static void DESTROY_MOBILE_PHONE() { invoke<Void>(0xEAF050); }
static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<Void>(0xEAF080, scale); }
static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { invoke<Void>(0xEAF0A0, rotX, rotY, rotZ, p3); }
static void GET_MOBILE_PHONE_ROTATION(vector3* rotation, Vehicle p1) { invoke<Void>(0xEAF0E0, rotation, p1); }
static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<Void>(0xEAF1D0, posX, posY, posZ); }
static void GET_MOBILE_PHONE_POSITION(vector3* position) { invoke<Void>(0xEAF260, position); }
static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { invoke<Void>(0xEAF2D0, toggle); }
static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0xEAF2F0); }
static void SET_MOBILE_PHONE_DOF_STATE(BOOL toggle) { invoke<Void>(0xEAF300, toggle); }
static void CELL_SET_INPUT(int direction) { invoke<Void>(0xEAF320, direction); }
static void CELL_HORIZONTAL_MODE_TOGGLE(BOOL toggle) { invoke<Void>(0xEAF330, toggle); }
static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { invoke<Void>(0xEAF350, p0, p1); }
static void CELL_CAM_ACTIVATE_SELFIE_MODE(BOOL toggle) { invoke<Void>(0xEAF350, toggle); }
static void CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(BOOL toggle) { invoke<Void>(0xEAF350, toggle); }
static void CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(float p0) { invoke<Void>(0xEAF3B0, p0); }
static void CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(float horizontalPan) { invoke<Void>(0xEAF3C0, horizontalPan); }
static void CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(float vertPan) { invoke<Void>(0xEAF3D0, vertPan); }
static void CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(float roll) { invoke<Void>(0xEAF3E0, roll); }
static void CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(float distanceScaling) { invoke<Void>(0xDF67C0, distanceScaling); }
static void CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(float yaw) { invoke<Void>(0xEAF400, yaw); }
static void CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(float roll) { invoke<Void>(0xEAF410, roll); }
static void CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(float pitch) { invoke<Void>(0xEAF420, pitch); }
static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0xEAF430, entity); }
static void GET_MOBILE_PHONE_RENDER_ID(int* renderId) { invoke<Void>(0xEAF460, renderId); }
static void NETWORK_INITIALIZE_CASH(int wallet, int bank) { invoke<Void>(0xE1D3E0, wallet, bank); }
static void NETWORK_DELETE_CHARACTER(int characterSlot, BOOL p1, BOOL p2) { invoke<Void>(0xE1D3F0, characterSlot, p1, p2); }
static void NETWORK_MANUAL_DELETE_CHARACTER(int characterSlot) { invoke<Void>(0xE1D410, characterSlot); }
static BOOL NETWORK_GET_PLAYER_IS_HIGH_EARNER() { return invoke<BOOL>(0xE1D4A0); }
static void NETWORK_CLEAR_CHARACTER_WALLET(int characterSlot) { invoke<Void>(0xE1D4C0, characterSlot); }
static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, Any* gamerHandle) { invoke<Void>(0xE1D510, amount, gamerHandle); }
static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int value, Any* gamerHandle) { invoke<Void>(0xE1D520, value, gamerHandle); }
static BOOL NETWORK_CAN_SHARE_JOB_CASH() { return invoke<BOOL>(0xE1D530); }
static void NETWORK_REFUND_CASH(int index, const char* context, const char* reason, BOOL p3) { invoke<Void>(0xE1D590, index, context, reason, p3); }
static void NETWORK_DEDUCT_CASH(int amount, const char* p1, const char* p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0xE1D5B0, amount, p1, p2, p3, p4, p5); }
static BOOL NETWORK_MONEY_CAN_BET(int amount, BOOL p1, BOOL p2) { return invoke<BOOL>(0xE1D5F0, amount, p1, p2); }
static BOOL NETWORK_CAN_BET(int amount) { return invoke<BOOL>(0xE1D630, amount); }
static BOOL NETWORK_CASINO_CAN_BET(Hash hash) { return invoke<BOOL>(0xDF6720, hash); }
static BOOL NETWORK_CASINO_CAN_BET_PVC() { return invoke<BOOL>(0xDF6720); }
static BOOL NETWORK_CASINO_CAN_BET_AMOUNT(Any p0) { return invoke<BOOL>(0xDF6720, p0); }
static BOOL NETWORK_CASINO_CAN_BUY_CHIPS_PVC() { return invoke<BOOL>(0xDF6720); }
static BOOL NETWORK_CASINO_BUY_CHIPS(int p0, int p1) { return invoke<BOOL>(0xDF6720, p0, p1); }
static BOOL NETWORK_CASINO_SELL_CHIPS(int p0, int p1) { return invoke<BOOL>(0xDF6720, p0, p1); }
static void NETWORK_DEFER_CASH_TRANSACTIONS_UNTIL_SHOP_SAVE() { invoke<Void>(0xE1D7D0); }
static BOOL CAN_PAY_AMOUNT_TO_BOSS(int p0, int p1, int amount, int* p3) { return invoke<BOOL>(0xE1D7E0, p0, p1, amount, p3); }
static void NETWORK_EARN_FROM_PICKUP(int amount) { invoke<Void>(0xE1D860, amount); }
static void NETWORK_EARN_FROM_CASHING_OUT(int amount) { invoke<Void>(0xE1D920, amount); }
static void NETWORK_EARN_FROM_GANGATTACK_PICKUP(int amount) { invoke<Void>(0xE1D9E0, amount); }
static void NETWORK_EARN_ASSASSINATE_TARGET_KILLED(int amount) { invoke<Void>(0xE1DAA0, amount); }
static void NETWORK_EARN_FROM_ROB_ARMORED_CARS(int amount) { invoke<Void>(0xE1DB60, amount); }
static void NETWORK_EARN_FROM_CRATE_DROP(int amount) { invoke<Void>(0xE1DC20, amount); }
static void NETWORK_EARN_FROM_BETTING(int amount, const char* p1) { invoke<Void>(0xE1DCE0, amount, p1); }
static void NETWORK_EARN_FROM_JOB(int amount, const char* p1) { invoke<Void>(0xE1DCF0, amount, p1); }
static void NETWORK_EARN_FROM_JOBX2(int amount, const char* p1) { invoke<Void>(0xE1DCF0, amount, p1); }
static void NETWORK_EARN_FROM_PREMIUM_JOB(int amount, const char* p1) { invoke<Void>(0xE1DD10, amount, p1); }
static void NETWORK_EARN_FROM_BEND_JOB(int amount, const char* heistHash) { invoke<Void>(0xE1DD20, amount, heistHash); }
static void NETWORK_EARN_FROM_CHALLENGE_WIN(Any p0, Any* p1, BOOL p2) { invoke<Void>(0xE1DD30, p0, p1, p2); }
static void NETWORK_EARN_FROM_BOUNTY(int amount, Any* gamerHandle, Any* p2, Any p3) { invoke<Void>(0xE1DD50, amount, gamerHandle, p2, p3); }
static void NETWORK_EARN_FROM_IMPORT_EXPORT(int amount, Hash modelHash) { invoke<Void>(0xE1DD70, amount, modelHash); }
static void NETWORK_EARN_FROM_HOLDUPS(int amount) { invoke<Void>(0xE1DD80, amount); }
static void NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) { invoke<Void>(0xE1DE40, amount, propertyName); }
static void NETWORK_EARN_FROM_AI_TARGET_KILL(Any p0, Any p1) { invoke<Void>(0xE1DF10, p0, p1); }
static void NETWORK_EARN_FROM_NOT_BADSPORT(int amount) { invoke<Void>(0xE1DFD0, amount); }
static void NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xE1E090, p0, p1, p2, p3, p4, p5, p6, p7); }
static void NETWORK_EARN_FROM_PERSONAL_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xE1E0E0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void NETWORK_EARN_FROM_DAILY_OBJECTIVES(int amount, const char* type, int characterSlot) { invoke<Void>(0xE1E140, amount, type, characterSlot); }
static void NETWORK_EARN_FROM_AMBIENT_JOB(int p0, const char* p1, Any* p2) { invoke<Void>(0xE1E160, p0, p1, p2); }
static void NETWORK_EARN_FROM_JOB_BONUS(Any p0, Any* p1, Any* p2) { invoke<Void>(0xE1DCF0, p0, p1, p2); }
static void NETWORK_EARN_FROM_CRIMINAL_MASTERMIND(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E1A0, p0, p1, p2); }
static void NETWORK_EARN_HEIST_AWARD(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E1C0, p0, p1, p2); }
static void NETWORK_EARN_FIRST_TIME_BONUS(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E1E0, p0, p1, p2); }
static void NETWORK_EARN_GOON(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E200, p0, p1, p2); }
static void NETWORK_EARN_BOSS(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E2D0, p0, p1, p2); }
static void NETWORK_EARN_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE1E3A0, p0, p1, p2, p3); }
static void NETWORK_EARN_FROM_WAREHOUSE(int amount, int id) { invoke<Void>(0xE1E470, amount, id); }
static void NETWORK_EARN_FROM_CONTRABAND(int amount, Any p1) { invoke<Void>(0xE1E530, amount, p1); }
static void NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Any p0) { invoke<Void>(0xE1E5F0, p0); }
static void NETWORK_EARN_FROM_SMUGGLER_WORK(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE1E6C0, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_FROM_HANGAR_TRADE(Any p0, Any p1) { invoke<Void>(0xE1E6E0, p0, p1); }
static void NETWORK_EARN_PURCHASE_CLUB_HOUSE(Any p0, Any p1) { invoke<Void>(0xE1E7B0, p0, p1); }
static void NETWORK_EARN_FROM_BUSINESS_PRODUCT(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xE1E7C0, amount, p1, p2, p3); }
static void NETWORK_EARN_FROM_VEHICLE_EXPORT(int amount, Any p1, Any p2) { invoke<Void>(0xE1E090, amount, p1, p2); }
static void NETWORK_EARN_SMUGGLER_AGENCY(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xE1E990, amount, p1, p2, p3); }
static void NETWORK_EARN_BOUNTY_HUNTER_REWARD(Any p0) { invoke<Void>(0xE1EA60, p0); }
static void NETWORK_EARN_FROM_BUSINESS_BATTLE(Any p0) { invoke<Void>(0xE1EB20, p0); }
static void NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Any p0, int p1) { invoke<Void>(0xE1EBE0, p0, p1); }
static void NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(Any p0) { invoke<Void>(0xE1ECB0, p0); }
static void NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Any p0, Any p1, Any p2) { invoke<Void>(0xE1ED70, p0, p1, p2); }
static void NETWORK_EARN_FROM_FMBB_BOSS_WORK(Any p0) { invoke<Void>(0xE1EE50, p0); }
static void NETWORK_EARN_FMBB_WAGE_BONUS(Any p0) { invoke<Void>(0xE1EF10, p0); }
static BOOL NETWORK_CAN_SPEND_MONEY(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0xE1EFD0, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_CAN_SPEND_MONEY2(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5, Any p6) { return invoke<BOOL>(0xE1EFD0, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_BUY_ITEM(int amount, Hash item, Any p2, Any p3, BOOL p4, const char* item_name, Any p6, Any p7, Any p8, BOOL p9) { invoke<Void>(0xE1F0C0, amount, item, p2, p3, p4, item_name, p6, p7, p8, p9); }
static void NETWORK_SPENT_TAXI(int amount, BOOL p1, BOOL p2, Any p3, Any p4) { invoke<Void>(0xE1F120, amount, p1, p2, p3, p4); }
static void NETWORK_PAY_EMPLOYEE_WAGE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE1F230, p0, p1, p2); }
static void NETWORK_PAY_MATCH_ENTRY_FEE(int amount, const char* matchId, BOOL p2, BOOL p3) { invoke<Void>(0xE1F320, amount, matchId, p2, p3); }
static void NETWORK_SPENT_BETTING(int amount, int p1, const char* matchId, BOOL p3, BOOL p4) { invoke<Void>(0xE1F350, amount, p1, matchId, p3, p4); }
static void NETWORK_SPENT_WAGER(Any p0, Any p1, int amount) { invoke<Void>(0xE1F380, p0, p1, amount); }
static void NETWORK_SPENT_IN_STRIPCLUB(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0xE1F3A0, p0, p1, p2, p3); }
static void NETWORK_BUY_HEALTHCARE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xE1F4A0, cost, p1, p2); }
static void NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1F590, cost, p1, p2, p3); }
static void NETWORK_BUY_BACKUP_GANG(int p0, int p1, BOOL p2, BOOL p3) { invoke<Void>(0xE1F690, p0, p1, p2, p3); }
static void NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1F7A0, cost, p1, p2, p3); }
static void NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1F8A0, p0, p1, p2, p3); }
static void NETWORK_BUY_BOUNTY(int amount, Player victim, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xE1F9A0, amount, victim, p2, p3, p4); }
static void NETWORK_BUY_PROPERTY(int cost, Hash propertyName, BOOL p2, BOOL p3) { invoke<Void>(0xE1F9D0, cost, propertyName, p2, p3); }
static void NETWORK_BUY_SMOKES(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xE1FA00, p0, p1, p2); }
static void NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FAF0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FBF0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BULL_SHARK(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FCF0, p0, p1, p2, p3); }
static void NETWORK_SPENT_CASH_DROP(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE1FDF0, amount, p1, p2); }
static void NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FEE0, p0, p1, p2, p3); }
static void NETWORK_SPENT_ROBBED_BY_MUGGER(int amount, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE1FFE0, amount, p1, p2, p3); }
static void NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE200E0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xE201E0, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE20210, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE20310, p0, p1, p2, p3); }
static void NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xE20410, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_CINEMA(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE20520, p0, p1, p2, p3); }
static void NETWORK_SPENT_TELESCOPE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20620, p0, p1, p2); }
static void NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20710, p0, p1, p2); }
static void NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE20800, p0, p1, p2, p3); }
static void NETWORK_SPENT_BANK_INTEREST(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20900, p0, p1, p2); }
static void NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE209F0, p0, p1, p2); }
static void NETWORK_SPENT_ARREST_BAIL(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20AE0, p0, p1, p2); }
static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(int amount, Hash vehicleModel, Any* gamerHandle, BOOL notBankrupt, BOOL hasTheMoney) { invoke<Void>(0xE20BD0, amount, vehicleModel, gamerHandle, notBankrupt, hasTheMoney); }
static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xE20C00, p0, p1, p2, p3); }
static void NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20C30, p0, p1, p2); }
static void NETWORK_SPENT_FROM_ROCKSTAR(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xE20D20, p0, p1, p2); }
static int NETWORK_SPEND_EARNED_FROM_BANK_AND_WALLETS(int amount) { return invoke<int>(0xE20E10, amount); }
static const char* PROCESS_CASH_GIFT(int* p0, int* p1, const char* p2) { return invoke<const char*>(0xE20E20, p0, p1, p2); }
static void NETWORK_SPENT_MOVE_SUBMARINE(Any p0, Any p1, Any p2) { invoke<Void>(0xE20E50, p0, p1, p2); }
static void NETWORK_SPENT_PLAYER_HEALTHCARE(int p0, int p1, BOOL p2, BOOL p3) { invoke<Void>(0xE20F40, p0, p1, p2, p3); }
static void NETWORK_SPENT_NO_COPS(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE20F70, p0, p1, p2, p3); }
static void NETWORK_SPENT_CARGO_SOURCING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xE21070, p0, p1, p2, p3, p4, p5); }
static void NETWORK_SPENT_REQUEST_JOB(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE211A0, p0, p1, p2, p3); }
static void NETWORK_SPENT_REQUEST_HEIST(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE212A0, p0, p1, p2, p3); }
static void NETWORK_BUY_FAIRGROUND_RIDE(int amount, Any p1, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xE213A0, amount, p1, p2, p3, p4); }
static BOOL NETWORK_ECONOMY_HAS_FIXED_CRAZY_NUMBERS() { return invoke<BOOL>(0xE214B0); }
static void NETWORK_SPENT_JOB_SKIP(int amount, const char* matchId, BOOL p2, BOOL p3) { invoke<Void>(0xE214D0, amount, matchId, p2, p3); }
static BOOL NETWORK_SPENT_BOSS_GOON(int amount, BOOL p1, BOOL p2) { return invoke<BOOL>(0xE21500, amount, p1, p2); }
static void NETWORK_SPEND_GOON(int p0, int p1, int amount) { invoke<Void>(0xE21540, p0, p1, amount); }
static void NETWORK_SPEND_BOSS(Any p0, Any p1, Any p2) { invoke<Void>(0xE21560, p0, p1, p2); }
static void NETWORK_SPENT_MOVE_YACHT(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE21580, amount, p1, p2); }
static void NETWORK_SPENT_RENAME_ORGANIZATION(Any p0, Any p1, Any p2) { invoke<Void>(0xE21670, p0, p1, p2); }
static void NETWORK_BUY_CONTRABAND_MISSION(int p0, int p1, Hash p2, BOOL p3, BOOL p4) { invoke<Void>(0xE216A0, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_PA_SERVICE_HELI(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE216D0, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21700, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_SNACK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21730, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_DANCER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21760, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_IMPOUND(Any p0, Any p1, Any p2) { invoke<Void>(0xE21790, p0, p1, p2); }
static void NETWORK_SPENT_PA_HELI_PICKUP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE217B0, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_OFFICE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE217E0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_OFFICE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21810, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21850, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21890, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_IMPEXP_WAREHOUSE_PROPERTY(int amount, Any* data, BOOL p2, BOOL p3) { invoke<Void>(0xE218D0, amount, data, p2, p3); }
static void NETWORK_SPENT_UPGRADE_IMPEXP_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21910, p0, p1, p2, p3); }
static void NETWORK_SPENT_TRADE_IMPEXP_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21950, p0, p1, p2, p3); }
static void NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21980, p0, p1, p2, p3); }
static void NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21A80, p0, p1, p2, p3); }
static void NETWORK_SPENT_JUKEBOX(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21B80, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_CLUB_HOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21C80, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_CLUB_HOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21CB0, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21CE0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21D10, p0, p1, p2, p3); }
static void NETWORK_SPENT_TRADE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21D40, p0, p1, p2, p3); }
static void NETWORK_SPENT_MC_ABILITY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE21D70, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE21E80, p0, p1, p2, p3); }
static void NETWORK_SPENT_CHANGE_APPEARANCE(Any p0, Any p1, Any p2) { invoke<Void>(0xE21EA0, p0, p1, p2); }
static void NETWORK_SPENT_VEHICLE_EXPORT_MODS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xE21F90, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void NETWORK_SPENT_PURCHASE_OFFICE_GARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22110, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_OFFICE_GARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22140, p0, p1, p2, p3); }
static void NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Any p0, Any p1, Any p2) { invoke<Void>(0xE22170, p0, p1, p2); }
static void NETWORK_SPENT_PURCHASE_HANGAR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22270, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_HANGAR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE222A0, p0, p1, p2, p3); }
static void NETWORK_SPENT_HANGAR_UTILITY_CHARGES(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE222D0, amount, p1, p2); }
static void NETWORK_SPENT_HANGAR_STAFF_CHARGES(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE223D0, amount, p1, p2); }
static void NETWORK_SPENT_BUY_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE224D0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22500, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_BUNKER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22530, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPRADE_BUNKER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22560, p0, p1, p2, p3); }
static void NETWORK_EARN_FROM_SELL_BUNKER(int amount, Hash bunkerHash) { invoke<Void>(0xE22590, amount, bunkerHash); }
static void NETWORK_SPENT_BALLISTIC_EQUIPMENT(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE22650, amount, p1, p2); }
static void NETWORK_EARN_RDR_BONUS(int amount, Any p1) { invoke<Void>(0xE22740, amount, p1); }
static void NETWORK_EARN_WAGE_PAYMENT(int amount, Any p1) { invoke<Void>(0xE22800, amount, p1); }
static void NETWORK_EARN_WAGE_PAYMENT_BONUS(int amount) { invoke<Void>(0xE22800, amount); }
static void NETWORK_SPENT_BUY_BASE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22980, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_BASE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE229B0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_TILTROTOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE229E0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_TILTROTOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22A10, p0, p1, p2, p3); }
static void NETWORK_SPENT_EMPLOY_ASSASSINS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22A40, p0, p1, p2, p3); }
static void NETWORK_SPEND_GANGOPS_CANNON(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22B40, p0, p1, p2, p3); }
static void NETWORK_SPEND_GANGOPS_SKIP_MISSION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE22C40, p0, p1, p2, p3); }
static void NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDF6720, p0, p1, p2, p3); }
static void NETWORK_EARN_SELL_BASE(int amount, Hash baseNameHash) { invoke<Void>(0xE22E40, amount, baseNameHash); }
static void NETWORK_EARN_TARGET_REFUND(int amount, int p1) { invoke<Void>(0xE22F00, amount, p1); }
static void NETWORK_EARN_GANGOPS_WAGES(int amount, int p1) { invoke<Void>(0xE22FC0, amount, p1); }
static void NETWORK_EARN_GANGOPS_WAGES_BONUS(int amount, int p1) { invoke<Void>(0xE22FC0, amount, p1); }
static void NETWORK_EARN_DAR_CHALLENGE(int amount, Any p1) { invoke<Void>(0xE23140, amount, p1); }
static void NETWORK_EARN_DOOMSDAY_FINALE_BONUS(int amount, Hash vehicleHash) { invoke<Void>(0xE23200, amount, vehicleHash); }
static void NETWORK_EARN_GANGOPS_AWARD(int amount, const char* p1, Any p2) { invoke<Void>(0xE232C0, amount, p1, p2); }
static void NETWORK_EARN_GANGOPS_ELITE(int amount, const char* p1, int actIndex) { invoke<Void>(0xE23300, amount, p1, actIndex); }
static void NETWORK_SERVICE_EARN_GANGOPS_RIVAL_DELIVERY(int earnedMoney) { invoke<Void>(0xE23350, earnedMoney); }
static void NETWORK_SPEND_GANGOPS_START_STRAND(int type, int amount, BOOL p2, BOOL p3) { invoke<Void>(0xE23360, type, amount, p2, p3); }
static void NETWORK_SPEND_GANGOPS_TRIP_SKIP(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE23460, amount, p1, p2); }
static void NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(int amount) { invoke<Void>(0xE23550, amount); }
static void NETWORK_EARN_GANGOPS_SETUP(int amount, const char* p1) { invoke<Void>(0xE23560, amount, p1); }
static void NETWORK_EARN_GANGOPS_FINALE(int amount, const char* p1) { invoke<Void>(0xE23570, amount, p1); }
static void NETWORK_SPEND_GANGOPS_REPAIR_COST(Any p0, Any p1, Any p2) { invoke<Void>(0xE23580, p0, p1, p2); }
static void NETWORK_EARN_NIGHTCLUB(Any p0) { invoke<Void>(0xE23670, p0); }
static void NETWORK_EARN_NIGHTCLUB_DANCING(Any p0) { invoke<Void>(0xE23670, p0); }
static void NETWORK_EARN_BB_EVENT_BONUS(int amount) { invoke<Void>(0xE237F0, amount); }
static void NETWORK_SPENT_PURCHASE_HACKER_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE238B0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_HACKER_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE238E0, p0, p1, p2, p3); }
static void NETWORK_EARN_HACKER_TRUCK(Any p0, int amount, Any p2, Any p3) { invoke<Void>(0xE23910, p0, amount, p2, p3); }
static void NETWORK_SPENT_PURCHASE_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE23930, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE23960, p0, p1, p2, p3); }
static void NETWORK_EARN_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xE23670, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE239C0, p0, p1, p2, p3); }
static void NETWORK_SPENT_RDR_HATCHET_BONUS(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE23AA0, amount, p1, p2); }
static void NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(Player player, int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE23AC0, player, amount, p1, p2, p3); }
static void NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE23AF0, amount, p1, p2, p3); }
static void NETWORK_SPEND_BOUNTY_HUNTER_MISSION(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE23BF0, amount, p1, p2); }
static void NETWORK_SPENT_REHIRE_DJ(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE23CE0, amount, p1, p2, p3); }
static void NETWORK_SPENT_ARENA_JOIN_SPECTATOR(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xE23DE0, amount, p1, p2, p3); }
static void NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(int amount, Any p1) { invoke<Void>(0xE23EE0, amount, p1); }
static void NETWORK_EARN_ARENA_CAREER_PROGRESSION(int amount, Any p1) { invoke<Void>(0xE23FA0, amount, p1); }
static void NETWORK_SPEND_MAKE_IT_RAIN(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE24060, amount, p1, p2); }
static void NETWORK_SPEND_BUY_ARENA(int amount, BOOL p1, BOOL p2, const char* p3) { invoke<Void>(0xE24160, amount, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_ARENA(int amount, BOOL p1, BOOL p2, const char* p3) { invoke<Void>(0xE24190, amount, p1, p2, p3); }
static void NETWORK_SPEND_ARENA_SPECTATOR_BOX(int amount, int type, BOOL p2, BOOL p3) { invoke<Void>(0xE241C0, amount, type, p2, p3); }
static void NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(int amount, Any p1, BOOL p2) { invoke<Void>(0xE242C0, amount, p1, p2); }
static void NETWORK_EARN_SPIN_THE_WHEEL_CASH(int amount) { invoke<Void>(0xE243C0, amount); }
static void NETWORK_SPEND_ARENA_PREMIUM(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE24480, amount, p1, p2); }
static void NETWORK_EARN_ARENA_WAR(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xE24570, amount, p1, p2, p3); }
static void NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(int amount) { invoke<Void>(0xE24570, amount); }
static void NETWORK_EARN_ARENA_WAR_EVENT_CARGO(int amount) { invoke<Void>(0xE24570, amount); }
static void NETWORK_EARN_RC_TIME_TRIAL(int amount) { invoke<Void>(0xE245B0, amount); }
static void NETWORK_EARN_DAILY_OBJECTIVE_EVENT(int amount) { invoke<Void>(0xE24670, amount); }
static void NETWORK_SPEND_CASINO_MEMBERSHIP(int amount, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xDF6720, amount, p1, p2, p3); }
static void NETWORK_SPEND_BUY_CASINO(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xDF6720, amount, p1, p2, data); }
static void NETWORK_SPEND_UPGRADE_CASINO(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xDF6720, amount, p1, p2, data); }
static void NETWORK_SPEND_CASINO_GENERIC(int amount, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xDF6720, amount, p1, p2, p3, p4); }
static void NETWORK_EARN_CASINO_TIME_TRIAL_WIN(int amount) { invoke<Void>(0xDF6720, amount); }
static void NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(int amount) { invoke<Void>(0xE248D0, amount); }
static void NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(int amount) { invoke<Void>(0xDF6720, amount); }
static void NETWORK_EARN_SELL_PRIZE_VEHICLE(int amount, Any p1, Any p2) { invoke<Void>(0xE248F0, amount, p1, p2); }
static void NETWORK_EARN_CASINO_MISSION_REWARD(int amount) { invoke<Void>(0xDF6720, amount); }
static void NETWORK_EARN_CASINO_STORY_MISSION_REWARD(int amount) { invoke<Void>(0xDF6720, amount); }
static void NETWORK_EARN_CASINO_MISSION_PARTICIPATION(int amount) { invoke<Void>(0xDF6720, amount); }
static void NETWORK_EARN_CASINO_AWARD(int amount, Hash hash) { invoke<Void>(0xDF6720, amount, hash); }
static void NETWORK_SPEND_BUY_ARCADE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24A00, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_ARCADE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24A30, p0, p1, p2, p3); }
static void NETWORK_SPEND_CASINO_HEIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0xDF6720, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void NETWORK_SPEND_ARCADE_MGMT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24AD0, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_PLAY_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24B00, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24B30, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_CASINO_HEIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xDF6720, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_EARN_UPGRADE_ARCADE(Any p0, Any p1, Any p2) { invoke<Void>(0xE24B90, p0, p1, p2); }
static void NETWORK_EARN_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24BB0, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_COLLECTABLES(Any p0, Any p1, Any p2) { invoke<Void>(0xE24BD0, p0, p1, p2); }
static void NETWORK_EARN_CHALLENGE(int amount, Any p1, Any p2) { invoke<Void>(0xE24BF0, amount, p1, p2); }
static void NETWORK_EARN_CASINO_HEIST_AWARDS(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xDF6720, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_COLLECTABLE_ITEM(int amount, Any p1) { invoke<Void>(0xE24C30, amount, p1); }
static void NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(int amount, Any p1) { invoke<Void>(0xE24C40, amount, p1); }
static void NETWORK_EARN_YATCH_MISSION(int amount, Any p1) { invoke<Void>(0xE24C50, amount, p1); }
static void NETWORK_EARN_DISPATCH_CALL(int amount, Any p1) { invoke<Void>(0xE24D10, amount, p1); }
static void NETWORK_SPEND_BEACH_PARTY(Any p0) { invoke<Void>(0xE24DD0, p0); }
static void NETWORK_SPEND_SUBMARINE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xE24DE0, p0, p1, p2, p3, p4, p5); }
static void NETWORK_SPEND_CASINO_CLUB(int amount1, Any p1, BOOL p2, Any p3, int p4, int p5, int p6, int amount2, Any p8) { invoke<Void>(0xDF6720, amount1, p1, p2, p3, p4, p5, p6, amount2, p8); }
static void NETWORK_SPEND_BUY_SUB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24E60, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_SUB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24E90, p0, p1, p2, p3); }
static void NETWORK_SPEND_ISLAND_HEIST(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24EC0, p0, p1, p2, p3); }
static void NETWORK_EARN_ISLAND_HEIST(int amount1, Any p1, Any p2, Any p3, int amount2, int p5) { invoke<Void>(0xE24EF0, amount1, p1, p2, p3, amount2, p5); }
static void NETWORK_EARN_BEACH_PARTY_LOST_FOUND(Any p0, Any p1, Any p2) { invoke<Void>(0xE24F10, p0, p1, p2); }
static void NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Any p0, Any p1) { invoke<Void>(0xE24F30, p0, p1); }
static void NETWORK_SPEND_CAR_CLUB_MEMBERSHIP(int amount1, Any p1, Any p2, int amount2, Any p4) { invoke<Void>(0xE24F40, amount1, p1, p2, amount2, p4); }
static void NETWORK_SPEND_CAR_CLUB_BAR(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE24F70, p0, p1, p2, p3); }
static void NETWORK_SPEND_AUTOSHOP_MODIFY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE24FA0, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_CAR_CLUB_TAKEOVER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE24FD0, p0, p1, p2, p3); }
static void NETWORK_SPEND_BUY_AUTOSHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25000, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_AUTOSHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25030, p0, p1, p2, p3); }
static void NETWORK_EARN_AUTOSHOP_BUSINESS(Any p0, Any p1, Any p2) { invoke<Void>(0xE25060, p0, p1, p2); }
static void NETWORK_EARN_AUTOSHOP_INCOME(Any p0, int p1) { invoke<Void>(0xE25080, p0, p1); }
static void NETWORK_EARN_CARCLUB_MEMBERSHIP(Any p0) { invoke<Void>(0xE25090, p0); }
static void NETWORK_EARN_DAILY_VEHICLE(Any p0, Any p1) { invoke<Void>(0xE250A0, p0, p1); }
static void NETWORK_EARN_DAILY_VEHICLE_BONUS(Any p0) { invoke<Void>(0xE250A0, p0); }
static void NETWORK_EARN_TUNER_AWARD(Any p0, Any p1, Any p2) { invoke<Void>(0xE250C0, p0, p1, p2); }
static void NETWORK_EARN_TUNER_ROBBERY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE250E0, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_UPGRADE_AUTOSHOP(Any p0, Any p1) { invoke<Void>(0xE25100, p0, p1); }
static void NETWORK_SPEND_INTERACTION_MENU_ABILITY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25110, p0, p1, p2, p3); }
static void NETWORK_SPEND_SET_COMMON_FIELDS(Any p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xE25140, p0, p1, p2, p3); }
static void NETWORK_SPEND_SET_DISCOUNT(BOOL p0) { invoke<Void>(0xE25190, p0); }
static void NETWORK_SPEND_BUY_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE251C0, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE251F0, p0, p1, p2, p3); }
static void NETWORK_SPEND_AGENCY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE25220, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_HIDDEN(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25250, p0, p1, p2, p3); }
static void NETWORK_SPEND_SOURCE_BIKE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25280, p0, p1, p2, p3); }
static void NETWORK_SPEND_COMP_SUV(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE252B0, p0, p1, p2, p3); }
static void NETWORK_SPEND_SUV_FST_TRVL(int p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE252E0, p0, p1, p2, p3); }
static void NETWORK_SPEND_SUPPLY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25310, p0, p1, p2, p3); }
static void NETWORK_SPEND_BIKE_SHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25340, p0, p1, p2, p3); }
static void NETWORK_SPEND_VEHICLE_REQUESTED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE25370, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_GUNRUNNING(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25490, p0, p1, p2, p3); }
static void NETWORK_EARN_AGENCY_SAFE(Any p0) { invoke<Void>(0xE1E3A0, p0); }
static void NETWORK_EARN_AWARD_CONTRACT(Any p0, Any p1) { invoke<Void>(0xE254D0, p0, p1); }
static void NETWORK_EARN_AGENCY_CONTRACT(Any p0, Any p1) { invoke<Void>(0xE1E3A0, p0, p1); }
static void NETWORK_EARN_AWARD_PHONE(Any p0, Any p1) { invoke<Void>(0xE254F0, p0, p1); }
static void NETWORK_EARN_AGENCY_PHONE(Any p0, Any p1, Any p2) { invoke<Void>(0xE1E3A0, p0, p1, p2); }
static void NETWORK_EARN_AWARD_FIXER_MISSION(Any p0, Any p1) { invoke<Void>(0xE25520, p0, p1); }
static void NETWORK_EARN_FIXER_PREP(Any p0, Any p1) { invoke<Void>(0xE25530, p0, p1); }
static void NETWORK_EARN_FIXER_FINALE(Any p0, Any p1) { invoke<Void>(0xE25540, p0, p1); }
static void NETWORK_EARN_FIXER_AGENCY_SHORT_TRIP(Any p0, Any p1) { invoke<Void>(0xE25550, p0, p1); }
static void NETWORK_EARN_AWARD_SHORT_TRIP(Any p0, Any p1) { invoke<Void>(0xE25560, p0, p1); }
static void NETWORK_EARN_FIXER_RIVAL_DELIVERY(Any p0, Any p1) { invoke<Void>(0xE25570, p0, p1); }
static void NETWORK_EARN_UPGRADE_AGENCY(Any p0, Any p1) { invoke<Void>(0xE25580, p0, p1); }
static void NETWORK_SPEND_APARTMENT_UTILITIES(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xE25590, amount, p1, p2, data); }
static void NETWORK_SPEND_BUSINESS_PROPERTY_FEES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE255C0, p0, p1, p2, p3); }
static void NETWORK_EARN_SIGHTSEEING_REWARD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE255F0, p0, p1, p2, p3); }
static void NETWORK_EARN_BIKER_SHOP(Any p0, Any p1) { invoke<Void>(0xE25610, p0, p1); }
static void NETWORK_EARN_BIKER(Any p0) { invoke<Void>(0xE25620, p0); }
static void NETWORK_YOHAN_SOURCE_GOODS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25630, p0, p1, p2, p3); }
static void _NETWORK_SPEND_BUY_MFGARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25650, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_MFGARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25680, p0, p1, p2, p3); }
static void _NETWORK_SPEND_BUY_SUPPLIES(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xE256B0, p0, p1, p2, p3); }
static void _NETWORK_SPEND_BUY_ACID_LAB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE257C0, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_EQUIPMENT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE258D0, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_ARMOR(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xE25900, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_SCOOP(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xE25930, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_MINES(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xE25960, p0, p1, p2, p3); }
static void _NETWORK_SPEND_RENAME_ACID_LAB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE25990, p0, p1, p2, p3); }
static void _NETWORK_SPEND_RENAME_ACID_PRODUCT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE259C0, p0, p1, p2, p3); }
static void _NETWORK_EARN_AWARD_JUGGALO_MISSION(Any p0, Any p1) { invoke<Void>(0xE259F0, p0, p1); }
static void _NETWORK_EARN_AWARD_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xE25AF0, p0, p1); }
static void _NETWORK_EARN_AWARD_DAILY_STASH(Any p0, Any p1) { invoke<Void>(0xE25BF0, p0, p1); }
static void _NETWORK_EARN_AWARD_DEAD_DROP(Any p0, Any p1) { invoke<Void>(0xE25CF0, p0, p1); }
static void _NETWORK_EARN_AWARD_RANDOM_EVENT(Any p0, Any p1) { invoke<Void>(0xE25DF0, p0, p1); }
static void _NETWORK_EARN_AWARD_TAXI(Any p0, Any p1) { invoke<Void>(0xE25EF0, p0, p1); }
static void _NETWORK_EARN_STREET_DEALER(Any p0, Any p1) { invoke<Void>(0xE25FF0, p0, p1); }
static void _NETWORK_EARN_SELL_ACID(Any p0, Any p1) { invoke<Void>(0xE26000, p0, p1); }
static void _NETWORK_EARN_SETUP_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xE260C0, p0, p1); }
static void _NETWORK_EARN_SOURCE_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xE26180, p0, p1); }
static void _NETWORK_EARN_SELL_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xE26240, p0, p1); }
static void _NETWORK_EARN_JUGGALO_STORY_MISSION(Any p0, Any p1) { invoke<Void>(0xE26300, p0, p1); }
static void _NETWORK_EARN_JUGGALO_STORY_MISSION_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xE26300, p0, p1); }
static void _NETWORK_EARN_FOOLIGAN_JOB(Any p0, Any p1) { invoke<Void>(0xE26480, p0, p1); }
static void _NETWORK_EARN_FOOLIGAN_JOB_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xE26480, p0, p1); }
static void _NETWORK_EARN_TAXI_JOB(Any p0, Any p1) { invoke<Void>(0xE26600, p0, p1); }
static void _NETWORK_EARN_DAILY_STASH_HOUSE_COMPLETED(Any p0, Any p1) { invoke<Void>(0xE266F0, p0, p1); }
static void _NETWORK_EARN_DAILY_STASH_HOUSE_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xE267B0, p0, p1); }
static int NETWORK_GET_VC_BANK_BALANCE() { return invoke<int>(0xE26FC0); }
static int NETWORK_GET_VC_WALLET_BALANCE(int characterSlot) { return invoke<int>(0xE26FF0, characterSlot); }
static int NETWORK_GET_VC_BALANCE() { return invoke<int>(0xE27020); }
static int NETWORK_GET_EVC_BALANCE() { return invoke<int>(0xE27050); }
static int NETWORK_GET_PVC_BALANCE() { return invoke<int>(0xE27080); }
static const char* NETWORK_GET_STRING_WALLET_BALANCE(int characterSlot) { return invoke<const char*>(0xE270B0, characterSlot); }
static const char* NETWORK_GET_STRING_BANK_BALANCE() { return invoke<const char*>(0xE270F0); }
static const char* NETWORK_GET_STRING_BANK_WALLET_BALANCE() { return invoke<const char*>(0xE27130); }
static BOOL NETWORK_GET_CAN_SPEND_FROM_WALLET(int amount, int characterSlot) { return invoke<BOOL>(0xE27180, amount, characterSlot); }
static BOOL NETWORK_GET_CAN_SPEND_FROM_BANK(int amount) { return invoke<BOOL>(0xE271B0, amount); }
static BOOL NETWORK_GET_CAN_SPEND_FROM_BANK_AND_WALLET(int amount, int characterSlot) { return invoke<BOOL>(0xE271B0, amount, characterSlot); }
static int NETWORK_GET_PVC_TRANSFER_BALANCE() { return invoke<int>(0xE27220); }
static BOOL NETWORK_GET_CAN_TRANSFER_CASH(int amount) { return invoke<BOOL>(0xE27240, amount); }
static BOOL NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE272D0, p0, p1, p2, p3); }
static int NETWORK_GET_REMAINING_TRANSFER_BALANCE() { return invoke<int>(0xE27320); }
static int WITHDRAW_VC(int amount) { return invoke<int>(0xE27340, amount); }
static BOOL DEPOSIT_VC(int amount) { return invoke<BOOL>(0xE27370, amount); }
static BOOL HAS_VC_WITHDRAWAL_COMPLETED(Any p0) { return invoke<BOOL>(0xE273A0, p0); }
static BOOL WAS_VC_WITHDRAWAL_SUCCESSFUL(Any p0) { return invoke<BOOL>(0xE273B0, p0); }
static BOOL NET_GAMESERVER_USE_SERVER_TRANSACTIONS() { return invoke<BOOL>(0xE28320); }
static BOOL NET_GAMESERVER_CATALOG_ITEM_IS_VALID(const char* name) { return invoke<BOOL>(0xE28330, name); }
static BOOL NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(Hash hash) { return invoke<BOOL>(0xE28340, hash); }
static int NET_GAMESERVER_GET_PRICE(Hash itemHash, Hash categoryHash, BOOL p2) { return invoke<int>(0xE28350, itemHash, categoryHash, p2); }
static BOOL NET_GAMESERVER_CATALOG_IS_VALID() { return invoke<BOOL>(0xE28360); }
static BOOL NET_GAMESERVER_IS_CATALOG_CURRENT() { return invoke<BOOL>(0xE28370); }
static Hash NET_GAMESERVER_GET_CATALOG_CLOUD_CRC() { return invoke<Hash>(0xE28380); }
static BOOL NET_GAMESERVER_REFRESH_SERVER_CATALOG() { return invoke<BOOL>(0xE28390); }
static BOOL NET_GAMESERVER_RETRIEVE_CATALOG_REFRESH_STATUS(int* state) { return invoke<BOOL>(0xE283A0, state); }
static BOOL NET_GAMESERVER_INIT_SESSION() { return invoke<BOOL>(0xE283B0); }
static BOOL NET_GAMESERVER_RETRIEVE_INIT_SESSION_STATUS(int* p0) { return invoke<BOOL>(0xE283C0, p0); }
static BOOL NET_GAMESERVER_START_SESSION(int charSlot) { return invoke<BOOL>(0xE283D0, charSlot); }
static BOOL NET_GAMESERVER_START_SESSION_PENDING() { return invoke<BOOL>(0xE283D0); }
static BOOL NET_GAMESERVER_RETRIEVE_START_SESSION_STATUS(int* p0) { return invoke<BOOL>(0xE283F0, p0); }
static BOOL NET_GAMESERVER_RETRIEVE_SESSION_ERROR_CODE(int* p0) { return invoke<BOOL>(0xE28400, p0); }
static BOOL NET_GAMESERVER_IS_SESSION_VALID(int charSlot) { return invoke<BOOL>(0xE28410, charSlot); }
static BOOL NET_GAMESERVER_CLEAR_SESSION(int p0) { return invoke<BOOL>(0xE28420, p0); }
static BOOL NET_GAMESERVER_SESSION_APPLY_RECEIVED_DATA(int charSlot) { return invoke<BOOL>(0xE28430, charSlot); }
static BOOL NET_GAMESERVER_IS_SESSION_REFRESH_PENDING() { return invoke<BOOL>(0xE28440); }
static BOOL NET_GAMESERVER_START_SESSION_RESTART(BOOL inventory, BOOL playerbalance) { return invoke<BOOL>(0xE283D0, inventory, playerbalance); }
static BOOL NET_GAMESERVER_TRANSACTION_IN_PROGRESS() { return invoke<BOOL>(0xE28460); }
static BOOL NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(int* p0, BOOL* p1) { return invoke<BOOL>(0xE28470, p0, p1); }
static BOOL NET_GAMESERVER_BASKET_START(int* transactionId, Hash categoryHash, Hash actionHash, int flags) { return invoke<BOOL>(0xE28480, transactionId, categoryHash, actionHash, flags); }
static BOOL NET_GAMESERVER_BASKET_END() { return invoke<BOOL>(0xE28490); }
static BOOL NET_GAMESERVER_BASKET_IS_ACTIVE() { return invoke<BOOL>(0xE284A0); }
static BOOL NET_GAMESERVER_BASKET_ADD_ITEM(Any* itemData, int quantity) { return invoke<BOOL>(0xE284B0, itemData, quantity); }
static BOOL NET_GAMESERVER_BASKET_IS_FULL() { return invoke<BOOL>(0xE284C0); }
static BOOL NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Any p0, Any* p1) { return invoke<BOOL>(0xE284D0, p0, p1); }
static BOOL NET_GAMESERVER_CHECKOUT_START(int transactionId) { return invoke<BOOL>(0xE284E0, transactionId); }
static BOOL NET_GAMESERVER_BEGIN_SERVICE(int* transactionId, Hash categoryHash, Hash itemHash, Hash actionTypeHash, int value, int flags) { return invoke<BOOL>(0xE28500, transactionId, categoryHash, itemHash, actionTypeHash, value, flags); }
static BOOL NET_GAMESERVER_END_SERVICE(int transactionId) { return invoke<BOOL>(0xE28510, transactionId); }
static BOOL NET_GAMESERVER_DELETE_CHARACTER(int slot, BOOL transfer, Hash reason) { return invoke<BOOL>(0xE28520, slot, transfer, reason); }
static int NET_GAMESERVER_DELETE_CHARACTER_GET_STATUS() { return invoke<int>(0xE28520); }
static BOOL NET_GAMESERVER_DELETE_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0xE28540); }
static BOOL NET_GAMESERVER_TRANSFER_BANK_TO_WALLET(int charSlot, int amount) { return invoke<BOOL>(0xE28550, charSlot, amount); }
static BOOL NET_GAMESERVER_TRANSFER_WALLET_TO_BANK(int charSlot, int amount) { return invoke<BOOL>(0xE28560, charSlot, amount); }
static int NET_GAMESERVER_TRANSFER_BANK_TO_WALLET_GET_STATUS() { return invoke<int>(0xE28550); }
static int NET_GAMESERVER_TRANSFER_WALLET_TO_BANK_GET_STATUS() { return invoke<int>(0xE28560); }
static BOOL NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0xE28590); }
static BOOL NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(int p0) { return invoke<BOOL>(0xE285A0, p0); }
static const char* GET_ONLINE_VERSION() { return invoke<const char*>(0xE49D40); }
static BOOL NETWORK_IS_SIGNED_IN() { return invoke<BOOL>(0xE49D50); }
static BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0xE49D70); }
static BOOL NETWORK_IS_NP_AVAILABLE() { return invoke<BOOL>(0xE49DA0); }
static BOOL NETWORK_IS_NP_PENDING() { return invoke<BOOL>(0xE49DE0); }
static int NETWORK_GET_NP_UNAVAILABLE_REASON() { return invoke<int>(0xE49E20); }
static BOOL NETWORK_IS_CONNETED_TO_NP_PRESENCE() { return invoke<BOOL>(0xE49E60); }
static BOOL NETWORK_IS_LOGGED_IN_TO_PSN() { return invoke<BOOL>(0xE49EA0); }
static BOOL NETWORK_HAS_VALID_ROS_CREDENTIALS() { return invoke<BOOL>(0xE49EE0); }
static BOOL NETWORK_IS_REFRESHING_ROS_CREDENTIALS() { return invoke<BOOL>(0xE49F10); }
static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0xE49F40); }
static BOOL NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xE49F70); }
static BOOL NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT() { return invoke<BOOL>(0xE49F90); }
static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0xE49FD0); }
static Player NETWORK_GET_HOST_PLAYER_INDEX() { return invoke<Player>(0xE49FF0); }
static BOOL NETWORK_WAS_GAME_SUSPENDED() { return invoke<BOOL>(0xE4A020); }
static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0xE4A030); }
static BOOL NETWORK_HAS_AGE_RESTRICTIONS() { return invoke<BOOL>(0xE4A070); }
static BOOL NETWORK_HAVE_USER_CONTENT_PRIVILEGES(int p0) { return invoke<BOOL>(0xE4A0A0, p0); }
static BOOL NETWORK_HAVE_COMMUNICATION_PRIVILEGES(int p0, Player player) { return invoke<BOOL>(0xE4A0C0, p0, player); }
static BOOL NETWORK_CHECK_ONLINE_PRIVILEGES(Any p0, BOOL p1) { return invoke<BOOL>(0xE4A160, p0, p1); }
static BOOL NETWORK_CHECK_USER_CONTENT_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0xE4A190, p0, p1, p2); }
static BOOL NETWORK_CHECK_COMMUNICATION_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0xE4A1C0, p0, p1, p2); }
static BOOL NETWORK_CHECK_TEXT_COMMUNICATION_PRIVILEGES(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xE4A1F0, p0, p1, p2); }
static BOOL NETWORK_IS_USING_ONLINE_PROMOTION() { return invoke<BOOL>(0xE4A220); }
static BOOL NETWORK_SHOULD_SHOW_PROMOTION_ALERT_SCREEN() { return invoke<BOOL>(0xE4A260); }
static BOOL NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() { return invoke<BOOL>(0xE4A290); }
static int NETWORK_GET_AGE_GROUP() { return invoke<int>(0xE4A2C0); }
static BOOL NETWORK_CHECK_PRIVILEGES(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xE4A2E0, p0, p1, p2); }
static BOOL NETWORK_IS_PRIVILEGE_CHECK_IN_PROGRESS() { return invoke<BOOL>(0xE4A350); }
static void NETWORK_SET_PRIVILEGE_CHECK_RESULT_NOT_NEEDED() { invoke<Void>(0xE4A370); }
static BOOL NETWORK_RESOLVE_PRIVILEGE_USER_CONTENT() { return invoke<BOOL>(0xE4A380); }
static BOOL NETWORK_HAVE_PLATFORM_SUBSCRIPTION() { return invoke<BOOL>(0xE4A390); }
static BOOL NETWORK_IS_PLATFORM_SUBSCRIPTION_CHECK_PENDING() { return invoke<BOOL>(0xE4A3C0); }
static void NETWORK_SHOW_ACCOUNT_UPGRADE_UI() { invoke<Void>(0xE4A3F0); }
static BOOL NETWORK_IS_SHOWING_SYSTEM_UI_OR_RECENTLY_REQUESTED_UPSELL() { return invoke<BOOL>(0xE4A400); }
static BOOL NETWORK_NEED_TO_START_NEW_GAME_BUT_BLOCKED() { return invoke<BOOL>(0xE4A430); }
static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0xE4A460); }
static void NETWORK_BAIL(int p0, int p1, int p2) { invoke<Void>(0xE4A480, p0, p1, p2); }
static void NETWORK_ON_RETURN_TO_SINGLE_PLAYER() { invoke<Void>(0xE4A540); }
static BOOL NETWORK_TRANSITION_START(int p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE4A550, p0, p1, p2, p3); }
static BOOL NETWORK_TRANSITION_ADD_STAGE(Hash hash, int p1, int p2, int state, int p4) { return invoke<BOOL>(0xE4A570, hash, p1, p2, state, p4); }
static BOOL NETWORK_TRANSITION_FINISH(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xE4A590, p0, p1, p2); }
static BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return invoke<BOOL>(0xE4A5B0, loadingState); }
static BOOL NETWORK_IS_MULTIPLAYER_DISABLED() { return invoke<BOOL>(0xE4A6A0); }
static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<BOOL>(0xE4A6C0); }
static BOOL NETWORK_SESSION_DO_FREEROAM_QUICKMATCH(Any p0, Any p1, Any p2, int maxPlayers) { return invoke<BOOL>(0xE4A6F0, p0, p1, p2, maxPlayers); }
static BOOL NETWORK_SESSION_DO_FRIEND_MATCHMAKING(int p0, int p1, int maxPlayers) { return invoke<BOOL>(0xE4A740, p0, p1, maxPlayers); }
static BOOL NETWORK_SESSION_DO_CREW_MATCHMAKING(int crewId, int p1, int p2, int maxPlayers) { return invoke<BOOL>(0xE4A7A0, crewId, p1, p2, maxPlayers); }
static BOOL NETWORK_SESSION_DO_ACTIVITY_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xE4A8A0, p0, p1, p2, p3, p4); }
static BOOL NETWORK_SESSION_HOST(int p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xE4A910, p0, maxPlayers, p2); }
static BOOL NETWORK_SESSION_HOST_CLOSED(int p0, int maxPlayers) { return invoke<BOOL>(0xE4A910, p0, maxPlayers); }
static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxPlayers) { return invoke<BOOL>(0xE4A910, p0, maxPlayers); }
static BOOL NETWORK_SESSION_IS_CLOSED_FRIENDS() { return invoke<BOOL>(0xE4AA30); }
static BOOL NETWORK_SESSION_IS_CLOSED_CREW() { return invoke<BOOL>(0xE4AA60); }
static BOOL NETWORK_SESSION_IS_SOLO() { return invoke<BOOL>(0xE4AA90); }
static BOOL NETWORK_SESSION_IS_PRIVATE() { return invoke<BOOL>(0xE4AAC0); }
static BOOL NETWORK_SESSION_LEAVE(Any p0) { return invoke<BOOL>(0xE4AB40, p0); }
static void NETWORK_SESSION_KICK_PLAYER(Player player) { invoke<Void>(0xE4AB80, player); }
static BOOL NETWORK_SESSION_GET_KICK_VOTE(Player player) { return invoke<BOOL>(0xE4ABE0, player); }
static BOOL NETWORK_SESSION_RESERVE_SLOTS_TRANSITION(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xE4AC30, p0, p1, p2); }
static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_SESSION() { return invoke<BOOL>(0xE4AC60); }
static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_TRANSITION() { return invoke<BOOL>(0xE4AC90); }
static void NETWORK_SESSION_SET_MATCHMAKING_GROUP(int matchmakingGroup) { invoke<Void>(0xE4ACC0, matchmakingGroup); }
static void NETWORK_SESSION_SET_MATCHMAKING_GROUP_MAX(int playerType, int playerCount) { invoke<Void>(0xE4ACC0, playerType, playerCount); }
static int NETWORK_SESSION_GET_MATCHMAKING_GROUP_FREE(int p0) { return invoke<int>(0xE4AD10, p0); }
static void NETWORK_SESSION_ADD_ACTIVE_MATCHMAKING_GROUP(int groupId) { invoke<Void>(0xE4AD50, groupId); }
static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT(Any p0) { invoke<Void>(0xE4AD70, p0); }
static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT_TRANSITION(Any p0) { invoke<Void>(0xE4AD70, p0); }
static void NETWORK_SESSION_SET_UNIQUE_CREW_ONLY_CREWS_TRANSITION(BOOL p0) { invoke<Void>(0xE4ADE0, p0); }
static void NETWORK_SESSION_SET_CREW_LIMIT_MAX_MEMBERS_TRANSITION(Any p0) { invoke<Void>(0xE4AE10, p0); }
static void NETWORK_SESSION_SET_MATCHMAKING_PROPERTY_ID(BOOL p0) { invoke<Void>(0xE4AE30, p0); }
static void NETWORK_SESSION_SET_MATCHMAKING_MENTAL_STATE(int p0) { invoke<Void>(0xE4AE50, p0); }
static void NETWORK_SESSION_SET_NUM_BOSSES(int num) { invoke<Void>(0xE4AE80, num); }
static void NETWORK_SESSION_SET_SCRIPT_VALIDATE_JOIN() { invoke<Void>(0xE4AE90); }
static void NETWORK_SESSION_VALIDATE_JOIN(BOOL p0) { invoke<Void>(0xE4AEA0, p0); }
static void NETWORK_ADD_FOLLOWERS(int* p0, int p1) { invoke<Void>(0xE4AEC0, p0, p1); }
static void NETWORK_CLEAR_FOLLOWERS() { invoke<Void>(0xE4AED0); }
static void NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(int* hours, int* minutes, int* seconds) { invoke<Void>(0xE4AEE0, hours, minutes, seconds); }
static void NETWORK_SESSION_SET_GAMEMODE(Any p0) { invoke<Void>(0xE4AF00, p0); }
static int NETWORK_SESSION_GET_HOST_AIM_PREFERENCE() { return invoke<int>(0xE4AF10); }
static BOOL NETWORK_FIND_GAMERS_IN_CREW(int crewId) { return invoke<BOOL>(0xE4AF30, crewId); }
static BOOL NETWORK_FIND_MATCHED_GAMERS(int attribute, float fallbackLimit, float lowerLimit, float upperLimit) { return invoke<BOOL>(0xE4B000, attribute, fallbackLimit, lowerLimit, upperLimit); }
static BOOL NETWORK_IS_FINDING_GAMERS() { return invoke<BOOL>(0xE4B040); }
static BOOL NETWORK_DID_FIND_GAMERS_SUCCEED() { return invoke<BOOL>(0xE4B060); }
static int NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<int>(0xE4B080); }
static BOOL NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) { return invoke<BOOL>(0xE4B0A0, p0, p1); }
static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0xE4B160); }
static BOOL NETWORK_QUEUE_GAMER_FOR_STATUS(Any* p0) { return invoke<BOOL>(0xE4B170, p0); }
static BOOL NETWORK_GET_GAMER_STATUS_FROM_QUEUE() { return invoke<BOOL>(0xE4B1F0); }
static BOOL NETWORK_IS_GETTING_GAMER_STATUS() { return invoke<BOOL>(0xE4B210); }
static BOOL NETWORK_DID_GET_GAMER_STATUS_SUCCEED() { return invoke<BOOL>(0xE4B230); }
static BOOL NETWORK_GET_GAMER_STATUS_RESULT(Any* p0, Any p1) { return invoke<BOOL>(0xE4B250, p0, p1); }
static void NETWORK_CLEAR_GET_GAMER_STATUS() { invoke<Void>(0xE4B300); }
static void NETWORK_SESSION_JOIN_INVITE() { invoke<Void>(0xE4B310); }
static void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0xE4B320); }
static void NETWORK_SESSION_FORCE_CANCEL_INVITE() { invoke<Void>(0xE4B350); }
static BOOL NETWORK_HAS_PENDING_INVITE() { return invoke<BOOL>(0xE4B380); }
static BOOL NETWORK_HAS_CONFIRMED_INVITE() { return invoke<BOOL>(0xE4B3C0); }
static BOOL NETWORK_REQUEST_INVITE_CONFIRMED_EVENT() { return invoke<BOOL>(0xE4B3F0); }
static BOOL NETWORK_SESSION_WAS_INVITED() { return invoke<BOOL>(0xE4B420); }
static void NETWORK_SESSION_GET_INVITER(Any* gamerHandle) { invoke<Void>(0xE4B440, gamerHandle); }
static BOOL NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE() { return invoke<BOOL>(0xE4B470); }
static BOOL NETWORK_SESSION_IS_DISPLAYING_INVITE_CONFIRMATION() { return invoke<BOOL>(0xE4B4A0); }
static void NETWORK_SUPPRESS_INVITE(BOOL toggle) { invoke<Void>(0xE4B4D0, toggle); }
static void NETWORK_BLOCK_INVITES(BOOL toggle) { invoke<Void>(0xE4B4F0, toggle); }
static void NETWORK_BLOCK_JOIN_QUEUE_INVITES(BOOL toggle) { invoke<Void>(0xE4B510, toggle); }
static void NETWORK_SET_CAN_RECEIVE_RS_INVITES(BOOL p0) { invoke<Void>(0xE4B530, p0); }
static void NETWORK_STORE_INVITE_THROUGH_RESTART() { invoke<Void>(0xE4B550); }
static void NETWORK_ALLOW_INVITE_PROCESS_IN_PLAYER_SWITCH(BOOL p0) { invoke<Void>(0xE4B560, p0); }
static void NETWORK_SET_SCRIPT_READY_FOR_EVENTS(BOOL toggle) { invoke<Void>(0xE4B580, toggle); }
static BOOL NETWORK_IS_OFFLINE_INVITE_PENDING() { return invoke<BOOL>(0xE4B5A0); }
static void NETWORK_CLEAR_OFFLINE_INVITE_PENDING() { invoke<Void>(0xE4B5C0); }
static void NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) { invoke<Void>(0xE4A910, p0); }
static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0xE4AB40); }
static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0xE4B650); }
static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0xE4B660); }
static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0xE4B680); }
static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0xE4B6B0); }
static BOOL NETWORK_IS_SESSION_BUSY() { return invoke<BOOL>(0xE4B6D0); }
static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0xE4B6F0); }
static int NETWORK_GET_GAME_MODE() { return invoke<int>(0xE4B710); }
static void NETWORK_SESSION_MARK_VISIBLE(BOOL toggle) { invoke<Void>(0xE4B750, toggle); }
static BOOL NETWORK_SESSION_IS_VISIBLE() { return invoke<BOOL>(0xE4B7A0); }
static void NETWORK_SESSION_BLOCK_JOIN_REQUESTS(BOOL toggle) { invoke<Void>(0xE4B7E0, toggle); }
static void NETWORK_SESSION_CHANGE_SLOTS(int slots, BOOL p1) { invoke<Void>(0xE4B830, slots, p1); }
static int NETWORK_SESSION_GET_PRIVATE_SLOTS() { return invoke<int>(0xE4B870); }
static BOOL NETWORK_SESSION_VOICE_HOST() { return invoke<BOOL>(0xE4B8A0); }
static BOOL NETWORK_SESSION_VOICE_LEAVE() { return invoke<BOOL>(0xE4B8D0); }
static void NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(Any* gamerHandle) { invoke<Void>(0xE4B900, gamerHandle); }
static void NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(BOOL p0, int p1) { invoke<Void>(0xE4B980, p0, p1); }
static void NETWORK_SESSION_VOICE_SET_TIMEOUT(int timeout) { invoke<Void>(0xE4B9A0, timeout); }
static BOOL NETWORK_SESSION_IS_IN_VOICE_SESSION() { return invoke<BOOL>(0xE4B9C0); }
static BOOL NETWORK_SESSION_IS_VOICE_SESSION_ACTIVE() { return invoke<BOOL>(0xE4B9F0); }
static BOOL NETWORK_SESSION_IS_VOICE_SESSION_BUSY() { return invoke<BOOL>(0xE4BA20); }
static BOOL NETWORK_SEND_TEXT_MESSAGE(const char* message, Any* gamerHandle) { return invoke<BOOL>(0xE4BA50, message, gamerHandle); }
static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL toggle) { invoke<Void>(0xE4BAE0, toggle); }
static BOOL NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<BOOL>(0xE4BB00); }
static void NETWORK_SET_ACTIVITY_PLAYER_MAX(Any p0) { invoke<Void>(0xE4BB20, p0); }
static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(int maxSpectators) { invoke<Void>(0xE4BAE0, maxSpectators); }
static int NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return invoke<int>(0xE4BB60, p0); }
static BOOL NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xE4BB00, gamerHandle); }
static BOOL NETWORK_HOST_TRANSITION(int p0, int p1, int p2, int p3, Any p4, BOOL p5, BOOL p6, int p7, Any p8, int p9) { return invoke<BOOL>(0xE4BC30, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xE4BD00, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xE4BD00, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0xE4BD00, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL NETWORK_JOIN_GROUP_ACTIVITY() { return invoke<BOOL>(0xE4BE90); }
static void NETWORK_CLEAR_GROUP_ACTIVITY() { invoke<Void>(0xE4BEC0); }
static void NETWORK_RETAIN_ACTIVITY_GROUP() { invoke<Void>(0xE4BED0); }
static BOOL NETWORK_IS_TRANSITION_CLOSED_FRIENDS() { return invoke<BOOL>(0xE4BEE0); }
static BOOL NETWORK_IS_TRANSITION_CLOSED_CREW() { return invoke<BOOL>(0xE4BF10); }
static BOOL NETWORK_IS_TRANSITION_SOLO() { return invoke<BOOL>(0xE4BF40); }
static BOOL NETWORK_IS_TRANSITION_PRIVATE() { return invoke<BOOL>(0xE4BF70); }
static int NETWORK_GET_NUM_TRANSITION_NON_ASYNC_GAMERS() { return invoke<int>(0xE4BFA0); }
static void NETWORK_MARK_AS_PREFERRED_ACTIVITY(BOOL p0) { invoke<Void>(0xE4BFD0, p0); }
static void NETWORK_MARK_AS_WAITING_ASYNC(BOOL p0) { invoke<Void>(0xE4BFF0, p0); }
static void NETWORK_SET_IN_PROGRESS_FINISH_TIME(Any p0) { invoke<Void>(0xE4C010, p0); }
static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) { invoke<Void>(0xE4C030, p0); }
static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0xE4C0B0); }
static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) { return invoke<BOOL>(0xE4C110, p0, p1); }
static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(Any* gamerHandle) { invoke<Void>(0xE4C140, gamerHandle); }
static BOOL NETWORK_LEAVE_TRANSITION() { return invoke<BOOL>(0xE4C1D0); }
static BOOL NETWORK_LAUNCH_TRANSITION() { return invoke<BOOL>(0xE4C210); }
static void NETWORK_SET_DO_NOT_LAUNCH_FROM_JOIN_AS_MIGRATED_HOST(BOOL toggle) { invoke<Void>(0xE4C250, toggle); }
static void NETWORK_CANCEL_TRANSITION_MATCHMAKING() { invoke<Void>(0xE4C270); }
static void NETWORK_BAIL_TRANSITION(int p0, int p1, int p2) { invoke<Void>(0xE4A480, p0, p1, p2); }
static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, int maxPlayers) { return invoke<BOOL>(0xE4C2B0, p0, maxPlayers); }
static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xE4C2E0, p0, maxPlayers, p2); }
static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) { return invoke<BOOL>(0xE4C320, p0, p1, p2, players, p4); }
static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any* p0, Any p1, int players, BOOL p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xE4C360, p0, p1, players, p3, p4, p5); }
static BOOL NETWORK_IS_TRANSITION_TO_GAME() { return invoke<BOOL>(0xE4C3B0); }
static int NETWORK_GET_TRANSITION_MEMBERS(Any* data, int dataCount) { return invoke<int>(0xE4C3F0, data, dataCount); }
static void NETWORK_APPLY_TRANSITION_PARAMETER(int p0, int p1) { invoke<Void>(0xE4C420, p0, p1); }
static void NETWORK_APPLY_TRANSITION_PARAMETER_STRING(int p0, const char* string, BOOL p2) { invoke<Void>(0xE4C420, p0, string, p2); }
static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(Any* gamerHandle, const char* p1, int p2, int p3, BOOL p4) { return invoke<BOOL>(0xE4C470, gamerHandle, p1, p2, p3, p4); }
static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) { return invoke<BOOL>(0xE4C540, p0); }
static BOOL NETWORK_IS_TRANSITION_HOST() { return invoke<BOOL>(0xE4C5E0); }
static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xE4C5E0, gamerHandle); }
static BOOL NETWORK_GET_TRANSITION_HOST(Any* gamerHandle) { return invoke<BOOL>(0xE4C6C0, gamerHandle); }
static BOOL NETWORK_IS_IN_TRANSITION() { return invoke<BOOL>(0xE4C750); }
static BOOL NETWORK_IS_TRANSITION_STARTED() { return invoke<BOOL>(0xE4C770); }
static BOOL NETWORK_IS_TRANSITION_BUSY() { return invoke<BOOL>(0xE4C790); }
static BOOL NETWORK_IS_TRANSITION_MATCHMAKING() { return invoke<BOOL>(0xE4C7B0); }
static BOOL NETWORK_IS_TRANSITION_LEAVE_POSTPONED() { return invoke<BOOL>(0xE4C7D0); }
static void NETWORK_TRANSITION_SET_IN_PROGRESS(Any p0) { invoke<Void>(0xE4C7F0, p0); }
static void NETWORK_TRANSITION_SET_CONTENT_CREATOR(Any p0) { invoke<Void>(0xE4C820, p0); }
static void NETWORK_TRANSITION_SET_ACTIVITY_ISLAND(Any p0) { invoke<Void>(0xE4C840, p0); }
static void NETWORK_OPEN_TRANSITION_MATCHMAKING() { invoke<Void>(0xE4C870); }
static void NETWORK_CLOSE_TRANSITION_MATCHMAKING() { invoke<Void>(0xE4C890); }
static BOOL NETWORK_IS_TRANSITION_OPEN_TO_MATCHMAKING() { return invoke<BOOL>(0xE4C8B0); }
static void NETWORK_SET_TRANSITION_VISIBILITY_LOCK(BOOL p0, BOOL p1) { invoke<Void>(0xE4C8E0, p0, p1); }
static BOOL NETWORK_IS_TRANSITION_VISIBILITY_LOCKED() { return invoke<BOOL>(0xE4C910); }
static void NETWORK_SET_TRANSITION_ACTIVITY_ID(Any p0) { invoke<Void>(0xE4C940, p0); }
static void NETWORK_CHANGE_TRANSITION_SLOTS(Any p0, BOOL p1) { invoke<Void>(0xE4C990, p0, p1); }
static void NETWORK_TRANSITION_BLOCK_JOIN_REQUESTS(BOOL p0) { invoke<Void>(0xE4C9F0, p0); }
static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Player player) { return invoke<BOOL>(0xE4CA40, player); }
static BOOL NETWORK_ARE_TRANSITION_DETAILS_VALID(Any p0) { return invoke<BOOL>(0xE4CA90, p0); }
static BOOL NETWORK_JOIN_TRANSITION(Player player) { return invoke<BOOL>(0xE4CAF0, player); }
static BOOL NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) { return invoke<BOOL>(0xE4CB50, p0); }
static BOOL NETWORK_HAS_TRANSITION_INVITE_BEEN_ACKED(Any* p0) { return invoke<BOOL>(0xE4CBE0, p0); }
static BOOL NETWORK_IS_ACTIVITY_SESSION() { return invoke<BOOL>(0xE4CC70); }
static void NETWORK_DISABLE_REALTIME_MULTIPLAYER() { invoke<Void>(0xE4CCA0); }
static void NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(BOOL toggle) { invoke<Void>(0xE4CCB0, toggle); }
static BOOL NETWORK_SEND_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xE4CCE0, gamerHandle, p1, dataCount, p3); }
static BOOL NETWORK_SEND_TRANSITION_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xE4CDB0, gamerHandle, p1, dataCount, p3); }
static BOOL NETWORK_SEND_IMPORTANT_TRANSITION_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xDF67C0, gamerHandle, p1, dataCount, p3); }
static int NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(int p0) { return invoke<int>(0xE4CF50, p0); }
static int NETWORK_GET_NUM_PRESENCE_INVITES() { return invoke<int>(0xE4CF80); }
static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0xE4CFB0, p0); }
static BOOL NETWORK_REMOVE_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0xE4CFE0, p0); }
static int NETWORK_GET_PRESENCE_INVITE_ID(int p0) { return invoke<int>(0xE4D010, p0); }
static const char* NETWORK_GET_PRESENCE_INVITE_INVITER(int p0) { return invoke<const char*>(0xE4D040, p0); }
static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0xE4D070, p0, p1); }
static int NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Any p0) { return invoke<int>(0xE4D100, p0); }
static const char* NETWORK_GET_PRESENCE_INVITE_CONTENT_ID(int p0) { return invoke<const char*>(0xE4D120, p0); }
static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_LENGTH(int p0) { return invoke<int>(0xE4D150, p0); }
static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_CURRENT(int p0) { return invoke<int>(0xE4D180, p0); }
static BOOL NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(int p0) { return invoke<BOOL>(0xE4D1B0, p0); }
static BOOL NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(Any p0) { return invoke<BOOL>(0xE4D1E0, p0); }
static BOOL NETWORK_HAS_FOLLOW_INVITE() { return invoke<BOOL>(0xE4D210); }
static BOOL NETWORK_ACTION_FOLLOW_INVITE() { return invoke<BOOL>(0xE4D240); }
static BOOL NETWORK_CLEAR_FOLLOW_INVITE() { return invoke<BOOL>(0xE4D270); }
static void NETWORK_REMOVE_AND_CANCEL_ALL_INVITES() { invoke<Void>(0xE4D2A0); }
static void NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) { invoke<Void>(0xE4D2B0, p0); }
static void NETWORK_REMOVE_ALL_TRANSITION_INVITE() { invoke<Void>(0xE4D330); }
static void NETWORK_REMOVE_AND_CANCEL_ALL_TRANSITION_INVITES() { invoke<Void>(0xE4D340); }
static BOOL NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any p3) { return invoke<BOOL>(0xE4D350, p0, p1, p2, p3); }
static BOOL NETWORK_HAS_INVITED_GAMER(Any* p0) { return invoke<BOOL>(0xE4D380, p0); }
static BOOL NETWORK_HAS_MADE_INVITE_DECISION(Any* gamerHandle) { return invoke<BOOL>(0xE4D420, gamerHandle); }
static int NETWORK_GET_INVITE_REPLY_STATUS(Any p0) { return invoke<int>(0xE4D4B0, p0); }
static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xE4D540, p0); }
static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xE4D5A0, p0); }
static void NETWORK_SET_INVITE_ON_CALL_FOR_INVITE_MENU(Any* p0) { invoke<Void>(0xE4D670, p0); }
static BOOL NETWORK_CHECK_DATA_MANAGER_SUCCEEDED_FOR_HANDLE(int p0, Any* gamerHandle) { return invoke<BOOL>(0xE4D680, p0, gamerHandle); }
static BOOL NETWORK_CHECK_DATA_MANAGER_FOR_HANDLE(Any p0, Any* gamerHandle) { return invoke<BOOL>(0xE4D740, p0, gamerHandle); }
static void NETWORK_SET_INVITE_FAILED_MESSAGE_FOR_INVITE_MENU(Any* p0, Any* p1) { invoke<Void>(0xE4D800, p0, p1); }
static BOOL FILLOUT_PM_PLAYER_LIST(Any* gamerHandle, Any p1, Any p2) { return invoke<BOOL>(0xE4D810, gamerHandle, p1, p2); }
static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xE4D810, p0, p1, p2, p3); }
static BOOL REFRESH_PLAYER_LIST_STATS(int p0) { return invoke<BOOL>(0xE4D870, p0); }
static BOOL NETWORK_SET_CURRENT_DATA_MANAGER_HANDLE(Any* p0) { return invoke<BOOL>(0xE4D8A0, p0); }
static BOOL NETWORK_IS_IN_PLATFORM_PARTY() { return invoke<BOOL>(0xE4D950); }
static int NETWORK_GET_PLATFORM_PARTY_MEMBER_COUNT() { return invoke<int>(0xE4D970); }
static int NETWORK_GET_PLATFORM_PARTY_MEMBERS(Any* data, int dataSize) { return invoke<int>(0xE4D990, data, dataSize); }
static BOOL NETWORK_IS_IN_PLATFORM_PARTY_CHAT() { return invoke<BOOL>(0xE4D950); }
static BOOL NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(Any* gamerHandle) { return invoke<BOOL>(0xE4D9E0, gamerHandle); }
static BOOL NETWORK_CAN_QUEUE_FOR_PREVIOUS_SESSION_JOIN() { return invoke<BOOL>(0xE4DA60); }
static BOOL NETWORK_IS_QUEUING_FOR_SESSION_JOIN() { return invoke<BOOL>(0xE4DA90); }
static void NETWORK_CLEAR_QUEUED_JOIN_REQUEST() { invoke<Void>(0xE4DAC0); }
static void NETWORK_SEND_QUEUED_JOIN_REQUEST() { invoke<Void>(0xE4DAD0); }
static void NETWORK_REMOVE_ALL_QUEUED_JOIN_REQUESTS() { invoke<Void>(0xE4DAE0); }
static void NETWORK_SEED_RANDOM_NUMBER_GENERATOR(int seed) { invoke<Void>(0xE4DAF0, seed); }
static int NETWORK_GET_RANDOM_INT() { return invoke<int>(0xE4DB30); }
static int NETWORK_GET_RANDOM_INT_RANGED(int rangeStart, int rangeEnd) { return invoke<int>(0xE4DB30, rangeStart, rangeEnd); }
static float _NETWORK_GET_RANDOM_FLOAT_RANGED(float rangeStart, float rangeEnd) { return invoke<float>(0xE4DBD0, rangeStart, rangeEnd); }
static BOOL NETWORK_PLAYER_IS_CHEATER() { return invoke<BOOL>(0xE4DC50); }
static int NETWORK_PLAYER_GET_CHEATER_REASON() { return invoke<int>(0xE4DCA0); }
static BOOL NETWORK_PLAYER_IS_BADSPORT() { return invoke<BOOL>(0xE4DCD0); }
static BOOL REMOTE_CHEATER_PLAYER_DETECTED(Player player, int a, int b) { return invoke<BOOL>(0xE4DD00, player, a, b); }
static BOOL BAD_SPORT_PLAYER_LEFT_DETECTED(Any* gamerHandle, int event, int amountReceived) { return invoke<BOOL>(0xE4DD70, gamerHandle, event, amountReceived); }
static void NETWORK_ADD_INVALID_OBJECT_MODEL(Hash modelHash) { invoke<Void>(0xE4DE20, modelHash); }
static void NETWORK_REMOVE_INVALID_OBJECT_MODEL(Hash modelHash) { invoke<Void>(0xE4DEA0, modelHash); }
static void NETWORK_CLEAR_INVALID_OBJECT_MODELS() { invoke<Void>(0xE4DF20); }
static void NETWORK_APPLY_PED_SCAR_DATA(Ped ped, int p1) { invoke<Void>(0xE4DF40, ped, p1); }
static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int maxNumMissionParticipants, BOOL p1, int instanceId) { invoke<Void>(0xE4DFA0, maxNumMissionParticipants, p1, instanceId); }
static BOOL NETWORK_TRY_TO_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0xE4E010, p0, p1, p2); }
static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0xE4E0A0); }
static int NETWORK_GET_MAX_NUM_PARTICIPANTS() { return invoke<int>(0xE4E0D0); }
static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0xE4E110); }
static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0xE4E150); }
static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0xE4E170, vars, numVars, debugName); }
static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0xE4E190, vars, numVars, debugName); }
static void NETWORK_REGISTER_HIGH_FREQUENCY_HOST_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0xE4E1B0, p0, p1, p2); }
static void NETWORK_REGISTER_HIGH_FREQUENCY_PLAYER_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0xE4E1D0, p0, p1, p2); }
static void NETWORK_FINISH_BROADCASTING_DATA() { invoke<Void>(0xE4E1F0); }
static BOOL NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA() { return invoke<BOOL>(0xE4E4F0); }
static Player NETWORK_GET_PLAYER_INDEX(Player player) { return invoke<Player>(0xE4E510, player); }
static int NETWORK_GET_PARTICIPANT_INDEX(int index) { return invoke<int>(0xE4E5E0, index); }
static Player NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped ped) { return invoke<Player>(0xE4E510, ped); }
static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xE4E6F0); }
static BOOL NETWORK_IS_PLAYER_CONNECTED(Player player) { return invoke<BOOL>(0xE4E710, player); }
static int NETWORK_GET_TOTAL_NUM_PLAYERS() { return invoke<int>(0xE4E770); }
static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<BOOL>(0xE4E790, p0); }
static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return invoke<BOOL>(0xE4E7D0, player); }
static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Player player) { return invoke<BOOL>(0xE4E800, player); }
static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0xE49FD0); }
static Player NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Player>(0xE4E870); }
static Player NETWORK_GET_HOST_OF_SCRIPT(const char* scriptName, int instance_id, int position_hash) { return invoke<Player>(0xE4E8B0, scriptName, instance_id, position_hash); }
static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0xE4E980); }
static BOOL NETWORK_IS_SCRIPT_ACTIVE(const char* scriptName, int instance_id, BOOL p2, int position_hash) { return invoke<BOOL>(0xE4E9B0, scriptName, instance_id, p2, position_hash); }
static BOOL NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Hash scriptHash, int p1, BOOL p2, int p3) { return invoke<BOOL>(0xE4E9B0, scriptHash, p1, p2, p3); }
static BOOL NETWORK_IS_THREAD_A_NETWORK_SCRIPT(int threadId) { return invoke<BOOL>(0xE4EB80, threadId); }
static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(const char* scriptName, int instance_id, int position_hash) { return invoke<int>(0xE4EBD0, scriptName, instance_id, position_hash); }
static int NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() { return invoke<int>(0xDF67C0); }
static Hash NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT() { return invoke<Hash>(0xE4ED20); }
static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Player player, const char* script, int instance_id) { return invoke<BOOL>(0xE4E800, player, script, instance_id); }
static void NETWORK_PREVENT_SCRIPT_HOST_MIGRATION() { invoke<Void>(0xE4ED90); }
static void NETWORK_REQUEST_TO_BE_HOST_OF_THIS_SCRIPT() { invoke<Void>(0xE4EDC0); }
static Player PARTICIPANT_ID() { return invoke<Player>(0xE4EE10); }
static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0xE4EE10); }
static Player NETWORK_GET_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Player>(0xE4EE70, player, weaponHash); }
static Player NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, Hash* weaponHash) { return invoke<Player>(0xE4EEE0, netId, weaponHash); }
static Player NETWORK_GET_DESTROYER_OF_ENTITY(Entity entity, Hash* weaponHash) { return invoke<Player>(0xE4EF10, entity, weaponHash); }
static BOOL NETWORK_GET_ASSISTED_KILL_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0xE4EF40, player, entity, p2); }
static BOOL NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0xE4EF70, player, entity, p2); }
static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Entity>(0xE4EFA0, player, weaponHash); }
static void NETWORK_SET_CURRENT_PUBLIC_CONTENT_ID(const char* missionId) { invoke<Void>(0xE4EFD0, missionId); }
static void NETWORK_SET_CURRENT_CHAT_OPTION(int newChatOption) { invoke<Void>(0xE4F010, newChatOption); }
static void NETWORK_SET_CURRENT_SPAWN_LOCATION_OPTION(Hash mpSettingSpawn) { invoke<Void>(0xE4F040, mpSettingSpawn); }
static void NETWORK_SET_VEHICLE_DRIVEN_IN_TEST_DRIVE(BOOL toggle) { invoke<Void>(0xE4F070, toggle); }
static void NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, BOOL p4, BOOL changetime, BOOL p6, int p7, int p8) { invoke<Void>(0xE4F0E0, x, y, z, heading, p4, changetime, p6, p7, p8); }
static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<Void>(0xE4F110, time); }
static BOOL NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<BOOL>(0xE4F150); }
static void NETWORK_DISABLE_INVINCIBLE_FLASHING(Player player, BOOL toggle) { invoke<Void>(0xE4F190, player, toggle); }
static void NETWORK_PATCH_POST_CUTSCENE_HS4F_TUN_ENT(Ped ped) { invoke<Void>(0xE4F1E0, ped); }
static void NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(BOOL toggle) { invoke<Void>(0xE4F240, toggle); }
static BOOL NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(Entity entity) { return invoke<BOOL>(0xE4F280, entity); }
static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0xE4F2E0, entity); }
static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) { return invoke<Entity>(0xE4F340, netId); }
static BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) { return invoke<BOOL>(0xE4F380, entity); }
static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Entity entity) { return invoke<BOOL>(0xE4F3E0, entity); }
static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) { invoke<Void>(0xE4F450, entity); }
static void NETWORK_UNREGISTER_NETWORKED_ENTITY(Entity entity) { invoke<Void>(0xE4F520, entity); }
static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netId) { return invoke<BOOL>(0xE4F5C0, netId); }
static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(int netId) { return invoke<BOOL>(0xDB2290, netId); }
static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xE4F640, netId); }
static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xE4F6B0, netId); }
static BOOL NETWORK_IS_NETWORK_ID_REMOTELY_CONTROLLED(int netId) { return invoke<BOOL>(0xE4F730, netId); }
static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xE4F780, entity); }
static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(int doorID) { return invoke<BOOL>(0xE4F7B0, doorID); }
static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xE4F820, entity); }
static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickup) { return invoke<BOOL>(0xE4F890, pickup); }
static BOOL NETWORK_HAS_CONTROL_OF_DOOR(Hash doorHash) { return invoke<BOOL>(0xE4F8C0, doorHash); }
static BOOL NETWORK_IS_DOOR_NETWORKED(Hash doorHash) { return invoke<BOOL>(0xE4F910, doorHash); }
static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0xE4F950, vehicle); }
static int PED_TO_NET(Ped ped) { return invoke<int>(0xE4F9B0, ped); }
static int OBJ_TO_NET(Object object) { return invoke<int>(0xE4FA10, object); }
static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0xE4FA70, netHandle); }
static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0xE4FAB0, netHandle); }
static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0xE4FAF0, netHandle); }
static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0xE4FB30, netHandle); }
static void NETWORK_GET_LOCAL_HANDLE(Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FB70, gamerHandle, gamerHandleSize); }
static void NETWORK_HANDLE_FROM_USER_ID(const char* userId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FBB0, userId, gamerHandle, gamerHandleSize); }
static void NETWORK_HANDLE_FROM_MEMBER_ID(const char* memberId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FC30, memberId, gamerHandle, gamerHandleSize); }
static void NETWORK_HANDLE_FROM_PLAYER(Player player, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FCB0, player, gamerHandle, gamerHandleSize); }
static Hash NETWORK_HASH_FROM_PLAYER_HANDLE(Player player) { return invoke<Hash>(0xE4FD20, player); }
static Hash NETWORK_HASH_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Hash>(0xE4FD40, gamerHandle); }
static void NETWORK_HANDLE_FROM_FRIEND(int friendIndex, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xE4FDF0, friendIndex, gamerHandle, gamerHandleSize); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(Any* gamerHandle) { return invoke<BOOL>(0xE4FEA0, gamerHandle); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<BOOL>(0xE4FEB0); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<BOOL>(0xE4FEC0); }
static const char* NETWORK_GET_GAMERTAG_FROM_HANDLE(Any* gamerHandle) { return invoke<const char*>(0xE4FED0, gamerHandle); }
static int NETWORK_DISPLAYNAMES_FROM_HANDLES_START(Any* p0, Any p1) { return invoke<int>(0xE4FF80, p0, p1); }
static int NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Any p0, Any p1, Any p2) { return invoke<int>(0xE50080, p0, p1, p2); }
static BOOL NETWORK_ARE_HANDLES_THE_SAME(Any* gamerHandle1, Any* gamerHandle2) { return invoke<BOOL>(0xE50190, gamerHandle1, gamerHandle2); }
static BOOL NETWORK_IS_HANDLE_VALID(Any* gamerHandle, int gamerHandleSize) { return invoke<BOOL>(0xE50240, gamerHandle, gamerHandleSize); }
static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Player>(0xE50270, gamerHandle); }
static const char* NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<const char*>(0xE502A0, gamerHandle); }
static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(Any* gamerHandle) { return invoke<BOOL>(0xE50330, gamerHandle); }
static void NETWORK_SHOW_PROFILE_UI(Any* gamerHandle) { invoke<Void>(0xE503C0, gamerHandle); }
static const char* NETWORK_PLAYER_GET_NAME(Player player) { return invoke<const char*>(0xE50430, player); }
static const char* NETWORK_PLAYER_GET_USERID(Player player, int* userID) { return invoke<const char*>(0xE504B0, player, userID); }
static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0xE504E0, player); }
static BOOL NETWORK_PLAYER_INDEX_IS_CHEATER(Player player) { return invoke<BOOL>(0xE50530, player); }
static int NETWORK_ENTITY_GET_OBJECT_ID(Entity entity) { return invoke<int>(0xE505B0, entity); }
static Entity NETWORK_GET_ENTITY_FROM_OBJECT_ID(Any p0) { return invoke<Entity>(0xE50620, p0); }
static BOOL NETWORK_IS_INACTIVE_PROFILE(Any* p0) { return invoke<BOOL>(0xE50680, p0); }
static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0xE50740); }
static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xE50750); }
static const char* NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<const char*>(0xE50760, friendIndex); }
static const char* NETWORK_GET_FRIEND_DISPLAY_NAME(int friendIndex) { return invoke<const char*>(0xE507B0, friendIndex); }
static BOOL NETWORK_IS_FRIEND_ONLINE(const char* name) { return invoke<BOOL>(0xE50800, name); }
static BOOL NETWORK_IS_FRIEND_HANDLE_ONLINE(Any* gamerHandle) { return invoke<BOOL>(0xE50850, gamerHandle); }
static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(const char* friendName) { return invoke<BOOL>(0xE50880, friendName); }
static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(const char* friendName) { return invoke<BOOL>(0xE50900, friendName); }
static BOOL NETWORK_IS_FRIEND(Any* gamerHandle) { return invoke<BOOL>(0xE50950, gamerHandle); }
static BOOL NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<BOOL>(0xE509E0, p0); }
static BOOL NETWORK_IS_ADDING_FRIEND() { return invoke<BOOL>(0xE509F0); }
static BOOL NETWORK_ADD_FRIEND(Any* gamerHandle, const char* message) { return invoke<BOOL>(0xE50A10, gamerHandle, message); }
static BOOL NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) { return invoke<BOOL>(0xE50950, friendIndex); }
static void NETWORK_SET_PLAYER_IS_PASSIVE(BOOL toggle) { invoke<Void>(0xE50AF0, toggle); }
static BOOL NETWORK_GET_PLAYER_OWNS_WAYPOINT(Player player) { return invoke<BOOL>(0xE50B40, player); }
static BOOL NETWORK_CAN_SET_WAYPOINT() { return invoke<BOOL>(0xE50BA0); }
static void NETWORK_IGNORE_REMOTE_WAYPOINTS() { invoke<Void>(0xE50BD0); }
static BOOL NETWORK_IS_PLAYER_ON_BLOCKLIST(Any* gamerHandle) { return invoke<BOOL>(0xE50E10, gamerHandle); }
static BOOL NETWORK_SET_SCRIPT_AUTOMUTED(Any p0) { return invoke<BOOL>(0xE50E90, p0); }
static BOOL NETWORK_HAS_AUTOMUTE_OVERRIDE() { return invoke<BOOL>(0xE50EB0); }
static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0xE50EE0); }
static void NETWORK_SET_LOOK_AT_TALKERS(BOOL p0) { invoke<Void>(0xE50F20, p0); }
static BOOL NETWORK_IS_PUSH_TO_TALK_ACTIVE() { return invoke<BOOL>(0xE50F40); }
static BOOL NETWORK_GAMER_HAS_HEADSET(Any* gamerHandle) { return invoke<BOOL>(0xE50F60, gamerHandle); }
static BOOL NETWORK_IS_GAMER_TALKING(Any* gamerHandle) { return invoke<BOOL>(0xE50FF0, gamerHandle); }
static BOOL NETWORK_PERMISSIONS_HAS_GAMER_RECORD(Any* gamerHandle) { return invoke<BOOL>(0xE51020, gamerHandle); }
static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE510B0, gamerHandle); }
static BOOL NETWORK_CAN_TEXT_CHAT_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE51150, gamerHandle); }
static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0xE511E0, gamerHandle); }
static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE51270, gamerHandle); }
static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0xE51300, gamerHandle); }
static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE51390, gamerHandle); }
static BOOL NETWORK_CAN_VIEW_GAMER_USER_CONTENT(Any* gamerHandle) { return invoke<BOOL>(0xE51420, gamerHandle); }
static BOOL NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(Any* gamerHandle) { return invoke<BOOL>(0xE514B0, gamerHandle); }
static BOOL NETWORK_CAN_PLAY_MULTIPLAYER_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xE515D0, gamerHandle); }
static BOOL NETWORK_CAN_GAMER_PLAY_MULTIPLAYER_WITH_ME(Any* gamerHandle) { return invoke<BOOL>(0xE51660, gamerHandle); }
static BOOL NETWORK_CAN_SEND_LOCAL_INVITE(Any* gamerHandle) { return invoke<BOOL>(0xE516F0, gamerHandle); }
static BOOL NETWORK_CAN_RECEIVE_LOCAL_INVITE(Any* gamerHandle) { return invoke<BOOL>(0xE51770, gamerHandle); }
static BOOL NETWORK_IS_PLAYER_TALKING(Player player) { return invoke<BOOL>(0xE51800, player); }
static BOOL NETWORK_PLAYER_HAS_HEADSET(Player player) { return invoke<BOOL>(0xE51860, player); }
static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) { return invoke<BOOL>(0xE518C0, player); }
static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(Player player) { return invoke<BOOL>(0xE51920, player); }
static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) { return invoke<BOOL>(0xE51980, player); }
static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) { return invoke<BOOL>(0xE519E0, player); }
static float NETWORK_GET_PLAYER_LOUDNESS(Player player) { return invoke<float>(0xE51A40, player); }
static void NETWORK_SET_TALKER_PROXIMITY(float value) { invoke<Void>(0xE51AA0, value); }
static float NETWORK_GET_TALKER_PROXIMITY() { return invoke<float>(0xE51AC0); }
static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { invoke<Void>(0xE51AF0, toggle); }
static void NETWORK_REMAIN_IN_GAME_CHAT(BOOL p0) { invoke<Void>(0xE51B10, p0); }
static void NETWORK_OVERRIDE_TRANSITION_CHAT(BOOL p0) { invoke<Void>(0xE51B30, p0); }
static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { invoke<Void>(0xE51B50, toggle); }
static void NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(Any p0) { invoke<Void>(0xE51B70, p0); }
static BOOL NETWORK_SET_SAME_TEAM_AS_LOCAL_PLAYER(Any p0, Any p1) { return invoke<BOOL>(0xE51B80, p0, p1); }
static void NETWORK_OVERRIDE_TEAM_RESTRICTIONS(int team, BOOL toggle) { invoke<Void>(0xE51B90, team, toggle); }
static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0xE51BC0, toggle); }
static void NETWORK_SET_OVERRIDE_TUTORIAL_SESSION_CHAT(BOOL toggle) { invoke<Void>(0xE51BE0, toggle); }
static void NETWORK_SET_PROXIMITY_AFFECTS_TEAM(BOOL toggle) { invoke<Void>(0xE51C00, toggle); }
static void NETWORK_SET_NO_SPECTATOR_CHAT(BOOL toggle) { invoke<Void>(0xE51C20, toggle); }
static void NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(BOOL toggle) { invoke<Void>(0xE51C40, toggle); }
static void NETWORK_OVERRIDE_CHAT_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xE51C60, player, toggle); }
static void NETWORK_OVERRIDE_SEND_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xE51CC0, player, toggle); }
static void NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0xE51CC0, toggle); }
static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xE51D10, player, toggle); }
static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0xE51D10, toggle); }
static void NETWORK_SET_VOICE_CHANNEL(int channel) { invoke<Void>(0xE51D60, channel); }
static void NETWORK_CLEAR_VOICE_CHANNEL() { invoke<Void>(0xE51DB0); }
static void NETWORK_APPLY_VOICE_PROXIMITY_OVERRIDE(float x, float y, float z) { invoke<Void>(0xE51DE0, x, y, z); }
static void NETWORK_CLEAR_VOICE_PROXIMITY_OVERRIDE() { invoke<Void>(0xE51E70); }
static void NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0xE51EA0, player); }
static void NETWORK_DISABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0xE51F00, player); }
static void NETWORK_GET_MUTE_COUNT_FOR_PLAYER(Player p0, float* p1, float* p2) { invoke<Void>(0xE51F60, p0, p1, p2); }
static void NETWORK_SET_SPECTATOR_TO_NON_SPECTATOR_TEXT_CHAT(BOOL toggle) { invoke<Void>(0xE51FB0, toggle); }
static BOOL NETWORK_TEXT_CHAT_IS_TYPING() { return invoke<BOOL>(0xE51FC0); }
static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0xE51FD0); }
static BOOL SHUTDOWN_AND_LOAD_MOST_RECENT_SAVE() { return invoke<BOOL>(0xE51FF0); }
static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0xE52030, toggle); }
static void NETWORK_SET_RICH_PRESENCE(int p0, int p1, Any p2, Any p3) { invoke<Void>(0xE52050, p0, p1, p2, p3); }
static void NETWORK_SET_RICH_PRESENCE_STRING(int p0, const char* textLabel) { invoke<Void>(0xE52050, p0, textLabel); }
static int NETWORK_GET_TIMEOUT_TIME() { return invoke<int>(0xE52070); }
static void NETWORK_LEAVE_PED_BEHIND_BEFORE_WARP(Player player, float x, float y, float z, BOOL p4, BOOL p5) { invoke<Void>(0xE52090, player, x, y, z, p4, p5); }
static void NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Player player, BOOL p1) { invoke<Void>(0xE520C0, player, p1); }
static void REMOVE_ALL_STICKY_BOMBS_FROM_ENTITY(Entity entity, Ped ped) { invoke<Void>(0xE520E0, entity, ped); }
static void NETWORK_KEEP_ENTITY_COLLISION_DISABLED_AFTER_ANIM_SCENE(Any p0, Any p1) { invoke<Void>(0xE52170, p0, p1); }
static BOOL NETWORK_IS_ANY_PLAYER_NEAR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0xE521E0, p0, p1, p2, p3, p4, p5, p6); }
static BOOL NETWORK_CLAN_SERVICE_IS_VALID() { return invoke<BOOL>(0xE52220); }
static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(Any* gamerHandle) { return invoke<BOOL>(0xE52250, gamerHandle); }
static BOOL NETWORK_CLAN_PLAYER_GET_DESC(Any* clanDesc, int bufferSize, Any* gamerHandle) { return invoke<BOOL>(0xE52300, clanDesc, bufferSize, gamerHandle); }
static BOOL NETWORK_CLAN_IS_ROCKSTAR_CLAN(Any* clanDesc, int bufferSize) { return invoke<BOOL>(0xE52330, clanDesc, bufferSize); }
static void NETWORK_CLAN_GET_UI_FORMATTED_TAG(Any* clanDesc, int bufferSize, char* formattedTag) { invoke<Void>(0xE52370, clanDesc, bufferSize, formattedTag); }
static int NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() { return invoke<int>(0xE523F0); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(Any* memberDesc, int p1) { return invoke<BOOL>(0xE52420, memberDesc, p1); }
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(Any* gamerHandle) { return invoke<BOOL>(0xE52450, gamerHandle); }
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) { return invoke<BOOL>(0xE52450, p0); }
static BOOL NETWORK_CLAN_ANY_DOWNLOAD_MEMBERSHIP_PENDING() { return invoke<BOOL>(0xE524B0); }
static BOOL NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(int* p0) { return invoke<BOOL>(0xE52500, p0); }
static int NETWORK_CLAN_GET_MEMBERSHIP_COUNT(int* p0) { return invoke<int>(0xE52530, p0); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(int* p0, Any p1) { return invoke<BOOL>(0xE52560, p0, p1); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP(int* p0, Any* clanMembership, int p2) { return invoke<BOOL>(0xE52590, p0, clanMembership, p2); }
static BOOL NETWORK_CLAN_JOIN(int clanDesc) { return invoke<BOOL>(0xE525C0, clanDesc); }
static BOOL NETWORK_CLAN_CREWINFO_GET_STRING_VALUE(const char* animDict, const char* animName) { return invoke<BOOL>(0xE525F0, animDict, animName); }
static BOOL NETWORK_CLAN_CREWINFO_GET_CREWRANKTITLE(int p0, const char* p1) { return invoke<BOOL>(0xE52640, p0, p1); }
static BOOL NETWORK_CLAN_HAS_CREWINFO_METADATA_BEEN_RECEIVED() { return invoke<BOOL>(0xE52690); }
static BOOL NETWORK_CLAN_GET_EMBLEM_TXD_NAME(Any* netHandle, char* txdName) { return invoke<BOOL>(0xE526D0, netHandle, txdName); }
static BOOL NETWORK_CLAN_REQUEST_EMBLEM(Any p0) { return invoke<BOOL>(0xE52700, p0); }
static BOOL NETWORK_CLAN_IS_EMBLEM_READY(Any p0, Any* p1) { return invoke<BOOL>(0xE52730, p0, p1); }
static void NETWORK_CLAN_RELEASE_EMBLEM(Any p0) { invoke<Void>(0xE527E0, p0); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke<BOOL>(0xE52880); }
static void NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL() { invoke<Void>(0xE528A0); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0xE528C0, p0, p1); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke<BOOL>(0xE528F0); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke<BOOL>(0xE52910); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0xE52930, p0, p1); }
static void SET_NETWORK_ID_CAN_MIGRATE(int netId, BOOL toggle) { invoke<Void>(0xE52960, netId, toggle); }
static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { invoke<Void>(0xE52980, netId, toggle); }
static void SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(int netId, Player player, BOOL toggle) { invoke<Void>(0xE529A0, netId, player, toggle); }
static void SET_NETWORK_ID_CAN_BE_REASSIGNED(int netId, BOOL toggle) { invoke<Void>(0xE529C0, netId, toggle); }
static void NETWORK_SET_ENTITY_CAN_BLEND(Entity entity, BOOL toggle) { invoke<Void>(0xE529E0, entity, toggle); }
static void NETWORK_SET_OBJECT_CAN_BLEND_WHEN_FIXED(Object object, BOOL toggle) { invoke<Void>(0xE52A40, object, toggle); }
static void NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(Entity entity, BOOL toggle) { invoke<Void>(0xE52AB0, entity, toggle); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int netId, BOOL p1, BOOL p2) { invoke<Void>(0xE52B30, netId, p1, p2); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_HACK(int netId, BOOL p1, BOOL p2) { invoke<Void>(0xE52B30, netId, p1, p2); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Any p0, Any p1) { invoke<Void>(0xE52B30, p0, p1); }
static void SET_NETWORK_CUTSCENE_ENTITIES(BOOL toggle) { invoke<Void>(0xE52B90, toggle); }
static BOOL ARE_CUTSCENE_ENTITIES_NETWORKED() { return invoke<BOOL>(0xE52BB0); }
static void SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(int netId, BOOL state) { invoke<Void>(0xE52BC0, netId, state); }
static BOOL IS_NETWORK_ID_OWNED_BY_PARTICIPANT(int netId) { return invoke<BOOL>(0xE52C60, netId); }
static void SET_REMOTE_PLAYER_VISIBLE_IN_CUTSCENE(Player player, BOOL locallyVisible) { invoke<Void>(0xE52C90, player, locallyVisible); }
static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xE52D00, p0, p1); }
static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL bIncludePlayersVehicle) { invoke<Void>(0xE52D80, bIncludePlayersVehicle); }
static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL bIncludePlayersVehicle) { invoke<Void>(0xE52E20, bIncludePlayersVehicle); }
static void SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL bIncludePlayersVehicle) { invoke<Void>(0xE52EC0, player, bIncludePlayersVehicle); }
static void SET_PLAYER_VISIBLE_LOCALLY(Player player, BOOL bIncludePlayersVehicle) { invoke<Void>(0xE52F60, player, bIncludePlayersVehicle); }
static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { invoke<Void>(0xE53010, p0); }
static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL normal, BOOL slow) { invoke<Void>(0xE53090, entity, normal, slow); }
static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL state, Any p2) { invoke<Void>(0xE530B0, entity, state, p2); }
static BOOL NETWORK_IS_PLAYER_FADING(Player player) { return invoke<BOOL>(0xE530D0, player); }
static BOOL NETWORK_IS_ENTITY_FADING(Entity entity) { return invoke<BOOL>(0xE53150, entity); }
static BOOL IS_PLAYER_IN_CUTSCENE(Player player) { return invoke<BOOL>(0xE531D0, player); }
static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xDB66C0, p0, p1, p2); }
static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { invoke<Void>(0xE532E0, entity); }
static void SET_ENTITY_LOCALLY_VISIBLE(Entity entity) { invoke<Void>(0xE53340, entity); }
static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0xE533B0, netID); }
static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL toggle) { invoke<Void>(0xE533E0, netID, toggle); }
static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_PLAYER(Player player) { return invoke<BOOL>(0xE53400, player); }
static void ACTIVATE_DAMAGE_TRACKER_ON_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xE53470, player, toggle); }
static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0xD949A0, p0, p1, p2, p3); }
static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0xD949A0, p0, p1, p2, p3, p4); }
static void RESERVE_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0xE53650, amount); }
static void RESERVE_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0xE53660, amount); }
static void RESERVE_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0xE53670, amount); }
static void RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0xE53680, amount); }
static void RESERVE_LOCAL_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0xE53690, amount); }
static void RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0xE536A0, amount); }
static BOOL CAN_REGISTER_MISSION_OBJECTS(int amount) { return invoke<BOOL>(0xE536B0, amount); }
static BOOL CAN_REGISTER_MISSION_PEDS(int amount) { return invoke<BOOL>(0xE53730, amount); }
static BOOL CAN_REGISTER_MISSION_VEHICLES(int amount) { return invoke<BOOL>(0xE537B0, amount); }
static BOOL CAN_REGISTER_MISSION_PICKUPS(int amount) { return invoke<BOOL>(0xE53850, amount); }
static BOOL CAN_REGISTER_MISSION_DOORS(Any p0) { return invoke<BOOL>(0xE538D0, p0); }
static BOOL CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) { return invoke<BOOL>(0xE53920, ped_amt, vehicle_amt, object_amt, pickup_amt); }
static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0, Any p1) { return invoke<int>(0xE53A00, p0, p1); }
static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0, Any p1) { return invoke<int>(0xE53AC0, p0, p1); }
static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0, Any p1) { return invoke<int>(0xE53B80, p0, p1); }
static int GET_NUM_CREATED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0xE53C40, p0); }
static int GET_NUM_CREATED_MISSION_PEDS(BOOL p0) { return invoke<int>(0xE53CC0, p0); }
static int GET_NUM_CREATED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0xE53D40, p0); }
static void GET_RESERVED_MISSION_ENTITIES_IN_AREA(float x, float y, float z, Any p3, Any* out1, Any* out2, Any* out3) { invoke<Void>(0xE53DC0, x, y, z, p3, out1, out2, out3); }
static int GET_MAX_NUM_NETWORK_OBJECTS() { return invoke<int>(0xE53EC0); }
static int GET_MAX_NUM_NETWORK_PEDS() { return invoke<int>(0xE53ED0); }
static int GET_MAX_NUM_NETWORK_VEHICLES() { return invoke<int>(0xE53EE0); }
static int GET_MAX_NUM_NETWORK_PICKUPS() { return invoke<int>(0xE53EF0); }
static void NETWORK_SET_OBJECT_SCOPE_DISTANCE(Object object, float range) { invoke<Void>(0xDF67C0, object, range); }
static void NETWORK_ALLOW_CLONING_WHILE_IN_TUTORIAL(Any p0, Any p1) { invoke<Void>(0xE53F60, p0, p1); }
static void NETWORK_SET_TASK_CUTSCENE_INSCOPE_MULTIPLER(Any p0) { invoke<Void>(0xE53FE0, p0); }
static int GET_NETWORK_TIME() { return invoke<int>(0xE540D0); }
static int GET_NETWORK_TIME_ACCURATE() { return invoke<int>(0xE540D0); }
static BOOL HAS_NETWORK_TIME_STARTED() { return invoke<BOOL>(0xE541C0); }
static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0xE541F0, timeA, timeB); }
static BOOL IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<BOOL>(0xE54200, timeA, timeB); }
static BOOL IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<BOOL>(0xE54220, timeA, timeB); }
static BOOL IS_TIME_EQUAL_TO(int timeA, int timeB) { return invoke<BOOL>(0xE54240, timeA, timeB); }
static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0xE54260, timeA, timeB); }
static const char* GET_TIME_AS_STRING(int time) { return invoke<const char*>(0xE54270, time); }
static const char* GET_CLOUD_TIME_AS_STRING() { return invoke<const char*>(0xE54380); }
static int GET_CLOUD_TIME_AS_INT() { return invoke<int>(0xE543C0); }
static void CONVERT_POSIX_TIME(int posixTime, Any* timeStructure) { invoke<Void>(0xE543E0, posixTime, timeStructure); }
static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL toggle, Ped playerPed) { invoke<Void>(0xE54480, toggle, playerPed); }
static void NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(BOOL toggle, Ped playerPed, BOOL p2) { invoke<Void>(0xE54480, toggle, playerPed, p2); }
static void NETWORK_SET_IN_FREE_CAM_MODE(BOOL toggle) { invoke<Void>(0xE54560, toggle); }
static void NETWORK_SET_ANTAGONISTIC_TO_PLAYER(BOOL toggle, Player player) { invoke<Void>(0xE545B0, toggle, player); }
static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0xE54600); }
static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xE54620, p0, p1); }
static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0xE54650); }
static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0xE54660, player); }
static void NETWORK_HIDE_PROJECTILE_IN_CUTSCENE() { invoke<Void>(0xE546B0); }
static void SET_NETWORK_VEHICLE_RESPOT_TIMER(int netId, int time, Any p2, Any p3) { invoke<Void>(0xE546C0, netId, time, p2, p3); }
static BOOL IS_NETWORK_VEHICLE_RUNNING_RESPOT_TIMER(int networkID) { return invoke<BOOL>(0xE54730, networkID); }
static void SET_NETWORK_VEHICLE_AS_GHOST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE54780, vehicle, toggle); }
static void SET_NETWORK_VEHICLE_MAX_POSITION_DELTA_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xE547E0, vehicle, multiplier); }
static void SET_NETWORK_ENABLE_HIGH_SPEED_EDGE_FALL_DETECTION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE548B0, vehicle, toggle); }
static void SET_LOCAL_PLAYER_AS_GHOST(BOOL toggle, BOOL p1) { invoke<Void>(0xE54970, toggle, p1); }
static BOOL IS_ENTITY_A_GHOST(Entity entity) { return invoke<BOOL>(0xE54990, entity); }
static void SET_NON_PARTICIPANTS_OF_THIS_SCRIPT_AS_GHOSTS(BOOL p0) { invoke<Void>(0xE54A00, p0); }
static void SET_REMOTE_PLAYER_AS_GHOST(Player player, BOOL p1) { invoke<Void>(0xE54A70, player, p1); }
static void SET_GHOST_ALPHA(int alpha) { invoke<Void>(0xE54B20, alpha); }
static void RESET_GHOST_ALPHA() { invoke<Void>(0xE54B20); }
static void SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(Entity entity, BOOL toggle) { invoke<Void>(0xE54BC0, entity, toggle); }
static void SET_INVERT_GHOSTING(BOOL p0) { invoke<Void>(0xE54C30, p0); }
static BOOL IS_ENTITY_IN_GHOST_COLLISION(Entity entity) { return invoke<BOOL>(0xE54CC0, entity); }
static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { invoke<Void>(0xE54DF0, toggle); }
static int NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int rotationOrder, BOOL useOcclusionPortal, BOOL looped, float p9, float animTime, float p11) { return invoke<int>(0xE54E10, x, y, z, xRot, yRot, zRot, rotationOrder, useOcclusionPortal, looped, p9, animTime, p11); }
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Ped ped, int netScene, const char* animDict, const char* animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { invoke<Void>(0xE54E60, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag, playbackRate, p9); }
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE_WITH_IK(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xE54E60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, const char* animDict, const char* animName, float speed, float speedMulitiplier, int flag) { invoke<Void>(0xE55020, entity, netScene, animDict, animName, speed, speedMulitiplier, flag); }
static void NETWORK_ADD_MAP_ENTITY_TO_SYNCHRONISED_SCENE(int netScene, Hash modelHash, float x, float y, float z, float p5, const char* p6, float p7, float p8, int flags) { invoke<Void>(0xE550E0, netScene, modelHash, x, y, z, p5, p6, p7, p8, flags); }
static void NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(int netScene, const char* animDict, const char* animName) { invoke<Void>(0xE55160, netScene, animDict, animName); }
static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, Entity entity, int bone) { invoke<Void>(0xE551E0, netScene, entity, bone); }
static void NETWORK_START_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xE552A0, netScene); }
static void NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xE55310, netScene); }
static int NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(int netId) { return invoke<int>(0xE55380, netId); }
static void NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(int netScene) { invoke<Void>(0xE553C0, netScene); }
static void NETWORK_ALLOW_REMOTE_SYNCED_SCENE_LOCAL_PLAYER_REQUESTS(Any p0) { invoke<Void>(0xE55430, p0); }
static BOOL NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(int p0, Any p1) { return invoke<BOOL>(0xE55460, p0, p1); }
static BOOL NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(Player player, float x, float y, float z, float radius, float p5, float p6, float p7, int flags) { return invoke<BOOL>(0xE554D0, player, x, y, z, radius, p5, p6, p7, flags); }
static BOOL NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(Player player, float x1, float y1, float z1, float x2, float y2, float z2, float width, float p8, float p9, float p10, int flags) { return invoke<BOOL>(0xE55510, player, x1, y1, z1, x2, y2, z2, width, p8, p9, p10, flags); }
static int NETWORK_QUERY_RESPAWN_RESULTS(Any* p0) { return invoke<int>(0xE55550, p0); }
static void NETWORK_CANCEL_RESPAWN_SEARCH() { invoke<Void>(0xE555B0); }
static void NETWORK_GET_RESPAWN_RESULT(int randomInt, vector3* coordinates, float* heading) { invoke<Void>(0xE555C0, randomInt, coordinates, heading); }
static int NETWORK_GET_RESPAWN_RESULT_FLAGS(int p0) { return invoke<int>(0xE555C0, p0); }
static void NETWORK_START_SOLO_TUTORIAL_SESSION() { invoke<Void>(0xE55650); }
static void NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(int teamId, int instanceId) { invoke<Void>(0xE55680, teamId, instanceId); }
static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0xE556D0); }
static BOOL NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<BOOL>(0xE55700); }
static BOOL NETWORK_WAITING_POP_CLEAR_TUTORIAL_SESSION() { return invoke<BOOL>(0xE55740); }
static BOOL NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING() { return invoke<BOOL>(0xE55780); }
static int NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(Player player) { return invoke<int>(0xDF67C0, player); }
static BOOL NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(Player player, int index) { return invoke<BOOL>(0xE55810, player, index); }
static void NETWORK_BLOCK_PROXY_MIGRATION_BETWEEN_TUTORIAL_SESSIONS(Any p0) { invoke<Void>(0xE55870, p0); }
static void NETWORK_CONCEAL_PLAYER(Player player, BOOL toggle, BOOL p2) { invoke<Void>(0xE558A0, player, toggle, p2); }
static BOOL NETWORK_IS_PLAYER_CONCEALED(Player player) { return invoke<BOOL>(0xE558F0, player); }
static void NETWORK_CONCEAL_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xE55940, entity, toggle); }
static BOOL NETWORK_IS_ENTITY_CONCEALED(Entity entity) { return invoke<BOOL>(0xE559B0, entity); }
static void NETWORK_OVERRIDE_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xE55A20, hours, minutes, seconds); }
static void NETWORK_OVERRIDE_CLOCK_RATE(int ms) { invoke<Void>(0xE55A40, ms); }
static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { invoke<Void>(0xE55A50); }
static BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke<BOOL>(0xE55AD0); }
static int NETWORK_ADD_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xE55AF0, x1, y1, z1, x2, y2, z2); }
static int NETWORK_ADD_ENTITY_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0xE55B20, x1, y1, z1, x2, y2, z2, width); }
static int NETWORK_ADD_CLIENT_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xE55B50, x1, y1, z1, x2, y2, z2); }
static int NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<int>(0xE55B80, x1, y1, z1, x2, y2, z2, radius); }
static BOOL NETWORK_REMOVE_ENTITY_AREA(int areaHandle) { return invoke<BOOL>(0xE55BB0, areaHandle); }
static BOOL NETWORK_ENTITY_AREA_DOES_EXIST(int areaHandle) { return invoke<BOOL>(0xE55CB0, areaHandle); }
static BOOL NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(int areaHandle) { return invoke<BOOL>(0xE55CE0, areaHandle); }
static BOOL NETWORK_ENTITY_AREA_IS_OCCUPIED(int areaHandle) { return invoke<BOOL>(0xE55D10, areaHandle); }
static void NETWORK_USE_HIGH_PRECISION_BLENDING(int netID, BOOL toggle) { invoke<Void>(0xE55D40, netID, toggle); }
static void NETWORK_SET_CUSTOM_ARENA_BALL_PARAMS(int netId) { invoke<Void>(0xE55DA0, netId); }
static void NETWORK_ENTITY_USE_HIGH_PRECISION_ROTATION(int netId, BOOL toggle) { invoke<Void>(0xE55E00, netId, toggle); }
static BOOL NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS() { return invoke<BOOL>(0xE55E60); }
static BOOL NETWORK_IS_CLOUD_BACKGROUND_SCRIPT_REQUEST_PENDING() { return invoke<BOOL>(0xE55E90); }
static void NETWORK_REQUEST_CLOUD_TUNABLES() { invoke<Void>(0xE55EC0); }
static BOOL NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING() { return invoke<BOOL>(0xE55ED0); }
static int NETWORK_GET_TUNABLE_CLOUD_CRC() { return invoke<int>(0xE55F00); }
static BOOL NETWORK_DOES_TUNABLE_EXIST(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0xE561B0, tunableContext, tunableName); }
static BOOL NETWORK_ACCESS_TUNABLE_INT(const char* tunableContext, const char* tunableName, int* value) { return invoke<BOOL>(0xE56220, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT(const char* tunableContext, const char* tunableName, float* value) { return invoke<BOOL>(0xE562A0, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0xE56320, tunableContext, tunableName); }
static BOOL NETWORK_DOES_TUNABLE_EXIST_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xE561B0, tunableContext, tunableName); }
static BOOL NETWORK_ACCESS_TUNABLE_MODIFICATION_DETECTION_CLEAR() { return invoke<BOOL>(0xE56410); }
static BOOL NETWORK_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int* value) { return invoke<BOOL>(0xE56220, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_INT_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, int* value) { return invoke<BOOL>(0xE56220, contextHash, nameHash, value); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float* value) { return invoke<BOOL>(0xE562A0, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, float* value) { return invoke<BOOL>(0xE562A0, contextHash, nameHash, value); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xE56320, tunableContext, tunableName); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, BOOL* value) { return invoke<BOOL>(0xE56320, contextHash, nameHash, value); }
static BOOL NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName, BOOL defaultValue) { return invoke<BOOL>(0xE56640, tunableContext, tunableName, defaultValue); }
static int NETWORK_GET_CONTENT_MODIFIER_LIST_ID(Hash contentHash) { return invoke<int>(0xE566A0, contentHash); }
static int NETWORK_GET_BONE_ID_OF_FATAL_HIT() { return invoke<int>(0xE566D0); }
static void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0xE56700); }
static int NETWORK_GET_NUMBER_BODY_TRACKER_HITS() { return invoke<int>(0xE56720); }
static BOOL NETWORK_HAS_BONE_BEEN_HIT_BY_KILLER(int boneIndex) { return invoke<BOOL>(0xE56750, boneIndex); }
static BOOL NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(Ped ped, Player player) { return invoke<BOOL>(0xE567E0, ped, player); }
static void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE(Entity entity, BOOL toggle) { invoke<Void>(0xE568A0, entity, toggle); }
static void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_WEAPON_HASH(Entity entity, BOOL toggle) { invoke<Void>(0xE56980, entity, toggle); }
static void NETWORK_SET_NO_LONGER_NEEDED(Entity entity, BOOL toggle) { invoke<Void>(0xE569F0, entity, toggle); }
static BOOL NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, int netId) { return invoke<BOOL>(0xE56A00, vehicle, isAudible, isInvisible, netId); }
static void NETWORK_EXPLODE_HELI(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, int netId) { invoke<Void>(0xE56A30, vehicle, isAudible, isInvisible, netId); }
static void NETWORK_USE_LOGARITHMIC_BLENDING_THIS_FRAME(Entity entity) { invoke<Void>(0xE56A60, entity); }
static void NETWORK_OVERRIDE_COORDS_AND_HEADING(Entity entity, float x, float y, float z, float heading) { invoke<Void>(0xE56AC0, entity, x, y, z, heading); }
static void NETWORK_ENABLE_EXTRA_VEHICLE_ORIENTATION_BLEND_CHECKS(int netId, BOOL toggle) { invoke<Void>(0xE56BA0, netId, toggle); }
static void NETWORK_DISABLE_PROXIMITY_MIGRATION(int netID) { invoke<Void>(0xE56C20, netID); }
static void NETWORK_SET_PLAYER_MENTAL_STATE(int p0) { invoke<Void>(0xE56C70, p0); }
static void NETWORK_SET_MINIMUM_RANK_FOR_MISSION(BOOL p0) { invoke<Void>(0xE56CB0, p0); }
static void NETWORK_CACHE_LOCAL_PLAYER_HEAD_BLEND_DATA() { invoke<Void>(0xE56CD0); }
static BOOL NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(Player player) { return invoke<BOOL>(0xE56CE0, player); }
static BOOL NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(Ped ped, Player player) { return invoke<BOOL>(0xE56D20, ped, player); }
static int GET_NUM_COMMERCE_ITEMS() { return invoke<int>(0xE56DD0); }
static BOOL IS_COMMERCE_DATA_VALID() { return invoke<BOOL>(0xE56DF0); }
static void TRIGGER_COMMERCE_DATA_FETCH(Any p0) { invoke<Void>(0xE56E10, p0); }
static BOOL IS_COMMERCE_DATA_FETCH_IN_PROGRESS() { return invoke<BOOL>(0xE56E20); }
static const char* GET_COMMERCE_ITEM_ID(int index) { return invoke<const char*>(0xE56E50, index); }
static const char* GET_COMMERCE_ITEM_NAME(int index) { return invoke<const char*>(0xE56EC0, index); }
static const char* GET_COMMERCE_PRODUCT_PRICE(int index) { return invoke<const char*>(0xE56F30, index); }
static int GET_COMMERCE_ITEM_NUM_CATS(int index) { return invoke<int>(0xE56FA0, index); }
static const char* GET_COMMERCE_ITEM_CAT(int index, int index2) { return invoke<const char*>(0xE57010, index, index2); }
static void OPEN_COMMERCE_STORE(const char* p0, const char* p1, int p2) { invoke<Void>(0xE57080, p0, p1, p2); }
static BOOL IS_COMMERCE_STORE_OPEN() { return invoke<BOOL>(0xE570A0); }
static void SET_STORE_ENABLED(BOOL toggle) { invoke<Void>(0xE570C0, toggle); }
static BOOL REQUEST_COMMERCE_ITEM_IMAGE(int index) { return invoke<BOOL>(0xE570E0, index); }
static void RELEASE_ALL_COMMERCE_ITEM_IMAGES() { invoke<Void>(0xE57110); }
static const char* GET_COMMERCE_ITEM_TEXTURENAME(int index) { return invoke<const char*>(0xE57120, index); }
static BOOL IS_STORE_AVAILABLE_TO_USER() { return invoke<BOOL>(0xE57190); }
static void DELAY_MP_STORE_OPEN() { invoke<Void>(0xE571E0); }
static void RESET_STORE_NETWORK_GAME_TRACKING() { invoke<Void>(0xE571F0); }
static BOOL IS_USER_OLD_ENOUGH_TO_ACCESS_STORE() { return invoke<BOOL>(0xE57200); }
static void SET_LAST_VIEWED_SHOP_ITEM(Hash p0, int p1, Hash p2) { invoke<Void>(0xE57240, p0, p1, p2); }
static int GET_USER_PREMIUM_ACCESS() { return invoke<int>(0xE57260); }
static int GET_USER_STARTER_ACCESS() { return invoke<int>(0xE57290); }
static int CLOUD_DELETE_MEMBER_FILE(const char* p0) { return invoke<int>(0xE572C0, p0); }
static BOOL CLOUD_HAS_REQUEST_COMPLETED(int requestId) { return invoke<BOOL>(0xE57320, requestId); }
static BOOL CLOUD_DID_REQUEST_SUCCEED(int requestId) { return invoke<BOOL>(0xE57350, requestId); }
static void CLOUD_CHECK_AVAILABILITY() { invoke<Void>(0xE57380); }
static BOOL CLOUD_IS_CHECKING_AVAILABILITY() { return invoke<BOOL>(0xE57390); }
static BOOL CLOUD_GET_AVAILABILITY_CHECK_RESULT() { return invoke<BOOL>(0xE573B0); }
static int GET_CONTENT_TO_LOAD_TYPE() { return invoke<int>(0xDF58E0); }
static BOOL GET_IS_LAUNCH_FROM_LIVE_AREA() { return invoke<BOOL>(0xE574E0); }
static BOOL GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() { return invoke<BOOL>(0xE57520); }
static void CLEAR_SERVICE_EVENT_ARGUMENTS() { invoke<Void>(0xE57580); }
static BOOL UGC_COPY_CONTENT(Any* p0, Any* p1) { return invoke<BOOL>(0xE57590, p0, p1); }
static BOOL UGC_IS_CREATING() { return invoke<BOOL>(0xE575E0); }
static BOOL UGC_HAS_CREATE_FINISHED() { return invoke<BOOL>(0xE57610); }
static BOOL UGC_DID_CREATE_SUCCEED() { return invoke<BOOL>(0xE57640); }
static int UGC_GET_CREATE_RESULT() { return invoke<int>(0xE57670); }
static const char* UGC_GET_CREATE_CONTENT_ID() { return invoke<const char*>(0xE576A0); }
static void UGC_CLEAR_CREATE_RESULT() { invoke<Void>(0xE576D0); }
static BOOL UGC_QUERY_MY_CONTENT(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xE576E0, p0, p1, p2, p3, p4, p5); }
static BOOL UGC_QUERY_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any p4, BOOL p5) { return invoke<BOOL>(0xE577B0, p0, p1, p2, p3, p4, p5); }
static BOOL UGC_QUERY_BY_CONTENT_ID(const char* contentId, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0xE57840, contentId, latestVersion, contentTypeName); }
static BOOL UGC_QUERY_BY_CONTENT_IDS(Any* data, int count, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0xE57840, data, count, latestVersion, contentTypeName); }
static BOOL UGC_QUERY_MOST_RECENTLY_CREATED_CONTENT(int offset, int count, const char* contentTypeName, int p3) { return invoke<BOOL>(0xE57A20, offset, count, contentTypeName, p3); }
static BOOL UGC_GET_BOOKMARKED_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xE57AC0, p0, p1, p2, p3); }
static BOOL UGC_GET_MY_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xE57B20, p0, p1, p2, p3); }
static BOOL UGC_GET_FRIEND_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xE57B90, p0, p1, p2, p3); }
static BOOL UGC_GET_CREW_CONTENT(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0xE57BF0, p0, p1, p2, p3, p4); }
static BOOL UGC_GET_GET_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0xE57C50, p0, p1, p2, p3, p4); }
static BOOL UGC_GET_GET_BY_CONTENT_ID(const char* contentId, const char* contentTypeName) { return invoke<BOOL>(0xE57CD0, contentId, contentTypeName); }
static BOOL UGC_GET_GET_BY_CONTENT_IDS(Any* data, int dataCount, const char* contentTypeName) { return invoke<BOOL>(0xE57CD0, data, dataCount, contentTypeName); }
static BOOL UGC_GET_MOST_RECENTLY_CREATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xE57EA0, p0, p1, p2, p3); }
static BOOL UGC_GET_MOST_RECENTLY_PLAYED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xE57F00, p0, p1, p2, p3); }
static BOOL UGC_GET_TOP_RATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xE57F60, p0, p1, p2, p3); }
static void UGC_CANCEL_QUERY() { invoke<Void>(0xE58020); }
static BOOL UGC_IS_GETTING() { return invoke<BOOL>(0xE58030); }
static BOOL UGC_HAS_GET_FINISHED() { return invoke<BOOL>(0xE58060); }
static BOOL UGC_DID_GET_SUCCEED() { return invoke<BOOL>(0xE58090); }
static BOOL UGC_WAS_QUERY_FORCE_CANCELLED() { return invoke<BOOL>(0xE580C0); }
static int UGC_GET_QUERY_RESULT() { return invoke<int>(0xE580F0); }
static int UGC_GET_CONTENT_NUM() { return invoke<int>(0xE58120); }
static int UGC_GET_CONTENT_TOTAL() { return invoke<int>(0xE58150); }
static Hash UGC_GET_CONTENT_HASH() { return invoke<Hash>(0xE58180); }
static void UGC_CLEAR_QUERY_RESULTS() { invoke<Void>(0xE581B0); }
static const char* UGC_GET_CONTENT_USER_ID(int p0) { return invoke<const char*>(0xE581C0, p0); }
static BOOL UGC_GET_CONTENT_CREATOR_GAMER_HANDLE(int p0, Any* p1) { return invoke<BOOL>(0xE581F0, p0, p1); }
static BOOL UGC_GET_CONTENT_CREATED_BY_LOCAL_PLAYER(Any p0) { return invoke<BOOL>(0xE58280, p0); }
static const char* UGC_GET_CONTENT_USER_NAME(Any p0) { return invoke<const char*>(0xE582B0, p0); }
static BOOL UGC_GET_CONTENT_IS_USING_SC_NICKNAME(Any p0) { return invoke<BOOL>(0xE582E0, p0); }
static int UGC_GET_CONTENT_CATEGORY(int p0) { return invoke<int>(0xE58310, p0); }
static const char* UGC_GET_CONTENT_ID(int p0) { return invoke<const char*>(0xE58340, p0); }
static const char* UGC_GET_ROOT_CONTENT_ID(int p0) { return invoke<const char*>(0xE58370, p0); }
static const char* UGC_GET_CONTENT_NAME(Any p0) { return invoke<const char*>(0xE583A0, p0); }
static int UGC_GET_CONTENT_DESCRIPTION_HASH(Any p0) { return invoke<int>(0xE58400, p0); }
static const char* UGC_GET_CONTENT_PATH(int p0, int p1) { return invoke<const char*>(0xE58430, p0, p1); }
static void UGC_GET_CONTENT_UPDATED_DATE(Any p0, Any* p1) { invoke<Void>(0xE58470, p0, p1); }
static int UGC_GET_CONTENT_FILE_VERSION(Any p0, Any p1) { return invoke<int>(0xE58500, p0, p1); }
static BOOL UGC_GET_CONTENT_HAS_LO_RES_PHOTO(int p0) { return invoke<BOOL>(0xE58530, p0); }
static BOOL UGC_GET_CONTENT_HAS_HI_RES_PHOTO(int p0) { return invoke<BOOL>(0xE58560, p0); }
static int UGC_GET_CONTENT_LANGUAGE(Any p0) { return invoke<int>(0xE58590, p0); }
static BOOL UGC_GET_CONTENT_IS_PUBLISHED(Any p0) { return invoke<BOOL>(0xE585C0, p0); }
static BOOL UGC_GET_CONTENT_IS_VERIFIED(Any p0) { return invoke<BOOL>(0xE585F0, p0); }
static float UGC_GET_CONTENT_RATING(Any p0, Any p1) { return invoke<float>(0xE58620, p0, p1); }
static int UGC_GET_CONTENT_RATING_COUNT(Any p0, Any p1) { return invoke<int>(0xE58620, p0, p1); }
static int UGC_GET_CONTENT_RATING_POSITIVE_COUNT(Any p0, Any p1) { return invoke<int>(0xE58620, p0, p1); }
static int UGC_GET_CONTENT_RATING_NEGATIVE_COUNT(Any p0, Any p1) { return invoke<int>(0xE58620, p0, p1); }
static BOOL UGC_GET_CONTENT_HAS_PLAYER_RECORD(Any p0) { return invoke<BOOL>(0xE586E0, p0); }
static BOOL UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(Any p0) { return invoke<BOOL>(0xE58710, p0); }
static int UGC_REQUEST_CONTENT_DATA_FROM_INDEX(int p0, int p1) { return invoke<int>(0xE58740, p0, p1); }
static int UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(const char* contentTypeName, const char* contentId, int p2, int p3, int p4) { return invoke<int>(0xE58780, contentTypeName, contentId, p2, p3, p4); }
static int UGC_REQUEST_CACHED_DESCRIPTION(int p0) { return invoke<int>(0xE58800, p0); }
static BOOL UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(Any p0) { return invoke<BOOL>(0xE58830, p0); }
static BOOL UGC_HAS_DESCRIPTION_REQUEST_FINISHED(Any p0) { return invoke<BOOL>(0xE58860, p0); }
static BOOL UGC_DID_DESCRIPTION_REQUEST_SUCCEED(Any p0) { return invoke<BOOL>(0xE58890, p0); }
static const char* UGC_GET_CACHED_DESCRIPTION(Any p0, Any p1) { return invoke<const char*>(0xE588C0, p0, p1); }
static BOOL UGC_RELEASE_CACHED_DESCRIPTION(Any p0) { return invoke<BOOL>(0xE58940, p0); }
static void UGC_RELEASE_ALL_CACHED_DESCRIPTIONS() { invoke<Void>(0xE58970); }
static BOOL UGC_PUBLISH(const char* contentId, const char* baseContentId, const char* contentTypeName) { return invoke<BOOL>(0xE589C0, contentId, baseContentId, contentTypeName); }
static BOOL UGC_SET_BOOKMARKED(const char* contentId, BOOL bookmarked, const char* contentTypeName) { return invoke<BOOL>(0xE58A30, contentId, bookmarked, contentTypeName); }
static BOOL UGC_SET_DELETED(Any* p0, BOOL p1, const char* p2) { return invoke<BOOL>(0xE58B30, p0, p1, p2); }
static BOOL UGC_IS_MODIFYING() { return invoke<BOOL>(0xE58B90); }
static BOOL UGC_HAS_MODIFY_FINISHED() { return invoke<BOOL>(0xE58BC0); }
static BOOL UGC_DID_MODIFY_SUCCEED() { return invoke<BOOL>(0xE58BF0); }
static int UGC_GET_MODIFY_RESULT() { return invoke<int>(0xE58C20); }
static void UGC_CLEAR_MODIFY_RESULT() { invoke<Void>(0xE58C50); }
static BOOL UGC_GET_CREATORS_BY_USER_ID(Any* p0, Any* p1) { return invoke<BOOL>(0xE58C60, p0, p1); }
static BOOL UGC_HAS_QUERY_CREATORS_FINISHED() { return invoke<BOOL>(0xE58D10); }
static BOOL UGC_DID_QUERY_CREATORS_SUCCEED() { return invoke<BOOL>(0xE58D40); }
static int UGC_GET_CREATOR_NUM() { return invoke<int>(0xE58D70); }
static BOOL UGC_LOAD_OFFLINE_QUERY(Any p0) { return invoke<BOOL>(0xE58DA0, p0); }
static void UGC_CLEAR_OFFLINE_QUERY() { invoke<Void>(0xE58DD0); }
static void UGC_SET_QUERY_DATA_FROM_OFFLINE(BOOL p0) { invoke<Void>(0xE58DE0, p0); }
static void UGC_SET_USING_OFFLINE_CONTENT(BOOL p0) { invoke<Void>(0xE58E00, p0); }
static BOOL UGC_IS_LANGUAGE_SUPPORTED(Any p0) { return invoke<BOOL>(0xE58E20, p0); }
static BOOL FACEBOOK_POST_COMPLETED_HEIST(const char* heistName, int cashEarned, int xpEarned) { return invoke<BOOL>(0xE58E50, heistName, cashEarned, xpEarned); }
static BOOL FACEBOOK_POST_CREATE_CHARACTER() { return invoke<BOOL>(0xE58E60); }
static BOOL FACEBOOK_POST_COMPLETED_MILESTONE(int milestoneId) { return invoke<BOOL>(0xE58E70, milestoneId); }
static BOOL FACEBOOK_HAS_POST_COMPLETED() { return invoke<BOOL>(0xE58E80); }
static BOOL FACEBOOK_DID_POST_SUCCEED() { return invoke<BOOL>(0xE58E90); }
static BOOL FACEBOOK_CAN_POST_TO_FACEBOOK() { return invoke<BOOL>(0xE58EA0); }
static int TEXTURE_DOWNLOAD_REQUEST(Any* gamerHandle, const char* filePath, const char* name, BOOL p3) { return invoke<int>(0xE58EB0, gamerHandle, filePath, name, p3); }
static int TITLE_TEXTURE_DOWNLOAD_REQUEST(const char* filePath, const char* name, BOOL p2) { return invoke<int>(0xE58EB0, filePath, name, p2); }
static int UGC_TEXTURE_DOWNLOAD_REQUEST(const char* p0, int p1, int p2, int p3, const char* p4, BOOL p5) { return invoke<int>(0xE58EB0, p0, p1, p2, p3, p4, p5); }
static void TEXTURE_DOWNLOAD_RELEASE(int p0) { invoke<Void>(0xE591A0, p0); }
static BOOL TEXTURE_DOWNLOAD_HAS_FAILED(int p0) { return invoke<BOOL>(0xE591C0, p0); }
static const char* TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<const char*>(0xE591F0, p0); }
static int GET_STATUS_OF_TEXTURE_DOWNLOAD(int p0) { return invoke<int>(0xE59220, p0); }
static BOOL NETWORK_CHECK_ROS_LINK_WENTDOWN_NOT_NET() { return invoke<BOOL>(0xE59270); }
static BOOL NETWORK_SHOULD_SHOW_STRICT_NAT_WARNING() { return invoke<BOOL>(0xE592E0); }
static BOOL NETWORK_IS_CABLE_CONNECTED() { return invoke<BOOL>(0xE592F0); }
static BOOL NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() { return invoke<BOOL>(0xE59310); }
static BOOL NETWORK_HAVE_ROS_SOCIAL_CLUB_PRIV() { return invoke<BOOL>(0xE59370); }
static BOOL NETWORK_HAVE_ROS_BANNED_PRIV() { return invoke<BOOL>(0xE593D0); }
static BOOL NETWORK_HAVE_ROS_CREATE_TICKET_PRIV() { return invoke<BOOL>(0xE59410); }
static BOOL NETWORK_HAVE_ROS_MULTIPLAYER_PRIV() { return invoke<BOOL>(0xE59470); }
static BOOL NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV() { return invoke<BOOL>(0xE594D0); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE(int index) { return invoke<BOOL>(0xE59530, index); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE_END_DATE(int privilege, int* banType, Any* timeData) { return invoke<BOOL>(0xE59530, privilege, banType, timeData); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN() { return invoke<BOOL>(0xE59530); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT() { return invoke<BOOL>(0xE59530); }
static int NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(Any* netHandle) { return invoke<int>(0xE59790, netHandle); }
static void NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE() { invoke<Void>(0xE597A0); }
static void NETWORK_SKIP_RADIO_RESET_NEXT_OPEN() { invoke<Void>(0xE597B0); }
static BOOL NETWORK_SKIP_RADIO_WARNING() { return invoke<BOOL>(0xE597C0); }
static void NETWORK_FORCE_LOCAL_PLAYER_SCAR_SYNC() { invoke<Void>(0xE597D0); }
static void NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(BOOL toggle) { invoke<Void>(0xE597F0, toggle); }
static void NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(Entity entity, BOOL toggle) { invoke<Void>(0xE59840, entity, toggle); }
static void NETWORK_SHOW_CHAT_RESTRICTION_MSC(Player player) { invoke<Void>(0xE59890, player); }
static void NETWORK_SHOW_PSN_UGC_RESTRICTION() { invoke<Void>(0xE598E0); }
static BOOL NETWORK_IS_TITLE_UPDATE_REQUIRED() { return invoke<BOOL>(0xE59930); }
static void NETWORK_QUIT_MP_TO_DESKTOP() { invoke<Void>(0xE59990); }
static BOOL NETWORK_IS_CONNECTED_VIA_RELAY(Player player) { return invoke<BOOL>(0xE599A0, player); }
static float NETWORK_GET_AVERAGE_LATENCY(Player player) { return invoke<float>(0xE59A00, player); }
static float NETWORK_GET_AVERAGE_PING(Player player) { return invoke<float>(0xE59A50, player); }
static float NETWORK_GET_AVERAGE_PACKET_LOSS(Player player) { return invoke<float>(0xE59AA0, player); }
static int NETWORK_GET_NUM_UNACKED_RELIABLES(Player player) { return invoke<int>(0xE59AF0, player); }
static int NETWORK_GET_UNRELIABLE_RESEND_COUNT(Player player) { return invoke<int>(0xE59B50, player); }
static int NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT(Player player) { return invoke<int>(0xE59BB0, player); }
static void NETWORK_REPORT_CODE_TAMPER() { invoke<Void>(0xE59C10); }
static vector3 NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(Entity entity) { return invoke<vector3>(0xE59C30, entity); }
static vector3 NETWORK_GET_LAST_PLAYER_POS_RECEIVED_OVER_NETWORK(Player player) { return invoke<vector3>(0xE59D30, player); }
static vector3 NETWORK_GET_LAST_VEL_RECEIVED_OVER_NETWORK(Entity entity) { return invoke<vector3>(0xE59E00, entity); }
static vector3 NETWORK_GET_PREDICTED_VELOCITY(Entity entity) { return invoke<vector3>(0xE59EC0, entity); }
static void NETWORK_DUMP_NET_IF_CONFIG() { invoke<Void>(0xE59F90); }
static void NETWORK_GET_SIGNALLING_INFO(Any* p0) { invoke<Void>(0xE59FA0, p0); }
static void NETWORK_GET_NET_STATISTICS_INFO(Any* p0) { invoke<Void>(0xE59FB0, p0); }
static int NETWORK_GET_PLAYER_ACCOUNT_ID(Player player) { return invoke<int>(0xE59FC0, player); }
static void NETWORK_UGC_NAV(Any p0, Any p1) { invoke<Void>(0xE5A010, p0, p1); }
static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0xE639E0, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); }
static Object CREATE_OBJECT_NO_OFFSET(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0xE639E0, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); }
static void DELETE_OBJECT(Object* object) { invoke<Void>(0xE63B20, object); }
static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) { return invoke<BOOL>(0xE63B30, object); }
static BOOL PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(Object object) { return invoke<BOOL>(0xE63BD0, object); }
static BOOL ROTATE_OBJECT(Object object, float p1, float p2, BOOL p3) { return invoke<BOOL>(0xE63C70, object, p1, p2, p3); }
static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision) { return invoke<BOOL>(0xE63CB0, object, toX, toY, toZ, speedX, speedY, speedZ, collision); }
static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0xE63CF0, object, targettable); }
static void SET_OBJECT_FORCE_VEHICLES_TO_AVOID(Object object, BOOL toggle) { invoke<Void>(0xE63E70, object, toggle); }
static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0xE63ED0, x, y, z, radius, modelHash, isMission, p6, p7); }
static BOOL HAS_OBJECT_BEEN_BROKEN(Object object, Any p1) { return invoke<BOOL>(0xE63F20, object, p1); }
static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) { return invoke<BOOL>(0xE63FC0, p0, p1, p2, p3, modelHash, p5); }
static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_COMPLETELY_DESTROYED(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { return invoke<BOOL>(0xE63FF0, x, y, z, radius, modelHash, p5); }
static BOOL GET_HAS_OBJECT_BEEN_COMPLETELY_DESTROYED(Any p0) { return invoke<BOOL>(0xE64020, p0); }
static vector3 GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<vector3>(0xE64090, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); }
static BOOL GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, vector3* outPosition, vector3* outRotation, int rotationOrder) { return invoke<BOOL>(0xE64170, x, y, z, radius, modelHash, outPosition, outRotation, rotationOrder); }
static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0xE64220, type, x, y, z, locked, heading, p6); }
static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) { invoke<Void>(0xE64320, type, x, y, z, locked, heading); }
static void SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(Hash modelHash, float x, float y, float z, BOOL locked, float xRotMult, float yRotMult, float zRotMult) { invoke<Void>(0xE64340, modelHash, x, y, z, locked, xRotMult, yRotMult, zRotMult); }
static void PLAY_OBJECT_AUTO_START_ANIM(Any p0) { invoke<Void>(0xE64460, p0); }
static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL scriptDoor, BOOL isLocal) { invoke<Void>(0xE644B0, doorHash, modelHash, x, y, z, p5, scriptDoor, isLocal); }
static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash, Any p1) { invoke<Void>(0xE64500, doorHash, p1); }
static void DOOR_SYSTEM_SET_DOOR_STATE(Hash doorHash, int state, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xE64520, doorHash, state, requestDoor, forceUpdate); }
static int DOOR_SYSTEM_GET_DOOR_STATE(Hash doorHash) { return invoke<int>(0xE64550, doorHash); }
static int DOOR_SYSTEM_GET_DOOR_PENDING_STATE(Hash doorHash) { return invoke<int>(0xE64580, doorHash); }
static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(Hash doorHash, float rate, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xE645B0, doorHash, rate, requestDoor, forceUpdate); }
static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Hash doorHash, float distance, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xDF67C0, doorHash, distance, requestDoor, forceUpdate); }
static void DOOR_SYSTEM_SET_OPEN_RATIO(Hash doorHash, float ajar, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xE646F0, doorHash, ajar, requestDoor, forceUpdate); }
static float DOOR_SYSTEM_GET_AUTOMATIC_DISTANCE(Hash doorHash) { return invoke<float>(0xDF67C0, doorHash); }
static float DOOR_SYSTEM_GET_OPEN_RATIO(Hash doorHash) { return invoke<float>(0xE647E0, doorHash); }
static void DOOR_SYSTEM_SET_SPRING_REMOVED(Hash doorHash, BOOL removed, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xE64870, doorHash, removed, requestDoor, forceUpdate); }
static void DOOR_SYSTEM_SET_HOLD_OPEN(Hash doorHash, BOOL toggle) { invoke<Void>(0xE64920, doorHash, toggle); }
static void DOOR_SYSTEM_SET_DOOR_OPEN_FOR_RACES(Hash doorHash, BOOL p1) { invoke<Void>(0xE64980, doorHash, p1); }
static BOOL IS_DOOR_REGISTERED_WITH_SYSTEM(Hash doorHash) { return invoke<BOOL>(0xE64A20, doorHash); }
static BOOL IS_DOOR_CLOSED(Hash doorHash) { return invoke<BOOL>(0xE64A50, doorHash); }
static void OPEN_ALL_BARRIERS_FOR_RACE(BOOL p0) { invoke<Void>(0xE64AC0, p0); }
static void CLOSE_ALL_BARRIERS_FOR_RACE() { invoke<Void>(0xE64AE0); }
static BOOL DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(Any p0) { return invoke<BOOL>(0xE64AF0, p0); }
static BOOL DOOR_SYSTEM_FIND_EXISTING_DOOR(float x, float y, float z, Hash modelHash, Hash* outDoorHash) { return invoke<BOOL>(0xE64B30, x, y, z, modelHash, outDoorHash); }
static BOOL IS_GARAGE_EMPTY(Hash garageHash, BOOL p1, int p2) { return invoke<BOOL>(0xE64BC0, garageHash, p1, p2); }
static BOOL IS_PLAYER_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Player player, float p2, int p3) { return invoke<BOOL>(0xE64C50, garageHash, player, p2, p3); }
static BOOL IS_PLAYER_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Player player, int p2) { return invoke<BOOL>(0xE64CF0, garageHash, player, p2); }
static BOOL ARE_ENTITIES_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xE64D50, garageHash, p1, p2, p3, p4); }
static BOOL IS_ANY_ENTITY_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xE64DC0, garageHash, p1, p2, p3, p4); }
static BOOL IS_OBJECT_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Entity entity, float p2, int p3) { return invoke<BOOL>(0xE64E30, garageHash, entity, p2, p3); }
static BOOL IS_OBJECT_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Entity entity, int p2) { return invoke<BOOL>(0xE64EF0, garageHash, entity, p2); }
static void CLEAR_GARAGE(Hash garageHash, BOOL isNetwork) { invoke<Void>(0xE64F70, garageHash, isNetwork); }
static void CLEAR_OBJECTS_INSIDE_GARAGE(Hash garageHash, BOOL vehicles, BOOL peds, BOOL objects, BOOL isNetwork) { invoke<Void>(0xE64F90, garageHash, vehicles, peds, objects, isNetwork); }
static void DISABLE_TIDYING_UP_IN_GARAGE(int id, BOOL toggle) { invoke<Void>(0xE64FD0, id, toggle); }
static void ENABLE_SAVING_IN_GARAGE(Hash garageHash, BOOL toggle) { invoke<Void>(0xE65030, garageHash, toggle); }
static void CLOSE_SAFEHOUSE_GARAGES() { invoke<Void>(0xE65090); }
static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0xE650A0, x, y, z, radius, hash, p5); }
static BOOL IS_POINT_IN_ANGLED_AREA(float xPos, float yPos, float zPos, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ) { return invoke<BOOL>(0xE65110, xPos, yPos, zPos, x1, y1, z1, x2, y2, z2, width, debug, includeZ); }
static void SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(Object object, BOOL toggle) { invoke<Void>(0xE651F0, object, toggle); }
static void SET_OBJECT_PHYSICS_PARAMS(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { invoke<Void>(0xE65250, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); }
static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0xE65280, p0, p1); }
static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { invoke<Void>(0xE652F0, object, toggle); }
static BOOL IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, BOOL p4) { return invoke<BOOL>(0xE65350, x, y, z, range, p4); }
static BOOL IS_OBJECT_NEAR_POINT(Hash objectHash, float x, float y, float z, float range) { return invoke<BOOL>(0xE65450, objectHash, x, y, z, range); }
static void REMOVE_OBJECT_HIGH_DETAIL_MODEL(Object object) { invoke<Void>(0xE65480, object); }
static void BREAK_OBJECT_FRAGMENT_CHILD(Object p0, Any p1, BOOL p2) { invoke<Void>(0xE654B0, p0, p1, p2); }
static void DAMAGE_OBJECT_FRAGMENT_CHILD(Any p0, Any p1, Any p2) { invoke<Void>(0xE654D0, p0, p1, p2); }
static void FIX_OBJECT_FRAGMENT(Object object) { invoke<Void>(0xE654F0, object); }
static void TRACK_OBJECT_VISIBILITY(Object object) { invoke<Void>(0xE65570, object); }
static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0xE655B0, object); }
static void SET_OBJECT_IS_SPECIAL_GOLFBALL(Object object, BOOL toggle) { invoke<Void>(0xE65620, object, toggle); }
static void SET_OBJECT_TAKES_DAMAGE_FROM_COLLIDING_WITH_BUILDINGS(Any p0, BOOL p1) { invoke<Void>(0xE65680, p0, p1); }
static void ALLOW_DAMAGE_EVENTS_FOR_NON_NETWORKED_OBJECTS(BOOL value) { invoke<Void>(0xE656E0, value); }
static void SET_CUTSCENES_WEAPON_FLASHLIGHT_ON_THIS_FRAME(Object object, BOOL toggle) { invoke<Void>(0xE65700, object, toggle); }
static Object GET_RAYFIRE_MAP_OBJECT(float x, float y, float z, float radius, const char* name) { return invoke<Object>(0xE65770, x, y, z, radius, name); }
static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object, int state) { invoke<Void>(0xE65880, object, state); }
static int GET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object) { return invoke<int>(0xE65890, object); }
static BOOL DOES_RAYFIRE_MAP_OBJECT_EXIST(Object object) { return invoke<BOOL>(0xE658E0, object); }
static float GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Object object) { return invoke<float>(0xE65770, object); }
static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0xE65960, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); }
static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0xE65960, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash); }
static void FORCE_PICKUP_ROTATE_FACE_UP() { invoke<Void>(0xE659F0); }
static void SET_CUSTOM_PICKUP_WEAPON_HASH(Hash pickupHash, Pickup pickup) { invoke<Void>(0xE65A00, pickupHash, pickup); }
static Object CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Object>(0xE65A40, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); }
static Object CREATE_NON_NETWORKED_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Object>(0xE65A90, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); }
static void BLOCK_PLAYERS_FOR_AMBIENT_PICKUP(Any p0, Any p1) { invoke<Void>(0xE65AF0, p0, p1); }
static Object CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0xE65B40, pickupHash, x, y, z, placeOnGround, modelHash); }
static Object CREATE_NON_NETWORKED_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0xE65B80, pickupHash, x, y, z, placeOnGround, modelHash); }
static void ATTACH_PORTABLE_PICKUP_TO_PED(Object pickupObject, Ped ped) { invoke<Void>(0xE65BC0, pickupObject, ped); }
static void DETACH_PORTABLE_PICKUP_FROM_PED(Object pickupObject) { invoke<Void>(0xE65BD0, pickupObject); }
static void FORCE_PORTABLE_PICKUP_LAST_ACCESSIBLE_POSITION_SETTING(Object object) { invoke<Void>(0xE65C50, object); }
static void HIDE_PORTABLE_PICKUP_WHEN_DETACHED(Object pickupObject, BOOL toggle) { invoke<Void>(0xE65CA0, pickupObject, toggle); }
static void SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Hash modelHash, int number) { invoke<Void>(0xE65D00, modelHash, number); }
static void SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(BOOL toggle) { invoke<Void>(0xE65DC0, toggle); }
static vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, float p3, float p4) { return invoke<vector3>(0xE65E10, x, y, z, p3, p4); }
static void ADD_EXTENDED_PICKUP_PROBE_AREA(float x, float y, float z, float radius) { invoke<Void>(0xE65F20, x, y, z, radius); }
static void CLEAR_EXTENDED_PICKUP_PROBE_AREAS() { invoke<Void>(0xE65F90); }
static vector3 GET_PICKUP_COORDS(Pickup pickup) { return invoke<vector3>(0xE65FA0, pickup); }
static void SUPPRESS_PICKUP_SOUND_FOR_PICKUP(Any p0, Any p1) { invoke<Void>(0xE66040, p0, p1); }
static void REMOVE_ALL_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0xE660A0, pickupHash); }
static BOOL HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) { return invoke<BOOL>(0xE660C0, pickup); }
static void REMOVE_PICKUP(Pickup pickup) { invoke<Void>(0xE660F0, pickup); }
static void CREATE_MONEY_PICKUPS(float x, float y, float z, int value, int amount, Hash model) { invoke<Void>(0xE66100, x, y, z, value, amount, model); }
static BOOL DOES_PICKUP_EXIST(Pickup pickup) { return invoke<BOOL>(0xE66120, pickup); }
static BOOL DOES_PICKUP_OBJECT_EXIST(Object pickupObject) { return invoke<BOOL>(0xE66170, pickupObject); }
static Object GET_PICKUP_OBJECT(Pickup pickup) { return invoke<Object>(0xE661A0, pickup); }
static BOOL IS_OBJECT_A_PICKUP(Object object) { return invoke<BOOL>(0xE661C0, object); }
static BOOL IS_OBJECT_A_PORTABLE_PICKUP(Object object) { return invoke<BOOL>(0xE66220, object); }
static BOOL DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0xE66280, pickupHash, x, y, z, radius); }
static void SET_PICKUP_REGENERATION_TIME(Pickup pickup, int duration) { invoke<Void>(0xE663A0, pickup, duration); }
static void FORCE_PICKUP_REGENERATE(Any p0) { invoke<Void>(0xE663B0, p0); }
static void SET_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_OF_TYPE(Player player, Hash pickupHash, BOOL toggle) { invoke<Void>(0xE66420, player, pickupHash, toggle); }
static void SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Hash modelHash, BOOL toggle) { invoke<Void>(0xE66490, modelHash, toggle); }
static void ALLOW_ALL_PLAYERS_TO_COLLECT_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0xE664D0, pickupHash); }
static void SET_TEAM_PICKUP_OBJECT(Object object, Any p1, BOOL p2) { invoke<Void>(0xE664F0, object, p1, p2); }
static void PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Object object, BOOL p1, BOOL p2) { invoke<Void>(0xE66580, object, p1, p2); }
static void SET_PICKUP_OBJECT_GLOW_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66620, pickup, toggle); }
static void SET_PICKUP_GLOW_OFFSET(Pickup pickup, float p1) { invoke<Void>(0xE666F0, pickup, p1); }
static void SET_PICKUP_OBJECT_GLOW_OFFSET(Pickup pickup, float p1, BOOL p2) { invoke<Void>(0xE66740, pickup, p1, p2); }
static void SET_OBJECT_GLOW_IN_SAME_TEAM(Pickup pickup) { invoke<Void>(0xE667C0, pickup); }
static void SET_PICKUP_OBJECT_ARROW_MARKER(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66810, pickup, toggle); }
static void ALLOW_PICKUP_ARROW_MARKER_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66870, pickup, toggle); }
static int GET_DEFAULT_AMMO_FOR_WEAPON_PICKUP(Hash pickupHash) { return invoke<int>(0xE668D0, pickupHash); }
static void SET_PICKUP_GENERATION_RANGE_MULTIPLIER(float multiplier) { invoke<Void>(0xE66960, multiplier); }
static float GET_PICKUP_GENERATION_RANGE_MULTIPLIER() { return invoke<float>(0xE669F0); }
static void SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(BOOL p0) { invoke<Void>(0xE66A10, p0); }
static void SET_PICKUP_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66A30, pickup, toggle); }
static void SET_PICKUP_TRANSPARENT_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66A80, pickup, toggle); }
static void SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66AD0, pickup, toggle); }
static void SET_PICKUP_OBJECT_TRANSPARENT_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66B20, pickup, toggle); }
static void SET_PICKUP_OBJECT_ALPHA_WHEN_TRANSPARENT(int p0) { invoke<Void>(0xE66B80, p0); }
static void SET_PORTABLE_PICKUP_PERSIST(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66BA0, pickup, toggle); }
static void ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66C00, pickup, toggle); }
static void FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66C70, pickup, toggle); }
static void ALLOW_PICKUP_BY_NONE_PARTICIPANT(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66CD0, pickup, toggle); }
static void SUPPRESS_PICKUP_REWARD_TYPE(int rewardType, BOOL suppress) { invoke<Void>(0xE66D20, rewardType, suppress); }
static void CLEAR_ALL_PICKUP_REWARD_TYPE_SUPPRESSION() { invoke<Void>(0xE66D50); }
static void CLEAR_PICKUP_REWARD_TYPE_SUPPRESSION(int rewardType) { invoke<Void>(0xE66D60, rewardType); }
static void RENDER_FAKE_PICKUP_GLOW(float x, float y, float z, int colorIndex) { invoke<Void>(0xE66D80, x, y, z, colorIndex); }
static void SET_PICKUP_OBJECT_COLLECTABLE_IN_VEHICLE(Pickup pickup) { invoke<Void>(0xE66DB0, pickup); }
static void SET_PICKUP_TRACK_DAMAGE_EVENTS(Pickup pickup, BOOL toggle) { invoke<Void>(0xE66DF0, pickup, toggle); }
static void SET_ENTITY_FLAG_SUPPRESS_SHADOW(Entity entity, BOOL toggle) { invoke<Void>(0xE66E50, entity, toggle); }
static void SET_ENTITY_FLAG_RENDER_SMALL_SHADOW(Object object, BOOL toggle) { invoke<Void>(0xE66EA0, object, toggle); }
static Hash GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Hash pickupHash) { return invoke<Hash>(0xE66EF0, pickupHash); }
static Hash GET_PICKUP_TYPE_FROM_WEAPON_HASH(Hash weaponHash) { return invoke<Hash>(0xE66FA0, weaponHash); }
static BOOL IS_PICKUP_WEAPON_OBJECT_VALID(Object object) { return invoke<BOOL>(0xE67010, object); }
static int GET_OBJECT_TINT_INDEX(Object object) { return invoke<int>(0xE67060, object); }
static void SET_OBJECT_TINT_INDEX(Object object, int textureVariation) { invoke<Void>(0xE670C0, object, textureVariation); }
static BOOL SET_TINT_INDEX_CLOSEST_BUILDING_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, int textureVariation) { return invoke<BOOL>(0xE67150, x, y, z, radius, modelHash, textureVariation); }
static void SET_PROP_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0xE67210, p0, p1); }
static BOOL SET_PROP_LIGHT_COLOR(Object object, BOOL p1, int r, int g, int b) { return invoke<BOOL>(0xE67280, object, p1, r, g, b); }
static BOOL IS_PROP_LIGHT_OVERRIDEN(Object object) { return invoke<BOOL>(0xE672C0, object); }
static void SET_OBJECT_IS_VISIBLE_IN_MIRRORS(Object object, BOOL toggle) { invoke<Void>(0xE672F0, object, toggle); }
static void SET_OBJECT_SPEED_BOOST_AMOUNT(Object object, Any p1) { invoke<Void>(0xE67350, object, p1); }
static void SET_OBJECT_SPEED_BOOST_DURATION(Object object, float duration) { invoke<Void>(0xE673A0, object, duration); }
static Hash CONVERT_OLD_PICKUP_TYPE_TO_NEW(Hash pickupHash) { return invoke<Hash>(0xE67410, pickupHash); }
static void SET_FORCE_OBJECT_THIS_FRAME(float x, float y, float z, float p3) { invoke<Void>(0xE67430, x, y, z, p3); }
static void ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Object object) { invoke<Void>(0xE67490, object); }
static void SET_DISABLE_COLLISIONS_BETWEEN_CARS_AND_CAR_PARACHUTE(Any p0) { invoke<Void>(0xE674D0, p0); }
static void SET_PROJECTILES_SHOULD_EXPLODE_ON_CONTACT(Entity entity, Any p1) { invoke<Void>(0xE674F0, entity, p1); }
static void SET_DRIVE_ARTICULATED_JOINT(Object object, BOOL toggle, int p2) { invoke<Void>(0xE67550, object, toggle, p2); }
static void SET_DRIVE_ARTICULATED_JOINT_WITH_INFLICTOR(Object object, BOOL toggle, int p2, Ped ped) { invoke<Void>(0xE67550, object, toggle, p2, ped); }
static void SET_OBJECT_IS_A_PRESSURE_PLATE(Object object, BOOL toggle) { invoke<Void>(0xE675F0, object, toggle); }
static void SET_WEAPON_IMPACTS_APPLY_GREATER_FORCE(Object object, BOOL p1) { invoke<Void>(0xE67650, object, p1); }
static BOOL GET_IS_ARTICULATED_JOINT_AT_MIN_ANGLE(Object object, Any p1) { return invoke<BOOL>(0xE676B0, object, p1); }
static BOOL GET_IS_ARTICULATED_JOINT_AT_MAX_ANGLE(Any p0, Any p1) { return invoke<BOOL>(0xE67720, p0, p1); }
static void SET_IS_OBJECT_ARTICULATED(Object object, BOOL toggle) { invoke<Void>(0xE67790, object, toggle); }
static void SET_IS_OBJECT_BALL(Object object, BOOL toggle) { invoke<Void>(0xE677F0, object, toggle); }
static BOOL IS_CONTROL_ENABLED(int control, int action) { return invoke<BOOL>(0xE6A3F0, control, action); }
static BOOL IS_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0xE6A450, control, action); }
static BOOL IS_CONTROL_RELEASED(int control, int action) { return invoke<BOOL>(0xE6A4C0, control, action); }
static BOOL IS_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0xE6A530, control, action); }
static BOOL IS_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0xE6A5A0, control, action); }
static int GET_CONTROL_VALUE(int control, int action) { return invoke<int>(0xE6A6A0, control, action); }
static float GET_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xE6A720, control, action); }
static void SET_USE_ADJUSTED_MOUSE_COORDS(BOOL toggle) { invoke<Void>(0xE6A780, toggle); }
static float GET_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0xE6A7A0, control, action); }
static BOOL SET_CONTROL_VALUE_NEXT_FRAME(int control, int action, float value) { return invoke<BOOL>(0xE6A800, control, action, value); }
static BOOL IS_DISABLED_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0xE6A880, control, action); }
static BOOL IS_DISABLED_CONTROL_RELEASED(int control, int action) { return invoke<BOOL>(0xE6A920, control, action); }
static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0xE6A9C0, control, action); }
static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0xE6AA60, control, action); }
static float GET_DISABLED_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xE6AB00, control, action); }
static float GET_DISABLED_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0xE6ABA0, control, action); }
static int GET_CONTROL_HOW_LONG_AGO(int control) { return invoke<int>(0xE6AC40, control); }
static BOOL IS_USING_KEYBOARD_AND_MOUSE(int control) { return invoke<BOOL>(0xE6AC90, control); }
static BOOL IS_USING_CURSOR(int control) { return invoke<BOOL>(0xE6ACA0, control); }
static BOOL SET_CURSOR_POSITION(float x, float y) { return invoke<BOOL>(0xE6ACF0, x, y); }
static BOOL IS_USING_REMOTE_PLAY(int control) { return invoke<BOOL>(0xE6AD00, control); }
static BOOL HAVE_CONTROLS_CHANGED(int control) { return invoke<BOOL>(0xE6AD50, control); }
static const char* GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(int control, int action, BOOL allowXOSwap) { return invoke<const char*>(0xE6AD80, control, action, allowXOSwap); }
static const char* GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(int control, int controlGroup, BOOL allowXOSwap) { return invoke<const char*>(0xE6AE30, control, controlGroup, allowXOSwap); }
static void SET_CONTROL_LIGHT_EFFECT_COLOR(int control, int red, int green, int blue) { invoke<Void>(0xE6AEE0, control, red, green, blue); }
static void CLEAR_CONTROL_LIGHT_EFFECT(int control) { invoke<Void>(0xE6AF80, control); }
static void SET_CONTROL_SHAKE(int control, int duration, int frequency) { invoke<Void>(0xE6AFC0, control, duration, frequency); }
static void SET_CONTROL_TRIGGER_SHAKE(int control, int leftDuration, int leftFrequency, int rightDuration, int rightFrequency) { invoke<Void>(0xE6B030, control, leftDuration, leftFrequency, rightDuration, rightFrequency); }
static void STOP_CONTROL_SHAKE(int control) { invoke<Void>(0xE6B040, control); }
static void SET_CONTROL_SHAKE_SUPPRESSED_ID(int control, int uniqueId) { invoke<Void>(0xE6AFC0, control, uniqueId); }
static void CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(int control) { invoke<Void>(0xE6B0C0, control); }
static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0xE6B100); }
static BOOL IS_MOUSE_LOOK_INVERTED() { return invoke<BOOL>(0xE6B120); }
static int GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0xE6B130); }
static int GET_LOCAL_PLAYER_GAMEPAD_AIM_STATE() { return invoke<int>(0xE6B140); }
static BOOL GET_IS_USING_ALTERNATE_HANDBRAKE() { return invoke<BOOL>(0xE6B150); }
static BOOL GET_IS_USING_ALTERNATE_DRIVEBY() { return invoke<BOOL>(0xE6B170); }
static BOOL GET_ALLOW_MOVEMENT_WHILE_ZOOMED() { return invoke<BOOL>(0xE6B190); }
static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL toggle) { invoke<Void>(0xE6B1B0, toggle); }
static void SET_INPUT_EXCLUSIVE(int control, int action) { invoke<Void>(0xE6B1D0, control, action); }
static void DISABLE_CONTROL_ACTION(int control, int action, BOOL disableRelatedActions) { invoke<Void>(0xE6B220, control, action, disableRelatedActions); }
static void ENABLE_CONTROL_ACTION(int control, int action, BOOL enableRelatedActions) { invoke<Void>(0xE6B2B0, control, action, enableRelatedActions); }
static void DISABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xE6B340, control); }
static void ENABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xE6B390, control); }
static BOOL INIT_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0xE6B3C0, schemeName); }
static BOOL SWITCH_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0xE6B3D0, schemeName); }
static void SHUTDOWN_PC_SCRIPTED_CONTROLS() { invoke<Void>(0xE6B3E0); }
static void ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(int control) { invoke<Void>(0xE6B3F0, control); }
static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL nodeEnabled, BOOL unknown2) { invoke<Void>(0xE6F500, x1, y1, z1, x2, y2, z2, nodeEnabled, unknown2); }
static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL unknown1, BOOL unknown2, BOOL unknown3) { invoke<Void>(0xE6F530, x1, y1, z1, x2, y2, z2, width, unknown1, unknown2, unknown3); }
static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, Any p7) { invoke<Void>(0xE6F570, x1, y1, z1, x2, y2, z2, p6, p7); }
static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, vector3* outPosition, int flags) { return invoke<BOOL>(0xE6F5A0, x, y, z, onGround, outPosition, flags); }
static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, vector3* outPosition, int nodeFlags, float p5, float p6) { return invoke<BOOL>(0xE6F6F0, x, y, z, outPosition, nodeFlags, p5, p6); }
static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, vector3* outPosition, float unknown1, float unknown2) { return invoke<BOOL>(0xE6F7D0, x, y, z, outPosition, unknown1, unknown2); }
static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, vector3* outPosition, float* outHeading, int nodeType, float p6, float p7) { return invoke<BOOL>(0xE6F6F0, x, y, z, outPosition, outHeading, nodeType, p6, p7); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, vector3* outPosition, int nodeFlags, float unknown1, float unknown2) { return invoke<BOOL>(0xE6F990, x, y, z, nthClosest, outPosition, nodeFlags, unknown1, unknown2); }
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodeFlags, float p5, float p6) { return invoke<int>(0xE6F990, x, y, z, nth, nodeFlags, p5, p6); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, vector3* outPosition, float* outHeading, int* outNumLanes, int nodeFlags, float unknown3, float unknown4) { return invoke<BOOL>(0xE6F990, x, y, z, nthClosest, outPosition, outHeading, outNumLanes, nodeFlags, unknown3, unknown4); }
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, vector3* outPosition, float* outHeading, int nodeFlags, float p7, float p8) { return invoke<int>(0xE6F990, x, y, z, nthClosest, outPosition, outHeading, nodeFlags, p7, p8); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, vector3* outPosition, float* outHeading, int nodeFlags, float p10, float p11) { return invoke<BOOL>(0xE6F990, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodeFlags, p10, p11); }
static BOOL GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, int* density, int* flags) { return invoke<BOOL>(0xE6FDD0, x, y, z, density, flags); }
static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0xE6FE00, vehicleNodeId); }
static void GET_VEHICLE_NODE_POSITION(int nodeId, vector3* outPosition) { invoke<Void>(0xE6FE20, nodeId, outPosition); }
static BOOL GET_VEHICLE_NODE_IS_GPS_ALLOWED(int nodeID) { return invoke<BOOL>(0xE6FF00, nodeID); }
static BOOL GET_VEHICLE_NODE_IS_SWITCHED_OFF(int nodeID) { return invoke<BOOL>(0xE6FF50, nodeID); }
static BOOL GET_CLOSEST_ROAD(float x, float y, float z, float p3, int p4, vector3* p5, vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10) { return invoke<BOOL>(0xE6FFA0, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); }
static BOOL LOAD_ALL_PATH_NODES(BOOL set) { return invoke<BOOL>(0xE70080, set); }
static void SET_ALLOW_STREAM_PROLOGUE_NODES(BOOL toggle) { invoke<Void>(0xE700F0, toggle); }
static void SET_ALLOW_STREAM_HEIST_ISLAND_NODES(int type) { invoke<Void>(0xE70110, type); }
static BOOL ARE_NODES_LOADED_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xE70130, x1, y1, x2, y2); }
static BOOL REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xE70170, x1, y1, x2, y2); }
static void SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0xE70220, p0, p1, p2, p3, p4, p5, p6); }
static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7) { invoke<Void>(0xE70220, x1, y1, z1, x2, y2, z2, width, p7); }
static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xE70260, multiplier); }
static void ADJUST_AMBIENT_PED_SPAWN_DENSITIES_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xE70270, p0, p1, p2, p3, p4, p5, p6); }
static void SET_PED_PATHS_BACK_TO_ORIGINAL(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0xE70310, x1, y1, z1, x2, y2, z2, p6); }
static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, vector3* outPosition, int* nodeId) { return invoke<BOOL>(0xE703C0, x, y, z, radius, p4, p5, p6, outPosition, nodeId); }
static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { invoke<Void>(0xE705B0, x, y, z, streetName, crossingRoad); }
static int GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, BOOL p3, int* direction, float* p5, float* distToNxJunction) { return invoke<int>(0xE70640, x, y, z, p3, direction, p5, distToNxJunction); }
static void SET_IGNORE_NO_GPS_FLAG(BOOL toggle) { invoke<Void>(0xE706A0, toggle); }
static void SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(BOOL toggle) { invoke<Void>(0xE706A0, toggle); }
static void SET_GPS_DISABLED_ZONE(float x1, float y1, float z1, float x2, float y2, float z3) { invoke<Void>(0xE706E0, x1, y1, z1, x2, y2, z3); }
static int GET_GPS_BLIP_ROUTE_LENGTH() { return invoke<int>(0xE707A0); }
static BOOL GET_POS_ALONG_GPS_TYPE_ROUTE(vector3* result, BOOL p1, float p2, int p3) { return invoke<BOOL>(0xE707D0, result, p1, p2, p3); }
static BOOL GET_GPS_BLIP_ROUTE_FOUND() { return invoke<BOOL>(0xE708C0); }
static BOOL GET_ROAD_BOUNDARY_USING_HEADING(float x, float y, float z, float heading, vector3* outPosition) { return invoke<BOOL>(0xE708F0, x, y, z, heading, outPosition); }
static BOOL GET_POSITION_BY_SIDE_OF_ROAD(float x, float y, float z, int p3, vector3* outPosition) { return invoke<BOOL>(0xE70960, x, y, z, p3, outPosition); }
static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) { return invoke<BOOL>(0xE70A00, x, y, z, vehicle); }
static int GET_NEXT_GPS_DISABLED_ZONE_INDEX() { return invoke<int>(0xE70AB0); }
static void SET_GPS_DISABLED_ZONE_AT_INDEX(float x1, float y1, float z1, float x2, float y2, float z2, int index) { invoke<Void>(0xE706E0, x1, y1, z1, x2, y2, z2, index); }
static void CLEAR_GPS_DISABLED_ZONE_AT_INDEX(int index) { invoke<Void>(0xE70BA0, index); }
static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { invoke<Void>(0xE70BD0, x, y, radius); }
static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0xE70C20); }
static BOOL IS_NAVMESH_REQUIRED_REGION_IN_USE() { return invoke<BOOL>(0xE70C40); }
static void DISABLE_NAVMESH_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle) { invoke<Void>(0xE70C70, x1, y1, z1, x2, y2, z2, toggle); }
static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0xE70C90); }
static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xE70CB0, x1, y1, z1, x2, y2, z2); }
static int GET_NUM_NAVMESHES_EXISTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xE70CE0, x1, y1, z1, x2, y2, z2); }
static int ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<int>(0xE70D10, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0xE70DD0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0xE70E90, p0); }
static BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0xE70EC0, p0); }
static float GET_APPROX_HEIGHT_FOR_POINT(float x, float y) { return invoke<float>(0xE70EF0, x, y); }
static float GET_APPROX_HEIGHT_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0xE70F20, x1, y1, x2, y2); }
static float GET_APPROX_FLOOR_FOR_POINT(float x, float y) { return invoke<float>(0xE70F60, x, y); }
static float GET_APPROX_FLOOR_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0xE70F90, x1, y1, x2, y2); }
static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xDF67C0, x1, y1, z1, x2, y2, z2); }
static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0xE8FBF0, pedType, modelHash, x, y, z, heading, isNetwork, bScriptHostPed); }
static void DELETE_PED(Ped* ped) { invoke<Void>(0xE8FC40, ped); }
static Ped CLONE_PED(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag) { return invoke<Ped>(0xE8FC50, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag); }
static Ped CLONE_PED_ALT(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag, BOOL p4) { return invoke<Ped>(0xE8FC50, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag, p4); }
static void CLONE_PED_TO_TARGET(Ped ped, Ped targetPed) { invoke<Void>(0xE8FC50, ped, targetPed); }
static void CLONE_PED_TO_TARGET_ALT(Ped ped, Ped targetPed, BOOL p2) { invoke<Void>(0xE8FC50, ped, targetPed, p2); }
static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0xE8FE30, ped, vehicle, atGetIn); }
static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xE8FE60, ped, modelHash); }
static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0xE8FF40, ped, atGetIn); }
static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xE8FF70, x1, y1, z1, x2, y2, z2); }
static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0xE90020, ped); }
static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0xE90080, ped); }
static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0xE900E0, ped); }
static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0xE90140, ped, p1); }
static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0xE901C0, ped); }
static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0xE90230, ped); }
static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0xE90260, ped); }
static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0xE902C0, ped); }
static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0xE8FBF0, vehicle, pedType, modelHash, seat, isNetwork, bScriptHostPed); }
static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0xE90360, ped, heading); }
static void FORCE_ALL_HEADING_VALUES_TO_ALIGN(Ped ped) { invoke<Void>(0xE90450, ped); }
static BOOL IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) { return invoke<BOOL>(0xE90460, ped, otherPed, angle); }
static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0xE90490, ped); }
static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0xE90500, ped); }
static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0xE90560, ped, x1, y1, z1, x2, y2, z2, p7, p8); }
static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return invoke<BOOL>(0xE905A0, x1, y1, z1, x2, y2, z2, p6, p7); }
static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0xE905E0, ped); }
static void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0xE90640, ped, accuracy); }
static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0xE906D0, ped); }
static void SET_AMBIENT_LAW_PED_ACCURACY_MODIFIER(float multiplier) { invoke<Void>(0xE90740, multiplier); }
static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xE90770, ped, modelHash); }
static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0xE90830, ped, weaponHash); }
static void REMOVE_PED_ELEGANTLY(Ped* ped) { invoke<Void>(0xE90840, ped); }
static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0xE90850, ped, amount); }
static void SET_PED_ARMOUR(Ped ped, int amount) { invoke<Void>(0xE90930, ped, amount); }
static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0xE90A10, ped, vehicle, seatIndex); }
static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { invoke<Void>(0xE90A30, ped, toggle); }
static BOOL CAN_CREATE_RANDOM_PED(BOOL p0) { return invoke<BOOL>(0xE90A90, p0); }
static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0xE90B50, posX, posY, posZ); }
static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0xE90B50, vehicle, returnHandle); }
static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0xE90C00); }
static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0xE90C50); }
static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0xE90CB0, ped); }
static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { invoke<Void>(0xE90D10, ped, toggle); }
static void SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(BOOL toggle) { invoke<Void>(0xE90D70, toggle); }
static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0xE90D90, ped); }
static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0xE90E00, ped); }
static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL includeEntering) { return invoke<Vehicle>(0xE90E80, ped, includeEntering); }
static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0xE90EB0, ped); }
static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xE90F10, multiplier); }
static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<Void>(0xE90F20, p0, p1); }
static void SUPPRESS_AMBIENT_PED_AGGRESSIVE_CLEANUP_THIS_FRAME() { invoke<Void>(0xE90F40); }
static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { invoke<Void>(0xE90F50, x, y, z); }
static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xE90FB0, x1, y1, z1, x2, y2, z2); }
static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0xE91030); }
static void INSTANTLY_FILL_PED_POPULATION() { invoke<Void>(0xDF67C0); }
static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0xE91050, ped); }
static Ped GET_MOUNT(Ped ped) { return invoke<Ped>(0xE91090, ped); }
static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0xE910D0, ped); }
static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xE91130, ped, vehicle); }
static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0xE911D0, ped, amount); }
static int GET_PED_MONEY(Ped ped) { return invoke<int>(0xE91230, ped); }
static void SET_HEALTH_SNACKS_CARRIED_BY_ALL_NEW_PEDS(float p0, Any p1) { invoke<Void>(0xE91280, p0, p1); }
static void SET_AMBIENT_PEDS_DROP_MONEY(BOOL p0) { invoke<Void>(0xE912C0, p0); }
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(BOOL p0) { invoke<Void>(0xE912F0, p0); }
static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { invoke<Void>(0xE91310, ped, toggle); }
static void SET_PED_UPPER_BODY_DAMAGE_ONLY(Ped ped, BOOL toggle) { invoke<Void>(0xE91360, ped, toggle); }
static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xE913C0, ped, vehicle); }
static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0xE913F0, ped); }
static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0xE91480, ped); }
static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0xE914B0, ped); }
static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0xE91520, ped); }
static vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return invoke<vector3>(0xE91590, ped, p1, p2); }
static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0xE91600, ped); }
static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0xE91670, ped); }
static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0xE916E0, ped); }
static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0xE91750, ped); }
static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0xE917C0, ped); }
static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xE91840, ped, toggle); }
static BOOL GET_PED_DIES_IN_WATER(Ped ped) { return invoke<BOOL>(0xE91890, ped); }
static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE918F0, ped, toggle); }
static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0xE91940, ped); }
static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { invoke<Void>(0xE91990, ped, toggle); }
static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE919F0, ped, toggle); }
static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) { return invoke<BOOL>(0xE91A50, ped, outBone); }
static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0xE91AC0, ped); }
static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0xE91B10, value); }
static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xE91B10); }
static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0xE91B50, modifier); }
static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xE91B50); }
static void SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(Ped ped, BOOL p1) { invoke<Void>(0xE91B90, ped, p1); }
static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0xE91BE0, ped, toggle); }
static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, int team, BOOL toggle) { invoke<Void>(0xE91BE0, ped, team, toggle); }
static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { invoke<Void>(0xE91BE0, ped, player, toggle); }
static void SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(Ped ped, BOOL toggle) { invoke<Void>(0xE91D40, ped, toggle); }
static void SET_USE_CAMERA_HEADING_FOR_DESIRED_DIRECTION_LOCK_ON_TEST(Ped ped, BOOL toggle) { invoke<Void>(0xE91DA0, ped, toggle); }
static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0xE91E00, ped); }
static void FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) { invoke<Void>(0xE91E70, ped); }
static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0xE91ED0, ped); }
static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0xE91F90, ped); }
static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0xE91FF0, ped); }
static BOOL IS_PED_LANDING(Any p0) { return invoke<BOOL>(0xE92050, p0); }
static BOOL IS_PED_DOING_A_BEAST_JUMP(Any p0) { return invoke<BOOL>(0xE920B0, p0); }
static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0xE92130, ped); }
static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0xE92190, ped); }
static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0xE921F0, ped); }
static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0xE91FF0, ped); }
static BOOL IS_PED_OPENING_DOOR(Ped ped) { return invoke<BOOL>(0xE92280, ped); }
static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0xE92310, ped); }
static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0xE923E0, ped); }
static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, int tintIndex) { invoke<Void>(0xE92450, ped, tintIndex); }
static void GET_PED_PARACHUTE_TINT_INDEX(Ped ped, int* outTintIndex) { invoke<Void>(0xE924A0, ped, outTintIndex); }
static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Ped ped, Any p1) { invoke<Void>(0xE924F0, ped, p1); }
static Object CREATE_PARACHUTE_BAG_OBJECT(Ped ped, BOOL p1, BOOL p2) { return invoke<Object>(0xE92540, ped, p1, p2); }
static void SET_PED_DUCKING(Ped ped, BOOL toggle) { invoke<Void>(0xE925D0, ped, toggle); }
static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xE92630, ped); }
static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0xE92690, ped); }
static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0xE92750, ped, value); }
static void SET_PED_HIGHLY_PERCEPTIVE(Ped ped, BOOL toggle) { invoke<Void>(0xE927B0, ped, toggle); }
static void SET_COP_PERCEPTION_OVERRIDES(float seeingRange, float seeingRangePeripheral, float hearingRange, float visualFieldMinAzimuthAngle, float visualFieldMaxAzimuthAngle, float fieldOfGazeMaxAngle, float p6) { invoke<Void>(0xE92800, seeingRange, seeingRangePeripheral, hearingRange, visualFieldMinAzimuthAngle, visualFieldMaxAzimuthAngle, fieldOfGazeMaxAngle, p6); }
static void SET_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped, float p1) { invoke<Void>(0xE92880, ped, p1); }
static void DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped) { invoke<Void>(0xE928F0, ped); }
static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0xE92940, ped, value); }
static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0xE929A0, ped, value); }
static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0xE92A00, ped, value); }
static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0xE92A60, ped, value); }
static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xE92AC0, ped, angle); }
static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xE92B20, ped, angle); }
static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0xE92B80, ped, range); }
static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0xE92BE0, ped, angle); }
static float GET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped) { return invoke<float>(0xE92C40, ped); }
static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, const char* action) { invoke<Void>(0xE92CA0, ped, p1, action); }
static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0xE92D60, ped); }
static int CREATE_GROUP(int unused) { return invoke<int>(0xE92DC0, unused); }
static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { invoke<Void>(0xE92E40, ped, groupId); }
static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0xE92E50, ped, groupId); }
static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { invoke<Void>(0xE92E60, pedHandle, groupHandle, toggle); }
static void REMOVE_GROUP(int groupId) { invoke<Void>(0xE92E80, groupId); }
static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0xE92E90, ped); }
static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0xE92EA0, ped, groupId); }
static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0xE92ED0, ped); }
static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0xE92F70, groupHandle, separationRange); }
static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms) { invoke<Void>(0xE92F80, ped, ms); }
static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0xE92FC0, ped); }
static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0xE93020, ped, target); }
static Entity GET_PED_TARGET_FROM_COMBAT_PED(Ped ped, Any p1) { return invoke<Entity>(0xE93050, ped, p1); }
static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0xE93080, ped, target); }
static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0xE93130, ped); }
static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0xE931C0, ped); }
static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0xE931F0, ped); }
static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0xE93220, ped, p1); }
static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0xE93250, ped); }
static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0xE93270, ped); }
static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0xE93290, ped); }
static BOOL IS_PED_IN_COVER(Ped ped, BOOL exceptUseWeapon) { return invoke<BOOL>(0xE932C0, ped, exceptUseWeapon); }
static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0xE932C0, ped); }
static BOOL IS_PED_IN_HIGH_COVER(Ped ped) { return invoke<BOOL>(0xE93320, ped); }
static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0xE93350, ped); }
static BOOL SET_PED_PINNED_DOWN(Ped ped, BOOL pinned, int i) { return invoke<BOOL>(0xE93410, ped, pinned, i); }
static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0xE935A0, ped); }
static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0xE935C0, ped); }
static Entity GET_PED_SOURCE_OF_DEATH(Ped ped) { return invoke<Entity>(0xE935E0, ped); }
static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0xE93640, ped); }
static int GET_PED_TIME_OF_DEATH(Ped ped) { return invoke<int>(0xE93690, ped); }
static int COUNT_PEDS_IN_COMBAT_WITH_TARGET(Ped ped) { return invoke<int>(0xE936E0, ped); }
static int COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Ped ped, float x, float y, float z, float radius) { return invoke<int>(0xE936E0, ped, x, y, z, radius); }
static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0xE93820, ped, hash); }
static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0xE93880, ped, hash); }
static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xE93890, relationship, group1, group2); }
static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xE93910, relationship, group1, group2); }
static BOOL ADD_RELATIONSHIP_GROUP(const char* name, Hash* groupHash) { return invoke<BOOL>(0xE93950, name, groupHash); }
static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0xE939C0, groupHash); }
static BOOL DOES_RELATIONSHIP_GROUP_EXIST(Hash groupHash) { return invoke<BOOL>(0xE939D0, groupHash); }
static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0xE93A00, ped1, ped2); }
static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0xE93AB0, ped); }
static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0xE93B10, ped); }
static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0xE93B70, group1, group2); }
static void SET_RELATIONSHIP_GROUP_AFFECTS_WANTED_LEVEL(Hash group, BOOL p1) { invoke<Void>(0xE93BD0, group, p1); }
static void TELL_GROUP_PEDS_IN_AREA_TO_ATTACK(Ped ped, Any p1, float p2, Hash hash, Any p4, Any p5) { invoke<Void>(0xE93C60, ped, p1, p2, hash, p4, p5); }
static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) { invoke<Void>(0xE93C80, ped, toggle); }
static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, int maxFriends) { invoke<Void>(0xE93CE0, ped, radius, maxFriends); }
static BOOL IS_PED_RESPONDING_TO_EVENT(Ped ped, Any event) { return invoke<BOOL>(0xE93D60, ped, event); }
static BOOL GET_POS_FROM_FIRED_EVENT(Ped ped, int eventType, Any* outData) { return invoke<BOOL>(0xE93DC0, ped, eventType, outData); }
static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0xE93E40, ped, patternHash); }
static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0xE93E50, ped, shootRate); }
static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { invoke<Void>(0xE93F00, ped, combatType, p2); }
static float GET_COMBAT_FLOAT(Ped ped, int p1) { return invoke<float>(0xE93F70, ped, p1); }
static void GET_GROUP_SIZE(int groupID, Any* p1, int* sizeInMembers) { invoke<Void>(0xE93FF0, groupID, p1, sizeInMembers); }
static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0xE94080, groupId); }
static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0xE940C0, ped); }
static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0xE940E0, ped); }
static Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<Player>(0xE94140, ped); }
static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0xE94160, groupId, formationType); }
static void SET_GROUP_FORMATION_SPACING(int groupId, float x, float y, float z) { invoke<Void>(0xE94160, groupId, x, y, z); }
static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0xE94160, groupHandle); }
static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0xE94300, ped); }
static Vehicle GET_VEHICLE_PED_IS_ENTERING(Ped ped) { return invoke<Vehicle>(0xE94380, ped); }
static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0xE943A0, ped, toggle); }
static void APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, BOOL p2, Any p3) { invoke<Void>(0xE94490, ped, damageAmount, p2, p3); }
static int GET_TIME_PED_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash) { return invoke<int>(0xE94600, ped, weaponHash); }
static void SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) { invoke<Void>(0xE946B0, ped, toggle); }
static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { invoke<Void>(0xE94710, ped, toggle); }
static int GET_PED_TYPE(Ped ped) { return invoke<int>(0xE94770, ped); }
static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0xE947D0, ped, toggle); }
static void SET_PED_HEALTH_PENDING_LAST_DAMAGE_EVENT_OVERRIDE_FLAG(BOOL toggle) { invoke<Void>(0xE94860, toggle); }
static void SET_PED_MAX_HEALTH(Ped ped, int value) { invoke<Void>(0xE94890, ped, value); }
static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0xE94900, ped); }
static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0xE94950, ped, value); }
static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0xE949D0, ped, value); }
static void SET_CORPSE_RAGDOLL_FRICTION(Ped ped, float p1) { invoke<Void>(0xE94A30, ped, p1); }
static void SET_PED_VEHICLE_FORCED_SEAT_USAGE(Ped ped, Vehicle vehicle, int seatIndex, int flags, Any p4) { invoke<Void>(0xE94A80, ped, vehicle, seatIndex, flags, p4); }
static void CLEAR_ALL_PED_VEHICLE_FORCED_SEAT_USAGE(Ped ped) { invoke<Void>(0xE94AA0, ped); }
static void SET_PED_CAN_BE_KNOCKED_OFF_BIKE(Any p0, Any p1) { invoke<Void>(0xE94AF0, p0, p1); }
static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0xE94B00, ped, state); }
static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0xE94B80, ped); }
static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0xE94C40, ped); }
static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xE94C50, ped, posX, posY, posZ); }
static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0xE94CC0, groupID, memberNumber); }
static Ped GET_PED_AS_GROUP_LEADER(int groupID) { return invoke<Ped>(0xE94D40, groupID); }
static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0xE94DB0, ped, toggle); }
static void SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(Ped ped, BOOL toggle) { invoke<Void>(0xE94E10, ped, toggle); }
static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0xE94E60, ped); }
static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0xE94E60, ped); }
static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xE94F30, ped, posX, posY, posZ); }
static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE94FC0, ped, toggle); }
static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0xE95020, toggle); }
static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xE95020, toggle); }
static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xE95020, toggle); }
static BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0xE95090); }
static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { invoke<Void>(0xE950B0, ped, toggle); }
static void SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xE95100, ped, p1, p2); }
static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0xE95170, ped); }
static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0xE951F0, ped); }
static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0xE95220, ped); }
static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { invoke<Void>(0xE952E0, ped, toggle); }
static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0xE95360, ped, toggle); }
static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { invoke<Void>(0xE953E0, ped, toggle); }
static void SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xE95440, ped, toggle, p2); }
static int GET_PED_ALERTNESS(Ped ped) { return invoke<int>(0xE954C0, ped); }
static void SET_PED_ALERTNESS(Ped ped, int value) { invoke<Void>(0xE95520, ped, value); }
static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE95570, ped, toggle); }
static void SET_PED_MOVEMENT_CLIPSET(Ped ped, const char* clipSet, float transitionSpeed) { invoke<Void>(0xE955D0, ped, clipSet, transitionSpeed); }
static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { invoke<Void>(0xE955D0, ped, p1); }
static void SET_PED_STRAFE_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0xE95660, ped, clipSet); }
static void RESET_PED_STRAFE_CLIPSET(Ped ped) { invoke<Void>(0xE95660, ped); }
static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0xE956D0, ped, clipSet); }
static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0xE956D0, ped); }
static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, const char* clipset) { invoke<Void>(0xE95740, ped, clipset); }
static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xE95750, ped); }
static void SET_PED_MOTION_IN_COVER_CLIPSET_OVERRIDE(Ped ped, const char* p1) { invoke<Void>(0xE957A0, ped, p1); }
static void CLEAR_PED_MOTION_IN_COVER_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xE957B0, ped); }
static void CLEAR_PED_FALL_UPPER_BODY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xE95800, ped); }
static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { invoke<Void>(0xE95850, ped, context); }
static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { invoke<Void>(0xE95850, ped); }
static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, const char* animDict, const char* anim) { return invoke<BOOL>(0xE95920, ped, animDict, anim); }
static void SET_PED_ALTERNATE_WALK_ANIM(Ped ped, const char* animDict, const char* animName, float p3, BOOL p4) { invoke<Void>(0xE95950, ped, animDict, animName, p3, p4); }
static void CLEAR_PED_ALTERNATE_WALK_ANIM(Ped ped, float p1) { invoke<Void>(0xE95980, ped, p1); }
static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, const char* animDictionary, const char* animationName, float p4, BOOL p5) { invoke<Void>(0xE95A20, ped, stance, animDictionary, animationName, p4, p5); }
static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { invoke<Void>(0xE95A50, ped, stance, p2); }
static void SET_PED_GESTURE_GROUP(Ped ped, const char* animGroupGesture) { invoke<Void>(0xE95B00, ped, animGroupGesture); }
static vector3 GET_ANIM_INITIAL_OFFSET_POSITION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<vector3>(0xE95B90, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
static vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<vector3>(0xE95CA0, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xE95DB0, ped, componentId); }
static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0xE95E20, ped, componentId); }
static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xE95E50, ped, componentId); }
static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0xE95EC0, ped, componentId, drawableId); }
static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) { return invoke<int>(0xE95EF0, ped, propId); }
static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) { return invoke<int>(0xE95F20, ped, propId, drawableId); }
static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xE95F50, ped, componentId); }
static BOOL GET_MP_OUTFIT_DATA_FROM_METADATA(Any* p0, Any* p1) { return invoke<BOOL>(0xE95FB0, p0, p1); }
static int GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(int p0) { return invoke<int>(0xE95FE0, p0); }
static int GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(int p0) { return invoke<int>(0xE96000, p0); }
static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xE96020, ped, componentId, drawableId, textureId); }
static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<Void>(0xE960A0, ped, componentId, drawableId, textureId, paletteId); }
static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, int p1) { invoke<Void>(0xE96160, ped, p1); }
static void SET_PED_RANDOM_PROPS(Ped ped) { invoke<Void>(0xE96200, ped); }
static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { invoke<Void>(0xE962B0, ped); }
static void SET_PED_BLEND_FROM_PARENTS(Ped ped, Any p1, Any p2, float p3, float p4) { invoke<Void>(0xE96330, ped, p1, p2, p3, p4); }
static void SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) { invoke<Void>(0xE96350, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); }
static BOOL GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) { return invoke<BOOL>(0xE964B0, ped, headBlendData); }
static void UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) { invoke<Void>(0xE965A0, ped, shapeMix, skinMix, thirdMix); }
static void SET_HEAD_BLEND_EYE_COLOR(Ped ped, int index) { invoke<Void>(0xE96620, ped, index); }
static int GET_HEAD_BLEND_EYE_COLOR(Ped ped) { return invoke<int>(0xE96670, ped); }
static void SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) { invoke<Void>(0xE966D0, ped, overlayID, index, opacity); }
static int GET_PED_HEAD_OVERLAY(Ped ped, int overlayID) { return invoke<int>(0xE96750, ped, overlayID); }
static int GET_PED_HEAD_OVERLAY_NUM(int overlayID) { return invoke<int>(0xE96750, overlayID); }
static void SET_PED_HEAD_OVERLAY_TINT(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) { invoke<Void>(0xE966D0, ped, overlayID, colorType, colorID, secondColorID); }
static void SET_PED_HAIR_TINT(Ped ped, int colorID, int highlightColorID) { invoke<Void>(0xE96960, ped, colorID, highlightColorID); }
static int GET_NUM_PED_HAIR_TINTS() { return invoke<int>(0xE969C0); }
static int GET_NUM_PED_MAKEUP_TINTS() { return invoke<int>(0xE969D0); }
static void GET_PED_HAIR_TINT_COLOR(int hairColorIndex, int* outR, int* outG, int* outB) { invoke<Void>(0xE969E0, hairColorIndex, outR, outG, outB); }
static void GET_PED_MAKEUP_TINT_COLOR(int makeupColorIndex, int* outR, int* outG, int* outB) { invoke<Void>(0xE96A30, makeupColorIndex, outR, outG, outB); }
static BOOL IS_PED_HAIR_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xE96A80, colorId); }
static int GET_DEFAULT_SECONDARY_TINT_FOR_CREATOR(int colorId) { return invoke<int>(0xE96AD0, colorId); }
static BOOL IS_PED_LIPSTICK_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xE96B10, colorId); }
static BOOL IS_PED_BLUSH_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xE96B60, colorId); }
static BOOL IS_PED_HAIR_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xE96BB0, colorID); }
static int GET_DEFAULT_SECONDARY_TINT_FOR_BARBER(int colorID) { return invoke<int>(0xE96C00, colorID); }
static BOOL IS_PED_LIPSTICK_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xE96C40, colorID); }
static BOOL IS_PED_BLUSH_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xE96C90, colorID); }
static BOOL IS_PED_BLUSH_FACEPAINT_TINT_FOR_BARBER(int colorId) { return invoke<BOOL>(0xE96CE0, colorId); }
static int GET_TINT_INDEX_FOR_LAST_GEN_HAIR_TEXTURE(Hash modelHash, int drawableId, int textureId) { return invoke<int>(0xE96D30, modelHash, drawableId, textureId); }
static void SET_PED_MICRO_MORPH(Ped ped, int index, float scale) { invoke<Void>(0xE96E10, ped, index, scale); }
static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0xE96E80, ped); }
static void FINALIZE_HEAD_BLEND(Ped ped) { invoke<Void>(0xE96EE0, ped); }
static void SET_HEAD_BLEND_PALETTE_COLOR(Ped ped, int r, int g, int b, int id) { invoke<Void>(0xE96F30, ped, r, g, b, id); }
static void DISABLE_HEAD_BLEND_PALETTE_COLOR(Ped ped) { invoke<Void>(0xE96FF0, ped); }
static int GET_PED_HEAD_BLEND_FIRST_INDEX(int type) { return invoke<int>(0xE97040, type); }
static int GET_PED_HEAD_BLEND_NUM_HEADS(int type) { return invoke<int>(0xE970A0, type); }
static int SET_PED_PRELOAD_VARIATION_DATA(Ped ped, int slot, int drawableId, int textureId) { return invoke<int>(0xE97110, ped, slot, drawableId, textureId); }
static BOOL HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0xE971D0, ped); }
static void RELEASE_PED_PRELOAD_VARIATION_DATA(Ped ped) { invoke<Void>(0xE97230, ped); }
static int SET_PED_PRELOAD_PROP_DATA(Ped ped, int componentId, int drawableId, int TextureId) { return invoke<int>(0xE97280, ped, componentId, drawableId, TextureId); }
static BOOL HAS_PED_PRELOAD_PROP_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0xE97340, ped); }
static void RELEASE_PED_PRELOAD_PROP_DATA(Ped ped) { invoke<Void>(0xE973A0, ped); }
static int GET_PED_PROP_INDEX(Ped ped, int componentId, Any p2) { return invoke<int>(0xE973F0, ped, componentId, p2); }
static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach, Any p5) { invoke<Void>(0xE97450, ped, componentId, drawableId, TextureId, attach, p5); }
static void KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xE97480, ped, p1, p2, p3, p4); }
static void CLEAR_PED_PROP(Ped ped, int propId, Any p2) { invoke<Void>(0xE97520, ped, propId, p2); }
static void CLEAR_ALL_PED_PROPS(Ped ped, Any p1) { invoke<Void>(0xE97580, ped, p1); }
static void DROP_AMBIENT_PROP(Ped ped) { invoke<Void>(0xE975D0, ped); }
static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0xE97660, ped, componentId); }
static void CLEAR_PED_PARACHUTE_PACK_VARIATION(Ped ped) { invoke<Void>(0xE976C0, ped); }
static void SET_PED_SCUBA_GEAR_VARIATION(Ped ped) { invoke<Void>(0xE97710, ped); }
static void CLEAR_PED_SCUBA_GEAR_VARIATION(Ped ped) { invoke<Void>(0xE97760, ped); }
static BOOL IS_USING_PED_SCUBA_GEAR_VARIATION(Any p0) { return invoke<BOOL>(0xE977B0, p0); }
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xE97810, ped, toggle); }
static void SET_PED_BOUNDS_ORIENTATION(Ped ped, float p1, float p2, float x, float y, float z) { invoke<Void>(0xE97830, ped, p1, p2, x, y, z); }
static void REGISTER_TARGET(Ped ped, Ped target) { invoke<Void>(0xE978D0, ped, target); }
static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) { invoke<Void>(0xE97980, ped, radius); }
static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0xE97A20, x, y, z, xRadius, yRadius, zRadius, pedType); }
static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0xE97A50, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); }
static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { invoke<Void>(0xE97B50, value); }
static BOOL GET_CAN_PED_BE_GRABBED_BY_SCRIPT(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) { return invoke<BOOL>(0xE97B70, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static void SET_DRIVER_RACING_MODIFIER(Ped driver, float modifier) { invoke<Void>(0xE97C60, driver, modifier); }
static void SET_DRIVER_ABILITY(Ped driver, float ability) { invoke<Void>(0xE97CD0, driver, ability); }
static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { invoke<Void>(0xE97D40, driver, aggressiveness); }
static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xE97DB0, ped); }
static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0xE97E30, ped, time1, time2, ragdollType, p4, p5, p6); }
static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float velocity, float p8, float p9, float p10, float p11, float p12, float p13) { return invoke<BOOL>(0xE97E30, ped, time, p2, ragdollType, x, y, z, velocity, p8, p9, p10, p11, p12, p13); }
static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) { invoke<Void>(0xE97EE0, ped, toggle); }
static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xE97F00, ped); }
static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0xE97F70, ped); }
static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0xE98000, ped); }
static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0xE98080, ped); }
static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0xE980F0, ped, toggle); }
static BOOL IS_PED_RUNNING_MELEE_TASK(Ped ped) { return invoke<BOOL>(0xE98110, ped); }
static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0xE98170, ped); }
static BOOL IS_MOBILE_PHONE_TO_PED_EAR(Ped ped) { return invoke<BOOL>(0xE981C0, ped); }
static void SET_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0xE98250, ped, blockingFlag); }
static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0xE98260, ped, blockingFlag); }
static void SET_PED_ANGLED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { invoke<Void>(0xE982D0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { invoke<Void>(0xE98300, ped, x, y, z, radius, p5, p6); }
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Ped ped, Ped target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0xE983F0, ped, target, xOffset, yOffset, zOffset, radius, p6); }
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Ped ped, Vehicle target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0xE98420, ped, target, xOffset, yOffset, zOffset, radius, p6); }
static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { invoke<Void>(0xE98450, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0xE98490, ped, p1, p2, p3, p4); }
static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { invoke<Void>(0xE98550, ped, toggle); }
static vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) { return invoke<vector3>(0xE985B0, ped, p1); }
static BOOL IS_PED_DEFENSIVE_AREA_ACTIVE(Ped ped, BOOL p1) { return invoke<BOOL>(0xE98620, ped, p1); }
static void SET_PED_PREFERRED_COVER_SET(Ped ped, Any itemSet) { invoke<Void>(0xE986A0, ped, itemSet); }
static void REMOVE_PED_PREFERRED_COVER_SET(Ped ped) { invoke<Void>(0xE986F0, ped); }
static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0xE98740, ped); }
static void RESURRECT_PED(Ped ped) { invoke<Void>(0xE987D0, ped); }
static void SET_PED_NAME_DEBUG(Ped ped, const char* name) { invoke<Void>(0xE98870, ped, name); }
static vector3 GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL worldSpace) { return invoke<vector3>(0xE98880, ped, worldSpace); }
static void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xE98960, ped, toggle); }
static void SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { invoke<Void>(0xE989D0, ped, toggle); }
static void SPECIAL_FUNCTION_DO_NOT_USE(Ped ped, BOOL p1) { invoke<Void>(0xE98A30, ped, p1); }
static void RESET_PED_VISIBLE_DAMAGE(Ped ped) { invoke<Void>(0xE98AB0, ped); }
static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any p4) { invoke<Void>(0xE98B00, ped, p1, p2, p3, p4); }
static void APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, const char* woundType) { invoke<Void>(0xE98C50, ped, boneIndex, xRot, yRot, zRot, woundType); }
static void APPLY_PED_BLOOD_BY_ZONE(Ped ped, int p1, float p2, float p3, const char* p4) { invoke<Void>(0xE98C50, ped, p1, p2, p3, p4); }
static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, int p1, float p2, float p3, float p4, float p5, int p6, float p7, const char* p8) { invoke<Void>(0xE98C50, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static void APPLY_PED_DAMAGE_DECAL(Ped ped, int damageZone, float xOffset, float yOffset, float heading, float scale, float alpha, int variation, BOOL fadeIn, const char* decalName) { invoke<Void>(0xE98F10, ped, damageZone, xOffset, yOffset, heading, scale, alpha, variation, fadeIn, decalName); }
static void APPLY_PED_DAMAGE_PACK(Ped ped, const char* damagePack, float damage, float mult) { invoke<Void>(0xE99030, ped, damagePack, damage, mult); }
static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0xE990E0, ped); }
static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) { invoke<Void>(0xE990E0, ped, p1); }
static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, BOOL p2) { invoke<Void>(0xE99180, ped, p1, p2); }
static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, const char* p2) { invoke<Void>(0xE991F0, ped, p1, p2); }
static int GET_PED_DECORATIONS_STATE(Ped ped) { return invoke<int>(0xE99290, ped); }
static void MARK_PED_DECORATIONS_AS_CLONED_FROM_LOCAL_PLAYER(Ped ped, BOOL p1) { invoke<Void>(0xE99350, ped, p1); }
static void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0xE993C0, ped); }
static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0xE99420, ped, height); }
static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0xE99490, ped); }
static void SET_PED_WETNESS(Ped ped, float wetLevel) { invoke<Void>(0xE994E0, ped, wetLevel); }
static void CLEAR_PED_ENV_DIRT(Ped ped) { invoke<Void>(0xE99540, ped); }
static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0xE99580, ped, sweat); }
static void ADD_PED_DECORATION_FROM_HASHES(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xE995D0, ped, collection, overlay); }
static void ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xE995D0, ped, collection, overlay); }
static int GET_PED_DECORATION_ZONE_FROM_HASHES(Hash collection, Hash overlay) { return invoke<int>(0xE99730, collection, overlay); }
static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0xE99790, ped); }
static void CLEAR_PED_DECORATIONS_LEAVE_SCARS(Ped ped) { invoke<Void>(0xE99790, ped); }
static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0xE99860, ped); }
static vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<vector3>(0xE998A0, ped, boneId, offsetX, offsetY, offsetZ); }
static void CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) { invoke<Void>(0xE99910, startImmediately, messageId); }
static void GIVE_PED_NM_MESSAGE(Ped ped) { invoke<Void>(0xE99980, ped); }
static int ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<int>(0xE99990, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); }
static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0xE999F0); }
static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0xE99A10, p0, p1); }
static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(float x, float y, float z, float range, int p4) { invoke<Void>(0xE99A30, x, y, z, range, p4); }
static BOOL DOES_SCENARIO_BLOCKING_AREA_EXISTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xE99AB0, x1, y1, z1, x2, y2, z2); }
static BOOL IS_PED_USING_SCENARIO(Ped ped, const char* scenario) { return invoke<BOOL>(0xE99B40, ped, scenario); }
static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0xE99B70, ped); }
static BOOL SET_PED_PANIC_EXIT_SCENARIO(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE99BD0, p0, p1, p2, p3); }
static void TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Ped ped, BOOL toggle) { invoke<Void>(0xE99C00, ped, toggle); }
static BOOL TRIGGER_PED_SCENARIO_PANICEXITTOFLEE(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE99C70, p0, p1, p2, p3); }
static BOOL SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE99CA0, p0, p1, p2, p3); }
static void SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Ped ped) { invoke<Void>(0xE99D50, ped); }
static void SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Ped ped) { invoke<Void>(0xE99DA0, ped); }
static BOOL SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Ped ped, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE99DF0, ped, p1, p2, p3); }
static void SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(Ped ped, BOOL p1) { invoke<Void>(0xE99EB0, ped, p1); }
static void SET_PED_SHOULD_IGNORE_SCENARIO_NAV_CHECKS(Any p0, BOOL p1) { invoke<Void>(0xE99F00, p0, p1); }
static void SET_PED_SHOULD_PROBE_FOR_SCENARIO_EXITS_IN_ONE_FRAME(Any p0, BOOL p1) { invoke<Void>(0xE99F60, p0, p1); }
static BOOL IS_PED_GESTURING(Any p0) { return invoke<BOOL>(0xE99FB0, p0); }
static void RESET_FACIAL_IDLE_ANIM(Ped ped) { invoke<Void>(0xE9A000, ped); }
static void PLAY_FACIAL_ANIM(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0xE9A050, ped, animName, animDict); }
static void SET_FACIAL_CLIPSET(Ped ped, const char* animDict) { invoke<Void>(0xE9A070, ped, animDict); }
static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0xE9A120, ped, animName, animDict); }
static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0xE9A140, ped); }
static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xE9A150, ped, toggle); }
static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xE9A1C0, ped, toggle, p2); }
static void SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(Ped ped, BOOL p1) { invoke<Void>(0xE9A250, ped, p1); }
static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xE9A2B0, ped, toggle); }
static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xE9A300, ped, toggle); }
static void TRIGGER_IDLE_ANIMATION_ON_PED(Ped ped) { invoke<Void>(0xE9A350, ped); }
static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE9A3B0, ped, toggle); }
static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE9A460, ped, toggle); }
static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE9A4C0, ped, toggle); }
static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE9A520, ped, toggle); }
static void SET_PED_CAN_TORSO_REACT_IK(Ped ped, BOOL p1) { invoke<Void>(0xE9A580, ped, p1); }
static void SET_PED_CAN_TORSO_VEHICLE_IK(Ped ped, BOOL p1) { invoke<Void>(0xE9A5E0, ped, p1); }
static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0xE9A640, ped, toggle); }
static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xE9A690, ped1, ped2); }
static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0xE9A6C0, ped, entity); }
static void SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) { invoke<Void>(0xE9A6F0, ped, lookAt); }
static void SET_PED_CLOTH_PIN_FRAMES(Any p0, Any p1) { invoke<Void>(0xE9A700, p0, p1); }
static void SET_PED_CLOTH_PACKAGE_INDEX(Any p0, Any p1) { invoke<Void>(0xE9A750, p0, p1); }
static void SET_PED_CLOTH_PRONE(Any p0, BOOL p1) { invoke<Void>(0xE9A7A0, p0, p1); }
static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0xE9A7F0, ped, flagId, value); }
static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0xE9A8A0, ped, flagId, doReset); }
static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0xE9A920, ped, flagId, p2); }
static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0xE9A950, ped, flagId); }
static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0xE9A9C0, ped, index); }
static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { invoke<Void>(0xE9AA20, ped, toggle); }
static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0xE9AA80, ped, evadingEntity); }
static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { invoke<Void>(0xE9AB10, ped, x, y, z, toggle); }
static void SET_PED_MODEL_IS_SUPPRESSED(Hash modelHash, BOOL toggle) { invoke<Void>(0xE9AB30, modelHash, toggle); }
static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0xE9AB50); }
static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xE9AB60, ped, toggle); }
static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xE9AC20, ped, toggle); }
static void BLOCK_PED_FROM_GENERATING_DEAD_BODY_EVENTS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xE9AC40, ped, toggle); }
static void SET_PED_WILL_ONLY_ATTACK_WANTED_PLAYER(Any p0, Any p1) { invoke<Void>(0xE9AC90, p0, p1); }
static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0xE980F0, ped, toggle); }
static void GIVE_PED_HELMET(Ped ped, BOOL cannotRemove, int helmetFlag, int textureIndex) { invoke<Void>(0xE9AD50, ped, cannotRemove, helmetFlag, textureIndex); }
static void REMOVE_PED_HELMET(Ped ped, BOOL instantly) { invoke<Void>(0xE9AD70, ped, instantly); }
static BOOL IS_PED_TAKING_OFF_HELMET(Ped ped) { return invoke<BOOL>(0xE9AD90, ped); }
static void SET_PED_HELMET(Ped ped, BOOL canWearHelmet) { invoke<Void>(0xE9ADF0, ped, canWearHelmet); }
static void SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) { invoke<Void>(0xE9ADF0, ped, helmetFlag); }
static void SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex, BOOL p2) { invoke<Void>(0xE9ADF0, ped, propIndex, p2); }
static void SET_PED_HELMET_VISOR_PROP_INDICES(Ped ped, BOOL p1, int p2, int p3) { invoke<Void>(0xE9ADF0, ped, p1, p2, p3); }
static BOOL IS_PED_HELMET_VISOR_UP(Ped ped) { return invoke<BOOL>(0xE9AFB0, ped); }
static void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) { invoke<Void>(0xE9ADF0, ped, textureIndex); }
static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0xE9B090, ped); }
static void CLEAR_PED_STORED_HAT_PROP(Ped ped) { invoke<Void>(0xE9B0F0, ped); }
static int GET_PED_HELMET_STORED_HAT_PROP_INDEX(Ped ped) { return invoke<int>(0xE9B150, ped); }
static int GET_PED_HELMET_STORED_HAT_TEX_INDEX(Ped ped) { return invoke<int>(0xE9B1B0, ped); }
static BOOL IS_CURRENT_HEAD_PROP_A_HELMET(Any p0) { return invoke<BOOL>(0xE9B210, p0); }
static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xE9B240, ped, toggle); }
static void SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xE9B2A0, ped, toggle); }
static void SET_PED_CAN_PEEK_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xE9B300, ped, toggle); }
static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xE9B360, ped, toggle); }
static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0xE9B370, ped, mode); }
static void SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) { invoke<Void>(0xE9B3D0, ped, toggle); }
static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { invoke<Void>(0xE9B430, ped, toggle); }
static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xDF67C0, ped, toggle); }
static void SET_LADDER_CLIMB_INPUT_STATE(Ped ped, int p1) { invoke<Void>(0xE9B4E0, ped, p1); }
static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped) { invoke<Void>(0xE9B540, ped); }
static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float p1) { invoke<Void>(0xE9B580, ped, p1); }
static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0xE9B5D0, ped, combatMovement); }
static int GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<int>(0xE9B620, ped); }
static void SET_PED_COMBAT_ABILITY(Ped ped, int abilityLevel) { invoke<Void>(0xE9B680, ped, abilityLevel); }
static void SET_PED_COMBAT_RANGE(Ped ped, int combatRange) { invoke<Void>(0xE9B6D0, ped, combatRange); }
static int GET_PED_COMBAT_RANGE(Ped ped) { return invoke<int>(0xE9B720, ped); }
static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeId, BOOL enabled) { invoke<Void>(0xE9B780, ped, attributeId, enabled); }
static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0xE9B7F0, ped, responseType); }
static BOOL IS_PED_PERFORMING_MELEE_ACTION(Ped ped) { return invoke<BOOL>(0xE9B840, ped); }
static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0xE9B8B0, ped); }
static BOOL IS_PED_PERFORMING_A_COUNTER_ATTACK(Ped ped) { return invoke<BOOL>(0xE9B950, ped); }
static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0xE9B9E0, ped); }
static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0xE9BA50, ped); }
static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0xE9BAE0, ped); }
static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0xE9BB30, ped); }
static BOOL WAS_PED_KNOCKED_OUT(Ped ped) { return invoke<BOOL>(0xE9BB80, ped); }
static void SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributeFlags, BOOL enable) { invoke<Void>(0xE9BBD0, ped, attributeFlags, enable); }
static void SET_PED_COWER_HASH(Ped ped, const char* p1) { invoke<Void>(0xE9BC40, ped, p1); }
static void SET_PED_STEERS_AROUND_DEAD_BODIES(Ped ped, BOOL toggle) { invoke<Void>(0xE9BCA0, ped, toggle); }
static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { invoke<Void>(0xE9BD00, ped, toggle); }
static void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) { invoke<Void>(0xE9BD50, ped, toggle); }
static void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) { invoke<Void>(0xE9BDB0, ped, toggle); }
static void SET_PED_IS_AVOIDED_BY_OTHERS(Any p0, BOOL p1) { invoke<Void>(0xE9BE10, p0, p1); }
static void SET_PED_INCREASED_AVOIDANCE_RADIUS(Ped ped) { invoke<Void>(0xE9BE70, ped); }
static void SET_PED_BLOCKS_PATHING_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xE9BEB0, ped, toggle); }
static void SET_PED_NO_TIME_DELAY_BEFORE_SHOT(Any p0) { invoke<Void>(0xE9BF10, p0); }
static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xE9BF50, x, y, z, radius); }
static void FORCE_PED_AI_AND_ANIMATION_UPDATE(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xE9C030, ped, p1, p2); }
static BOOL IS_PED_HEADING_TOWARDS_POSITION(Ped ped, float x, float y, float z, float p4) { return invoke<BOOL>(0xE9C0C0, ped, x, y, z, p4); }
static void REQUEST_PED_VISIBILITY_TRACKING(Ped ped) { invoke<Void>(0xE9C0F0, ped); }
static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xE9C130, ped, p1); }
static void REQUEST_PED_RESTRICTED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xE9C190, ped, p1); }
static void REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xE9C1E0, ped, p1); }
static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0xE9C240, ped); }
static int GET_TRACKED_PED_PIXELCOUNT(Ped ped) { return invoke<int>(0xE9C2A0, ped); }
static BOOL IS_PED_TRACKED(Ped ped) { return invoke<BOOL>(0xE9C300, ped); }
static BOOL HAS_PED_RECEIVED_EVENT(Ped ped, int eventId) { return invoke<BOOL>(0xE9C360, ped, eventId); }
static BOOL CAN_PED_SEE_HATED_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xE9C390, ped1, ped2); }
static BOOL CAN_PED_SHUFFLE_TO_OR_FROM_TURRET_SEAT(Ped ped, int* p1) { return invoke<BOOL>(0xE9C3C0, ped, p1); }
static BOOL CAN_PED_SHUFFLE_TO_OR_FROM_EXTRA_SEAT(Ped ped, int* p1) { return invoke<BOOL>(0xE9C440, ped, p1); }
static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0xE9C4C0, ped, boneId); }
static int GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int bone) { return invoke<int>(0xE9C4F0, ped, bone); }
static void SET_PED_ENVEFF_SCALE(Ped ped, float value) { invoke<Void>(0xE9C500, ped, value); }
static float GET_PED_ENVEFF_SCALE(Ped ped) { return invoke<float>(0xE9C5A0, ped); }
static void SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) { invoke<Void>(0xE9C630, ped, toggle); }
static void SET_PED_ENVEFF_CPV_ADD(Ped ped, float p1) { invoke<Void>(0xE9C6B0, ped, p1); }
static void SET_PED_ENVEFF_COLOR_MODULATOR(Ped ped, int p1, int p2, int p3) { invoke<Void>(0xE9C750, ped, p1, p2, p3); }
static void SET_PED_EMISSIVE_SCALE(Ped ped, float intensity) { invoke<Void>(0xE9C820, ped, intensity); }
static float GET_PED_EMISSIVE_SCALE(Ped ped) { return invoke<float>(0xE9C8C0, ped); }
static BOOL IS_PED_SHADER_READY(Ped ped) { return invoke<BOOL>(0xE9C950, ped); }
static void SET_PED_ENABLE_CREW_EMBLEM(Ped ped, BOOL toggle) { invoke<Void>(0xE9C9C0, ped, toggle); }
static void REQUEST_RAGDOLL_BOUNDS_UPDATE(Any p0, Any p1) { invoke<Void>(0xE9CA10, p0, p1); }
static void SET_PED_AO_BLOB_RENDERING(Ped ped, BOOL toggle) { invoke<Void>(0xE9CA20, ped, toggle); }
static BOOL IS_PED_SHELTERED(Ped ped) { return invoke<BOOL>(0xE9CA80, ped); }
static int CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float roll, float pitch, float yaw, int p6) { return invoke<int>(0xE9CAE0, x, y, z, roll, pitch, yaw, p6); }
static int CREATE_SYNCHRONIZED_SCENE_AT_MAP_OBJECT(float x, float y, float z, float radius, Hash object) { return invoke<int>(0xE9CAE0, x, y, z, radius, object); }
static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(int sceneId) { return invoke<BOOL>(0xE9CB40, sceneId); }
static void SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, BOOL p7) { invoke<Void>(0xE9CB70, sceneID, x, y, z, roll, pitch, yaw, p7); }
static void SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) { invoke<Void>(0xE9CC30, sceneID, phase); }
static float GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) { return invoke<float>(0xE9CC70, sceneID); }
static void SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) { invoke<Void>(0xE9CCB0, sceneID, rate); }
static float GET_SYNCHRONIZED_SCENE_RATE(int sceneID) { return invoke<float>(0xE9CD20, sceneID); }
static void SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, BOOL toggle) { invoke<Void>(0xE9CD60, sceneID, toggle); }
static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(int sceneID) { return invoke<BOOL>(0xE9CDA0, sceneID); }
static void SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID, BOOL toggle) { invoke<Void>(0xE9CDE0, sceneID, toggle); }
static BOOL IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID) { return invoke<BOOL>(0xE9CE30, sceneID); }
static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, Entity entity, int boneIndex) { invoke<Void>(0xE9CE70, sceneID, entity, boneIndex); }
static void DETACH_SYNCHRONIZED_SCENE(int sceneID) { invoke<Void>(0xE9CEE0, sceneID); }
static void TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(int scene) { invoke<Void>(0xE9CF10, scene); }
static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, int p3, BOOL p4) { return invoke<BOOL>(0xE9CF50, ped, motionStateHash, p2, p3, p4); }
static BOOL GET_PED_CURRENT_MOVE_BLEND_RATIO(Ped ped, float* speedX, float* speedY) { return invoke<BOOL>(0xE9CF90, ped, speedX, speedY); }
static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xE9D010, ped, value); }
static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xE9D060, ped, value); }
static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0xE9D0C0, ped, value); }
static void SET_PED_MOVE_RATE_IN_WATER_OVERRIDE(Ped ped, float p1) { invoke<Void>(0xE9D140, ped, p1); }
static BOOL PED_HAS_SEXINESS_FLAG_SET(Ped ped, int sexinessFlag) { return invoke<BOOL>(0xE9D1C0, ped, sexinessFlag); }
static int GET_PED_NEARBY_VEHICLES(Ped ped, Any* sizeAndVehs) { return invoke<int>(0xE9D220, ped, sizeAndVehs); }
static int GET_PED_NEARBY_PEDS(Ped ped, Any* sizeAndPeds, int ignore) { return invoke<int>(0xE9D250, ped, sizeAndPeds, ignore); }
static BOOL HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Ped ped) { return invoke<BOOL>(0xE9D280, ped); }
static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0xE9D2E0, ped); }
static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, int p2, const char* action) { invoke<Void>(0xE9D340, ped, p1, p2, action); }
static void SET_MOVEMENT_MODE_OVERRIDE(Ped ped, const char* name) { invoke<Void>(0xE9D360, ped, name); }
static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0xE9D3C0, ped, value); }
static int REGISTER_PEDHEADSHOT(Ped ped) { return invoke<int>(0xE9D410, ped); }
static int REGISTER_PEDHEADSHOT_HIRES(Ped ped) { return invoke<int>(0xE9D410, ped); }
static int REGISTER_PEDHEADSHOT_TRANSPARENT(Ped ped) { return invoke<int>(0xE9D410, ped); }
static void UNREGISTER_PEDHEADSHOT(int id) { invoke<Void>(0xE9D410, id); }
static BOOL IS_PEDHEADSHOT_VALID(int id) { return invoke<BOOL>(0xE9D580, id); }
static BOOL IS_PEDHEADSHOT_READY(int id) { return invoke<BOOL>(0xE9D5C0, id); }
static const char* GET_PEDHEADSHOT_TXD_STRING(int id) { return invoke<const char*>(0xE9D5F0, id); }
static BOOL REQUEST_PEDHEADSHOT_IMG_UPLOAD(int id) { return invoke<BOOL>(0xE9D620, id); }
static void RELEASE_PEDHEADSHOT_IMG_UPLOAD(int id) { invoke<Void>(0xE9D660, id); }
static BOOL IS_PEDHEADSHOT_IMG_UPLOAD_AVAILABLE() { return invoke<BOOL>(0xE9D680); }
static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_FAILED() { return invoke<BOOL>(0xE9D6A0); }
static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_SUCCEEDED() { return invoke<BOOL>(0xE9D6C0); }
static void SET_PED_HEATSCALE_OVERRIDE(Ped ped, float heatScale) { invoke<Void>(0xE9D6E0, ped, heatScale); }
static void DISABLE_PED_HEATSCALE_OVERRIDE(Ped ped) { invoke<Void>(0xE9D740, ped); }
static void SPAWNPOINTS_START_SEARCH(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration) { invoke<Void>(0xE9D780, p0, p1, p2, p3, p4, interiorFlags, scale, duration); }
static void SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, int interiorFlags, float scale, int duration) { invoke<Void>(0xE9D780, x1, y1, z1, x2, y2, z2, width, interiorFlags, scale, duration); }
static void SPAWNPOINTS_CANCEL_SEARCH() { invoke<Void>(0xE9D8A0); }
static BOOL SPAWNPOINTS_IS_SEARCH_ACTIVE() { return invoke<BOOL>(0xE9D8B0); }
static BOOL SPAWNPOINTS_IS_SEARCH_COMPLETE() { return invoke<BOOL>(0xE9D8E0); }
static BOOL SPAWNPOINTS_IS_SEARCH_FAILED() { return invoke<BOOL>(0xE9D910); }
static int SPAWNPOINTS_GET_NUM_SEARCH_RESULTS() { return invoke<int>(0xE9D940); }
static void SPAWNPOINTS_GET_SEARCH_RESULT(int randomInt, float* x, float* y, float* z) { invoke<Void>(0xE9D970, randomInt, x, y, z); }
static void SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(int p0, int* p1) { invoke<Void>(0xE9D970, p0, p1); }
static void SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) { invoke<Void>(0xE9DA60, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7, blendInDuration, blendOutDuration); }
static void FORCE_INSTANT_LEG_IK_SETUP(Ped ped) { invoke<Void>(0xDF67C0, ped); }
static void REQUEST_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xE9DB00, asset); }
static BOOL HAS_ACTION_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xE9DB80, asset); }
static void REMOVE_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xE9DBB0, asset); }
static void REQUEST_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0xE9DC30, asset); }
static BOOL HAS_STEALTH_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xE9DCC0, asset); }
static void REMOVE_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0xE9DCF0, asset); }
static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0xE9DD80, ped, multiplier); }
static void SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(Ped ped, BOOL toggle, int p2) { invoke<Void>(0xE9DDE0, ped, toggle, p2); }
static void SET_FORCE_FOOTSTEP_UPDATE(Ped ped, BOOL toggle) { invoke<Void>(0xE9DE70, ped, toggle); }
static void SET_FORCE_STEP_TYPE(Ped ped, BOOL p1, int type, int p3) { invoke<Void>(0xE9DEC0, ped, p1, type, p3); }
static BOOL IS_ANY_HOSTILE_PED_NEAR_POINT(Ped ped, float x, float y, float z, float radius) { return invoke<BOOL>(0xE9DF30, ped, x, y, z, radius); }
static void SET_PED_CAN_PLAY_IN_CAR_IDLES(Ped ped, BOOL toggle) { invoke<Void>(0xE9DF60, ped, toggle); }
static BOOL IS_TARGET_PED_IN_PERCEPTION_AREA(Ped ped, Ped targetPed, float p2, float p3, float p4, float p5) { return invoke<BOOL>(0xE9DFC0, ped, targetPed, p2, p3, p4, p5); }
static void SET_POP_CONTROL_SPHERE_THIS_FRAME(float x, float y, float z, float min, float max) { invoke<Void>(0xE9E000, x, y, z, min, max); }
static void FORCE_ZERO_MASS_IN_COLLISIONS(Ped ped) { invoke<Void>(0xE9E070, ped); }
static void SET_DISABLE_HIGH_FALL_DEATH(Ped ped, BOOL toggle) { invoke<Void>(0xE9E0B0, ped, toggle); }
static void SET_PED_PHONE_PALETTE_IDX(Any p0, Any p1) { invoke<Void>(0xE9E100, p0, p1); }
static void SET_PED_STEER_BIAS(Ped ped, float value) { invoke<Void>(0xE9E140, ped, value); }
static BOOL IS_PED_SWITCHING_WEAPON(Ped Ped) { return invoke<BOOL>(0xE9E190, Ped); }
static void SET_PED_TREATED_AS_FRIENDLY(Any p0, Any p1, Any p2) { invoke<Void>(0xE9E1F0, p0, p1, p2); }
static void SET_DISABLE_PED_MAP_COLLISION(Ped ped) { invoke<Void>(0xE9E270, ped); }
static void ENABLE_MP_LIGHT(Ped ped, BOOL toggle) { invoke<Void>(0xE9E330, ped, toggle); }
static BOOL GET_MP_LIGHT_ENABLED(Ped ped) { return invoke<BOOL>(0xE9E380, ped); }
static void CLEAR_COVER_POINT_FOR_PED(Ped ped) { invoke<Void>(0xE9E3E0, ped); }
static void SET_ALLOW_STUNT_JUMP_CAMERA(Ped ped, BOOL toggle) { invoke<Void>(0xE9E430, ped, toggle); }
static int ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float windingSpeed, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<int>(0xEA0760, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, windingSpeed, p11, p12, rigid, p14, breakWhenShot, unkPtr); }
static void DELETE_ROPE(int* ropeId) { invoke<Void>(0xEA07E0, ropeId); }
static void DELETE_CHILD_ROPE(int ropeId) { invoke<Void>(0xEA07F0, ropeId); }
static BOOL DOES_ROPE_EXIST(int* ropeId) { return invoke<BOOL>(0xEA0810, ropeId); }
static void ROPE_DRAW_ENABLED(int* ropeId, BOOL p1) { invoke<Void>(0xEA0850, ropeId, p1); }
static void ROPE_DRAW_SHADOW_ENABLED(int* ropeId, BOOL toggle) { invoke<Void>(0xEA08B0, ropeId, toggle); }
static void LOAD_ROPE_DATA(int ropeId, const char* rope_preset) { invoke<Void>(0xEA0910, ropeId, rope_preset); }
static void PIN_ROPE_VERTEX(int ropeId, int vertex, float x, float y, float z) { invoke<Void>(0xEA0960, ropeId, vertex, x, y, z); }
static void UNPIN_ROPE_VERTEX(int ropeId, int vertex) { invoke<Void>(0xEA0960, ropeId, vertex); }
static int GET_ROPE_VERTEX_COUNT(int ropeId) { return invoke<int>(0xEA0A20, ropeId); }
static void ATTACH_ENTITIES_TO_ROPE(int ropeId, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, Any* p12, Any* p13) { invoke<Void>(0xEA0A80, ropeId, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); }
static void ATTACH_ROPE_TO_ENTITY(int ropeId, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0xEA0AD0, ropeId, entity, x, y, z, p5); }
static void DETACH_ROPE_FROM_ENTITY(int ropeId, Entity entity) { invoke<Void>(0xEA0B90, ropeId, entity); }
static void ROPE_SET_UPDATE_PINVERTS(int ropeId) { invoke<Void>(0xEA0C10, ropeId); }
static void ROPE_SET_UPDATE_ORDER(int ropeId, Any p1) { invoke<Void>(0xEA0C50, ropeId, p1); }
static void ROPE_SET_SMOOTH_REELIN(int ropeId, BOOL p1) { invoke<Void>(0xEA0C90, ropeId, p1); }
static BOOL IS_ROPE_ATTACHED_AT_BOTH_ENDS(int* ropeId) { return invoke<BOOL>(0xEA0CF0, ropeId); }
static vector3 GET_ROPE_LAST_VERTEX_COORD(int ropeId) { return invoke<vector3>(0xEA0D40, ropeId); }
static vector3 GET_ROPE_VERTEX_COORD(int ropeId, int vertex) { return invoke<vector3>(0xEA0DD0, ropeId, vertex); }
static void START_ROPE_WINDING(int ropeId) { invoke<Void>(0xEA0E90, ropeId); }
static void STOP_ROPE_WINDING(int ropeId) { invoke<Void>(0xEA0ED0, ropeId); }
static void START_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0xEA0F00, ropeId); }
static void STOP_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0xEA0F40, ropeId); }
static void ROPE_CONVERT_TO_SIMPLE(int ropeId) { invoke<Void>(0xEA0F70, ropeId); }
static void ROPE_LOAD_TEXTURES() { invoke<Void>(0xEA0FD0); }
static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0xEA0FF0); }
static void ROPE_UNLOAD_TEXTURES() { invoke<Void>(0xEA1020); }
static BOOL DOES_SCRIPT_OWN_ROPE(int ropeId) { return invoke<BOOL>(0xEA1040, ropeId); }
static void ROPE_ATTACH_VIRTUAL_BOUND_GEOM(int ropeId, int p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { invoke<Void>(0xEA10C0, ropeId, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void ROPE_CHANGE_SCRIPT_OWNER(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xEA11C0, p0, p1, p2); }
static void ROPE_SET_REFFRAMEVELOCITY_COLLIDERORDER(int ropeId, int p1) { invoke<Void>(0xEA11E0, ropeId, p1); }
static float ROPE_GET_DISTANCE_BETWEEN_ENDS(int ropeId) { return invoke<float>(0xDF67C0, ropeId); }
static void ROPE_FORCE_LENGTH(int ropeId, float length) { invoke<Void>(0xEA1270, ropeId, length); }
static void ROPE_RESET_LENGTH(int ropeId, float length) { invoke<Void>(0xEA12C0, ropeId, length); }
static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<Void>(0xEA1320, posX, posY, posZ, vecX, vecY, vecZ, impulse); }
static void SET_DAMPING(Entity entity, int vertex, float value) { invoke<Void>(0xEA1370, entity, vertex, value); }
static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0xEA14F0, entity); }
static void SET_CGOFFSET(Entity entity, float x, float y, float z) { invoke<Void>(0xEA1540, entity, x, y, z); }
static vector3 GET_CGOFFSET(Entity entity) { return invoke<vector3>(0xEA1550, entity); }
static void SET_CG_AT_BOUNDCENTER(Entity entity) { invoke<Void>(0xEA15F0, entity); }
static void BREAK_ENTITY_GLASS(Entity entity, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0xEA16D0, entity, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static BOOL GET_IS_ENTITY_A_FRAG(Object object) { return invoke<BOOL>(0xEA1700, object); }
static void SET_DISABLE_BREAKING(Object object, BOOL toggle) { invoke<Void>(0xEA1760, object, toggle); }
static void RESET_DISABLE_BREAKING(Object object) { invoke<Void>(0xEA1760, object); }
static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0xEA1810, object, toggle); }
static void SET_USE_KINEMATIC_PHYSICS(Entity entity, BOOL toggle) { invoke<Void>(0xEA18B0, entity, toggle); }
static void SET_IN_STUNT_MODE(BOOL p0) { invoke<Void>(0xEA1930, p0); }
static void SET_IN_ARENA_MODE(BOOL toggle) { invoke<Void>(0xEA1960, toggle); }
static Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0xEA9310, player); }
static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0xEA9310, player); }
static void SET_PLAYER_MODEL(Player player, Hash model) { invoke<Void>(0xEA93A0, player, model); }
static void CHANGE_PLAYER_PED(Player player, Ped ped, BOOL p2, BOOL resetDamage) { invoke<Void>(0xEA93B0, player, ped, p2, resetDamage); }
static void GET_PLAYER_RGB_COLOUR(Player player, int* r, int* g, int* b) { invoke<Void>(0xEA93E0, player, r, g, b); }
static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0xEA9440); }
static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0xEA9470, player); }
static void SET_PLAYER_TEAM(Player player, int team) { invoke<Void>(0xEA94B0, player, team); }
static int GET_NUMBER_OF_PLAYERS_IN_TEAM(int team) { return invoke<int>(0xEA9440, team); }
static char* GET_PLAYER_NAME(Player player) { return invoke<char*>(0xEA95B0, player); }
static float GET_WANTED_LEVEL_RADIUS(Player player) { return invoke<float>(0xEA9630, player); }
static vector3 GET_PLAYER_WANTED_CENTRE_POSITION(Player player) { return invoke<vector3>(0xEA9660, player); }
static void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, vector3* position, BOOL p2, BOOL p3) { invoke<Void>(0xEA9700, player, position, p2, p3); }
static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xEA9780, wantedLevel); }
static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { invoke<Void>(0xEA97A0, player, wantedLevel, disableNoMission); }
static void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, BOOL p2) { invoke<Void>(0xEA97A0, player, wantedLevel, p2); }
static void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { invoke<Void>(0xEA97A0, player, p1); }
static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) { return invoke<BOOL>(0xEA9940, player); }
static BOOL ARE_PLAYER_STARS_GREYED_OUT(Player player) { return invoke<BOOL>(0xEA99B0, player); }
static BOOL IS_WANTED_AND_HAS_BEEN_SEEN_BY_COPS(Player player) { return invoke<BOOL>(0xEA9A10, player); }
static void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xEA9A80, player, toggle); }
static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0xEA9AF0, player, wantedLevel); }
static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0xEA9B40, player); }
static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0xEA9BE0, player); }
static BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0xEA9C20, player); }
static void SET_PLAYER_CONTROL(Player player, BOOL bHasControl, int flags) { invoke<Void>(0xEA9C60, player, bHasControl, flags); }
static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0xEA9C80, player); }
static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0xEA9CD0, maxWantedLevel); }
static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0xEA9CF0, toggle); }
static void SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xEA9D10, player, toggle); }
static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0xEA9D80, player); }
static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xEA9DC0, player, toggle); }
static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xEA9E30, player, toggle); }
static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xEA9E30, player); }
static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xEA9EB0, player, toggle); }
static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xEA9EB0, player); }
static void SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(Player player) { invoke<Void>(0xEA9F40, player); }
static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Player player, BOOL toggle) { invoke<Void>(0xEA9F70, player, toggle); }
static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0xEA9FC0, multiplier); }
static void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { invoke<Void>(0xEAA000, player, difficulty); }
static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0xEAA000, player); }
static int GET_WANTED_LEVEL_TIME_TO_ESCAPE() { return invoke<int>(0xEAA090); }
static void SET_WANTED_LEVEL_HIDDEN_ESCAPE_TIME(Player player, int wantedLevel, int lossTime) { invoke<Void>(0xEAA0B0, player, wantedLevel, lossTime); }
static void RESET_WANTED_LEVEL_HIDDEN_ESCAPE_TIME(Player player) { invoke<Void>(0xEAA0B0, player); }
static void START_FIRING_AMNESTY(int duration) { invoke<Void>(0xEAA140, duration); }
static void REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) { invoke<Void>(0xEAA1A0, player, crimeType, wantedLvlThresh); }
static void SUPPRESS_CRIME_THIS_FRAME(Player player, int crimeType) { invoke<Void>(0xEAA270, player, crimeType); }
static void UPDATE_WANTED_POSITION_THIS_FRAME(Player player) { invoke<Void>(0xEAA2C0, player); }
static void SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(Player player) { invoke<Void>(0xEAA2F0, player); }
static void ALLOW_EVASION_HUD_IF_DISABLING_HIDDEN_EVASION_THIS_FRAME(Player player, Any p1) { invoke<Void>(0xEAA320, player, p1); }
static void FORCE_START_HIDDEN_EVASION(Player player) { invoke<Void>(0xEAA390, player); }
static void SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(Player player) { invoke<Void>(0xEAA3D0, player); }
static void REPORT_POLICE_SPOTTED_PLAYER(Player player) { invoke<Void>(0xEAA400, player); }
static void SET_LAW_RESPONSE_DELAY_OVERRIDE(float p0) { invoke<Void>(0xEAA490, p0); }
static void RESET_LAW_RESPONSE_DELAY_OVERRIDE() { invoke<Void>(0xEAA490); }
static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0xEAA4C0, player); }
static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0xEAA500, player); }
static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xEAA530, player, entity); }
static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0xEAA5D0, player, entity); }
static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0xEAA630, player); }
static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xEAA630, player, entity); }
static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<BOOL>(0xEAA730, player, entity); }
static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { invoke<Void>(0xEAA7A0, player, range); }
static void SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) { invoke<Void>(0xEAA7F0, player, toggle); }
static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { invoke<Void>(0xEAA840, player, toggle); }
static void SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { invoke<Void>(0xEAA890, player, toggle); }
static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0xEAA8E0); }
static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0xEAA8F0, player); }
static void SET_PLAYER_SPRINT(Player player, BOOL toggle) { invoke<Void>(0xEAA940, player, toggle); }
static void RESET_PLAYER_STAMINA(Player player) { invoke<Void>(0xEAA990, player); }
static void RESTORE_PLAYER_STAMINA(Player player, float p1) { invoke<Void>(0xEAA9C0, player, p1); }
static float GET_PLAYER_SPRINT_STAMINA_REMAINING(Player player) { return invoke<float>(0xEAAA20, player); }
static float GET_PLAYER_SPRINT_TIME_REMAINING(Player player) { return invoke<float>(0xEAAA70, player); }
static float GET_PLAYER_UNDERWATER_TIME_REMAINING(Player player) { return invoke<float>(0xEAAAE0, player); }
static float SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(Player player, float time) { return invoke<float>(0xEAAB40, player, time); }
static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0xEAABB0, player); }
static int GET_PLAYER_MAX_ARMOUR(Player player) { return invoke<int>(0xEAABD0, player); }
static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0xEAAC10, player); }
static BOOL GET_ARE_CAMERA_CONTROLS_DISABLED() { return invoke<BOOL>(0xEAAC70); }
static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0xEAACB0, player); }
static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0xEAAD00, player); }
static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0xEAAD40, player, atArresting); }
static void RESET_PLAYER_ARREST_STATE(Player player) { invoke<Void>(0xEAADD0, player); }
static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0xEAAE00); }
static Player GET_PLAYER_INDEX() { return invoke<Player>(0xEAAE30); }
static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0xEAAE70, value); }
static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0xEAAE80, value); }
static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) { return invoke<int>(0xEAAE90, player); }
static int GET_TIME_SINCE_PLAYER_HIT_PED(Player player) { return invoke<int>(0xEAAED0, player); }
static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) { return invoke<int>(0xEAAF10, player); }
static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) { return invoke<int>(0xEAAF50, player); }
static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) { return invoke<BOOL>(0xEAAF90, player); }
static Player PLAYER_ID() { return invoke<Player>(0xEAAFC0); }
static Ped PLAYER_PED_ID() { return invoke<Ped>(0xEAB000); }
static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0xEAAFC0); }
static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0xEAB080, cleanupFlags); }
static void FORCE_CLEANUP(int cleanupFlags) { invoke<Void>(0xEAB0C0, cleanupFlags); }
static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(const char* name, int cleanupFlags) { invoke<Void>(0xEAB0C0, name, cleanupFlags); }
static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0xEAB0C0, id, cleanupFlags); }
static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0xEAB0C0); }
static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0xEAB1A0, player, vehicle); }
static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player player) { invoke<Void>(0xEAB1B0, player); }
static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(int achievementId) { return invoke<BOOL>(0xEAB1F0, achievementId); }
static BOOL SET_ACHIEVEMENT_PROGRESS(int achievementId, int progress) { return invoke<BOOL>(0xEAB220, achievementId, progress); }
static int GET_ACHIEVEMENT_PROGRESS(int achievementId) { return invoke<int>(0xEAB250, achievementId); }
static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0xEAB280, achievementId); }
static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0xEAB2B0); }
static BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0xEAB2E0); }
static void DISPLAY_SYSTEM_SIGNIN_UI(BOOL p0) { invoke<Void>(0xEAB2F0, p0); }
static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0xEAB300); }
static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0xEAB320, player, toggle); }
static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0xEAB3A0, player); }
static BOOL GET_PLAYER_DEBUG_INVINCIBLE(Player player) { return invoke<BOOL>(0xEAB3E0, player); }
static void SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(Player player, BOOL toggle) { invoke<Void>(0xEAB320, player, toggle); }
static void SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(Player player, BOOL p1) { invoke<Void>(0xEAB460, player, p1); }
static void REMOVE_PLAYER_HELMET(Player player, BOOL p2) { invoke<Void>(0xEAB4B0, player, p2); }
static void GIVE_PLAYER_RAGDOLL_CONTROL(Player player, BOOL toggle) { invoke<Void>(0xEAB500, player, toggle); }
static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { invoke<Void>(0xEAB560, player, toggle); }
static void SET_PLAYER_TARGETING_MODE(int targetMode) { invoke<Void>(0xEAB5A0, targetMode); }
static void SET_PLAYER_TARGET_LEVEL(int targetLevel) { invoke<Void>(0xEAB610, targetLevel); }
static BOOL GET_IS_USING_FPS_THIRD_PERSON_COVER() { return invoke<BOOL>(0xEAB620); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { invoke<Void>(0xEAB640, player); }
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0xEAB670, player); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { invoke<Void>(0xEAB6C0, player); }
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0xEAB6F0, player); }
static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { invoke<Void>(0xEAB740, player, multiplier); }
static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xEAB7A0, player, multiplier); }
static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xEAB800, player, multiplier); }
static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0xEAB860); }
static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0xEAB890); }
static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0xEAB8C0); }
static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0xEAB910); }
static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle) { invoke<Void>(0xEAB940, player, toggle); }
static void SET_PLAYER_FORCED_ZOOM(Player player, BOOL toggle) { invoke<Void>(0xEAB980, player, toggle); }
static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(Player player, BOOL toggle) { invoke<Void>(0xEAB9D0, player, toggle); }
static void DISABLE_PLAYER_FIRING(Player player, BOOL toggle) { invoke<Void>(0xEABA20, player, toggle); }
static void DISABLE_PLAYER_THROW_GRENADE_WHILE_USING_GUN() { invoke<Void>(0xEABAB0); }
static void SET_DISABLE_AMBIENT_MELEE_MOVE(Player player, BOOL toggle) { invoke<Void>(0xEABAD0, player, toggle); }
static void SET_PLAYER_MAX_ARMOUR(Player player, int value) { invoke<Void>(0xEABB90, player, value); }
static void SPECIAL_ABILITY_ACTIVATE(Player player, int p1) { invoke<Void>(0xEABBD0, player, p1); }
static void SET_SPECIAL_ABILITY_MP(Player player, int p1, Any p2) { invoke<Void>(0xEABC30, player, p1, p2); }
static void SPECIAL_ABILITY_DEACTIVATE_MP(Player player, int p1) { invoke<Void>(0xEABCA0, player, p1); }
static void SPECIAL_ABILITY_DEACTIVATE(Player player, Any p1) { invoke<Void>(0xEABCB0, player, p1); }
static void SPECIAL_ABILITY_DEACTIVATE_FAST(Player player, Any p1) { invoke<Void>(0xEABCB0, player, p1); }
static void SPECIAL_ABILITY_RESET(Player player, Any p1) { invoke<Void>(0xEABD80, player, p1); }
static void SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(Player player, Any p1) { invoke<Void>(0xEABDE0, player, p1); }
static void SPECIAL_ABILITY_CHARGE_SMALL(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xEABE40, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_MEDIUM(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xEABE70, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_LARGE(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xEABEA0, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(Player player, Ped p1, Any p2) { invoke<Void>(0xEABED0, player, p1, p2); }
static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2, Any p3) { invoke<Void>(0xEABF50, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float normalizedValue, BOOL p2, Any p3) { invoke<Void>(0xEABFD0, player, normalizedValue, p2, p3); }
static void SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0xEAC060, player, p1, p2); }
static void SPECIAL_ABILITY_DEPLETE_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0xEAC0E0, player, p1, p2); }
static void SPECIAL_ABILITY_LOCK(Hash playerModel, Any p1) { invoke<Void>(0xEAC160, playerModel, p1); }
static void SPECIAL_ABILITY_UNLOCK(Hash playerModel, Any p1) { invoke<Void>(0xEAC180, playerModel, p1); }
static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash playerModel) { return invoke<BOOL>(0xEAC180, playerModel); }
static BOOL IS_SPECIAL_ABILITY_ACTIVE(Player player, Any p1) { return invoke<BOOL>(0xEAC1D0, player, p1); }
static BOOL IS_SPECIAL_ABILITY_METER_FULL(Player player, Any p1) { return invoke<BOOL>(0xEAC240, player, p1); }
static void ENABLE_SPECIAL_ABILITY(Player player, BOOL toggle, Any p2) { invoke<Void>(0xEAC2B0, player, toggle, p2); }
static BOOL IS_SPECIAL_ABILITY_ENABLED(Player player, Any p1) { return invoke<BOOL>(0xEAC320, player, p1); }
static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<Void>(0xEAC390, multiplier); }
static void UPDATE_SPECIAL_ABILITY_FROM_STAT(Player player, Any p1) { invoke<Void>(0xEAC3B0, player, p1); }
static BOOL GET_IS_PLAYER_DRIVING_ON_HIGHWAY(Player player) { return invoke<BOOL>(0xEAC410, player); }
static BOOL GET_IS_PLAYER_DRIVING_WRECKLESS(Player player, int p1) { return invoke<BOOL>(0xEAC490, player, p1); }
static BOOL GET_IS_MOPPING_AREA_FREE_IN_FRONT_OF_PLAYER(Player player, float p1) { return invoke<BOOL>(0xEAC530, player, p1); }
static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL findCollisionLand, BOOL p7) { invoke<Void>(0xEAC560, player, x, y, z, heading, p5, findCollisionLand, p7); }
static BOOL UPDATE_PLAYER_TELEPORT(Player player) { return invoke<BOOL>(0xEAC5A0, player); }
static void STOP_PLAYER_TELEPORT() { invoke<Void>(0xEAC5F0); }
static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0xEAC600); }
static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0xEAC620, player); }
static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { invoke<Void>(0xEAC670, player, regenRate); }
static float GET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(Player player) { return invoke<float>(0xEAC6C0, player); }
static void SET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(Player player, float limit) { invoke<Void>(0xEAC710, player, limit); }
static void DISABLE_PLAYER_HEALTH_RECHARGE(Player player) { invoke<Void>(0xEAC770, player); }
static void SET_PLAYER_FALL_DISTANCE_TO_TRIGGER_RAGDOLL_OVERRIDE(Player player, float p1) { invoke<Void>(0xDF67C0, player, p1); }
static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC7F0, player, modifier); }
static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC840, player, modifier); }
static void SET_PLAYER_WEAPON_MINIGUN_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC890, player, modifier); }
static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier, BOOL p2) { invoke<Void>(0xEAC8E0, player, modifier, p2); }
static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC940, player, modifier); }
static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC990, player, modifier); }
static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xEAC9E0, player, modifier); }
static void SET_PLAYER_MAX_EXPLOSIVE_DAMAGE(Player player, float p1) { invoke<Void>(0xEACA30, player, p1); }
static void SET_PLAYER_EXPLOSIVE_DAMAGE_MODIFIER(Player player, Any p1) { invoke<Void>(0xEACA80, player, p1); }
static void SET_PLAYER_WEAPON_TAKEDOWN_DEFENSE_MODIFIER(Player player, float p1) { invoke<Void>(0xEACAD0, player, p1); }
static void SET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xEACB20, player, tintIndex); }
static void GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xEACB60, player, tintIndex); }
static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int index) { invoke<Void>(0xEACBA0, player, index); }
static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) { invoke<Void>(0xEACBE0, player, index); }
static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xEACC20, player, tintIndex); }
static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xEACC60, player, tintIndex); }
static void SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { invoke<Void>(0xEACCA0, player); }
static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<BOOL>(0xEACCD0, player); }
static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) { invoke<Void>(0xEACD10, player, enabled); }
static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) { invoke<Void>(0xEACD60, player, r, g, b); }
static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int* r, int* g, int* b) { invoke<Void>(0xEACE10, player, r, g, b); }
static void SET_PLAYER_PHONE_PALETTE_IDX(Player player, int flags) { invoke<Void>(0xEACE90, player, flags); }
static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xEACEC0, player, multiplier); }
static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xEACF10, player, multiplier); }
static BOOL CAN_PED_HEAR_PLAYER(Player player, Ped ped) { return invoke<BOOL>(0xEACF60, player, ped); }
static void SIMULATE_PLAYER_INPUT_GAIT(Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { invoke<Void>(0xEAD010, player, amount, gaitType, speed, p4, p5); }
static void RESET_PLAYER_INPUT_GAIT(Player player) { invoke<Void>(0xEAD0C0, player); }
static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) { invoke<Void>(0xEAD100, player, toggle); }
static void SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(Player player, BOOL toggle) { invoke<Void>(0xEAD150, player, toggle); }
static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) { invoke<Void>(0xEAD1A0, player, value); }
static BOOL IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(Player player) { return invoke<BOOL>(0xEAD200, player); }
static void INCREASE_PLAYER_JUMP_SUPPRESSION_RANGE(Player player) { invoke<Void>(0xEAD240, player); }
static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { invoke<Void>(0xEAD270, player, toggle); }
static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, int p1) { invoke<Void>(0xEAD2B0, player, p1); }
static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<Void>(0xEAD2F0, index); }
static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<Void>(0xEAD320, value); }
static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xEAD350, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<Void>(0xEAD370); }
static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) { return invoke<BOOL>(0xEAD3D0, player); }
static BOOL IS_PLAYER_BATTLE_AWARE(Player player) { return invoke<BOOL>(0xEAD420, player); }
static BOOL GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(Player player, int p1, BOOL p2) { return invoke<BOOL>(0xEAD4A0, player, p1, p2); }
static void EXTEND_WORLD_BOUNDARY_FOR_PLAYER(float x, float y, float z) { invoke<Void>(0xEAD510, x, y, z); }
static void RESET_WORLD_BOUNDARY_FOR_PLAYER() { invoke<Void>(0xEAD570); }
static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0xEAD5D0, player); }
static BOOL HAS_PLAYER_LEFT_THE_WORLD(Player player) { return invoke<BOOL>(0xEAD630, player); }
static void SET_PLAYER_LEAVE_PED_BEHIND(Player player, BOOL toggle) { invoke<Void>(0xEAD680, player, toggle); }
static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xEAD6D0, player, p1, p2, p3, p4); }
static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player) { invoke<Void>(0xEAD740, player); }
static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xEAD770, player, model); }
static void SET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xEAD7B0, player, model); }
static Hash GET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { return invoke<Hash>(0xEAD7F0, player); }
static Hash GET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player) { return invoke<Hash>(0xEAD830, player); }
static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0xEAD870, player); }
static void CLEAR_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0xEAD8B0, player); }
static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xEAD8F0, player, model); }
static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) { invoke<Void>(0xEAD930, player); }
static void DISABLE_PLAYER_VEHICLE_REWARDS(Player player) { invoke<Void>(0xEAD970, player); }
static void SET_PLAYER_SPECTATED_VEHICLE_RADIO_OVERRIDE(BOOL p0) { invoke<Void>(0xEAD9A0, p0); }
static void SET_PLAYER_BLUETOOTH_STATE(Player player, BOOL state) { invoke<Void>(0xEAD9E0, player, state); }
static BOOL IS_PLAYER_BLUETOOTH_ENABLE(Player player) { return invoke<BOOL>(0xEADA30, player); }
static void DISABLE_CAMERA_VIEW_MODE_CYCLE(Player player) { invoke<Void>(0xEADA80, player); }
static int GET_PLAYER_FAKE_WANTED_LEVEL(Player player) { return invoke<int>(0xEADAB0, player); }
static void SET_PLAYER_CAN_DAMAGE_PLAYER(Player player1, Player player2, BOOL toggle) { invoke<Void>(0xEADB10, player1, player2, toggle); }
static void SET_APPLY_WAYPOINT_OF_PLAYER(Player player, int hudColor) { invoke<Void>(0xEADB90, player, hudColor); }
static BOOL IS_PLAYER_VEHICLE_WEAPON_TOGGLED_TO_NON_HOMING(Any p0) { return invoke<BOOL>(0xEADBA0, p0); }
static void SET_PLAYER_VEHICLE_WEAPON_TO_NON_HOMING(Any p0) { invoke<Void>(0xEADC10, p0); }
static void SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(Any p0, Any p1) { invoke<Void>(0xEADC70, p0, p1); }
static void ADD_PLAYER_TARGETABLE_ENTITY(Player player, Entity entity) { invoke<Void>(0xEADCF0, player, entity); }
static void REMOVE_PLAYER_TARGETABLE_ENTITY(Player player, Entity entity) { invoke<Void>(0xEADD60, player, entity); }
static void SET_PLAYER_PREVIOUS_VARIATION_DATA(Player player, int p1, int p2, Any p3, Any p4, Any p5) { invoke<Void>(0xEADDD0, player, p1, p2, p3, p4, p5); }
static void REMOVE_SCRIPT_FIRE_POSITION() { invoke<Void>(0xDBB0C0); }
static void SET_SCRIPT_FIRE_POSITION(float coordX, float coordY, float coordZ) { invoke<Void>(0xEADE90, coordX, coordY, coordZ); }
static void REPLAY_START_EVENT(int p0) { invoke<Void>(0xEAE130, p0); }
static void REPLAY_STOP_EVENT() { invoke<Void>(0xEAE140); }
static void REPLAY_CANCEL_EVENT() { invoke<Void>(0xEAE150); }
static void REPLAY_RECORD_BACK_FOR_TIME(float p0, float p1, int p2) { invoke<Void>(0xEAE160, p0, p1, p2); }
static void REPLAY_CHECK_FOR_EVENT_THIS_FRAME(const char* missionNameLabel, Any p1) { invoke<Void>(0xEAE170, missionNameLabel, p1); }
static void REPLAY_PREVENT_RECORDING_THIS_FRAME() { invoke<Void>(0xEAE180); }
static void REPLAY_RESET_EVENT_INFO() { invoke<Void>(0xEAE190); }
static void REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME() { invoke<Void>(0xEAE1A0); }
static void RECORD_GREATEST_MOMENT(int p0, int p1, int p2) { invoke<Void>(0xEAE1B0, p0, p1, p2); }
static void STOP_REPLAY_RECORDING() { invoke<Void>(0xEAE1C0); }
static BOOL IS_REPLAY_RECORDING() { return invoke<BOOL>(0xEAE1D0); }
static void REGISTER_EFFECT_FOR_REPLAY_EDITOR(const char* p0, BOOL p1) { invoke<Void>(0xEAE2F0, p0, p1); }
static BOOL REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP() { return invoke<BOOL>(0xEAE300); }
static void SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM() { invoke<Void>(0xEAE310); }
static void SET_REPLAY_SYSTEM_PAUSED_FOR_SAVE(BOOL p0) { invoke<Void>(0xEAE320, p0); }
static void REPLAY_CONTROL_SHUTDOWN() { invoke<Void>(0xEAE330); }
static void ACTIVATE_ROCKSTAR_EDITOR(int p0) { invoke<Void>(0xEAE340, p0); }
static BOOL SAVEMIGRATION_IS_MP_ENABLED() { return invoke<BOOL>(0xEAFBF0); }
static BOOL SAVEMIGRATION_MP_REQUEST_ACCOUNTS() { return invoke<BOOL>(0xEAFC10); }
static int SAVEMIGRATION_MP_GET_ACCOUNTS_STATUS() { return invoke<int>(0xEAFC40); }
static int SAVEMIGRATION_MP_NUM_ACCOUNTS() { return invoke<int>(0xEAFC70); }
static BOOL SAVEMIGRATION_MP_GET_ACCOUNT(int p0, Any* p1) { return invoke<BOOL>(0xEAFCB0, p0, p1); }
static BOOL SAVEMIGRATION_MP_REQUEST_STATUS() { return invoke<BOOL>(0xEAFCE0); }
static int SAVEMIGRATION_MP_GET_STATUS() { return invoke<int>(0xEAFD10); }
static void REQUEST_SCRIPT(const char* scriptName) { invoke<Void>(0xEB0E40, scriptName); }
static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptName) { invoke<Void>(0xEB0EC0, scriptName); }
static BOOL HAS_SCRIPT_LOADED(const char* scriptName) { return invoke<BOOL>(0xEB0F20, scriptName); }
static BOOL DOES_SCRIPT_EXIST(const char* scriptName) { return invoke<BOOL>(0xEB0F70, scriptName); }
static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { invoke<Void>(0xEB0E40, scriptHash); }
static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0xEB10A0, scriptHash); }
static BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) { return invoke<BOOL>(0xEB1150, scriptHash); }
static BOOL DOES_SCRIPT_WITH_NAME_HASH_EXIST(Hash scriptHash) { return invoke<BOOL>(0xEB11F0, scriptHash); }
static void TERMINATE_THREAD(int threadId) { invoke<Void>(0xEB1280, threadId); }
static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0xEB1290, threadId); }
static const char* GET_NAME_OF_SCRIPT_WITH_THIS_ID(int threadId) { return invoke<const char*>(0xEB12D0, threadId); }
static void SCRIPT_THREAD_ITERATOR_RESET() { invoke<Void>(0xEB1350); }
static int SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoke<int>(0xEB1360); }
static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xEB1380); }
static void TERMINATE_THIS_THREAD() { invoke<Void>(0xEB13A0); }
static int GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Hash scriptHash) { return invoke<int>(0xEB13C0, scriptHash); }
static const char* GET_THIS_SCRIPT_NAME() { return invoke<const char*>(0xEB13E0); }
static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<Hash>(0xEB1410); }
static int GET_NUMBER_OF_EVENTS(int eventGroup) { return invoke<int>(0xEB1430, eventGroup); }
static BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return invoke<BOOL>(0xEB1480, eventGroup, eventIndex); }
static int GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return invoke<int>(0xEB14B0, eventGroup, eventIndex); }
static BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, Any* eventData, int eventDataSize) { return invoke<BOOL>(0xEB14F0, eventGroup, eventIndex, eventData, eventDataSize); }
static void TRIGGER_SCRIPT_EVENT(int eventGroup, Any* eventData, int eventDataSize, int playerBits) { invoke<Void>(0xEB1540, eventGroup, eventData, eventDataSize, playerBits); }
static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0xEB1560); }
static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0xEB1570, toggle); }
static BOOL GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0xEB1590); }
static void COMMIT_TO_LOADINGSCREEN_SELCTION() { invoke<Void>(0xEB15A0); }
static BOOL BG_IS_EXITFLAG_SET() { return invoke<BOOL>(0xEB15B0); }
static void BG_SET_EXITFLAG_RESPONSE() { invoke<Void>(0xEB15E0); }
static void BG_START_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0xEB1600, contextHash); }
static void BG_END_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0xEB1620, contextHash); }
static void BG_START_CONTEXT(const char* contextName) { invoke<Void>(0xEB1640, contextName); }
static void BG_END_CONTEXT(const char* contextName) { invoke<Void>(0xEB1670, contextName); }
static BOOL BG_DOES_LAUNCH_PARAM_EXIST(int scriptIndex, const char* p1) { return invoke<BOOL>(0xEB16A0, scriptIndex, p1); }
static int BG_GET_LAUNCH_PARAM_VALUE(int scriptIndex, const char* p1) { return invoke<int>(0xEB1710, scriptIndex, p1); }
static int BG_GET_SCRIPT_ID_FROM_NAME_HASH(Hash p0) { return invoke<int>(0xEB1790, p0); }
static void REGISTER_SCRIPT_VARIABLE(Any* variable) { invoke<Void>(0xEAFE10, variable); }
static void UNREGISTER_SCRIPT_VARIABLE(Any* variable) { invoke<Void>(0xEAFE10, variable); }
static void FORCE_CHECK_SCRIPT_VARIABLES() { invoke<Void>(0xEAFE70); }
static int START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0xEB3290, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0xEB32C0, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int START_SHAPE_TEST_BOUNDING_BOX(Entity entity, int flags1, int flags2) { return invoke<int>(0xEB32F0, entity, flags1, flags2); }
static int START_SHAPE_TEST_BOX(float x, float y, float z, float dimX, float dimY, float dimZ, float rotX, float rotY, float rotZ, Any p9, int flags, Entity entity, Any p12) { return invoke<int>(0xEB3320, x, y, z, dimX, dimY, dimZ, rotX, rotY, rotZ, p9, flags, entity, p12); }
static int START_SHAPE_TEST_BOUND(Entity entity, int flags1, int flags2) { return invoke<int>(0xEB3360, entity, flags1, flags2); }
static int START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p9) { return invoke<int>(0xEB3390, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
static int START_SHAPE_TEST_SWEPT_SPHERE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return invoke<int>(0xEB33D0, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
static int START_SHAPE_TEST_MOUSE_CURSOR_LOS_PROBE(vector3* pVec1, vector3* pVec2, int flag, Entity entity, int flag2) { return invoke<int>(0xEB3410, pVec1, pVec2, flag, entity, flag2); }
static int GET_SHAPE_TEST_RESULT(int shapeTestHandle, BOOL* hit, vector3* endCoords, vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0xEB34B0, shapeTestHandle, hit, endCoords, surfaceNormal, entityHit); }
static int GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(int shapeTestHandle, BOOL* hit, vector3* endCoords, vector3* surfaceNormal, Hash* materialHash, Entity* entityHit) { return invoke<int>(0xEB34B0, shapeTestHandle, hit, endCoords, surfaceNormal, materialHash, entityHit); }
static void RELEASE_SCRIPT_GUID_FROM_ENTITY(Entity entityHit) { invoke<Void>(0xEB3610, entityHit); }
static int SC_INBOX_GET_TOTAL_NUM_MESSAGES() { return invoke<int>(0xEB5810); }
static Hash SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(int msgIndex) { return invoke<Hash>(0xEB5830, msgIndex); }
static BOOL SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0xEB58A0, msgIndex); }
static BOOL SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0xEB58D0, msgIndex); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(int p0, const char* context, int* out) { return invoke<BOOL>(0xEB5900, p0, context, out); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_BOOL(int p0, const char* p1) { return invoke<BOOL>(0xEB5940, p0, p1); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, const char* context, char* out) { return invoke<BOOL>(0xEB59C0, p0, context, out); }
static BOOL SC_INBOX_MESSAGE_DO_APPLY(int p0) { return invoke<BOOL>(0xEB5A00, p0); }
static const char* SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(int p0) { return invoke<const char*>(0xEB5A30, p0); }
static void SC_INBOX_MESSAGE_PUSH_GAMER_T0_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0xEB5A90, gamerHandle); }
static void SC_INBOX_SEND_UGCSTATUPDATE_TO_RECIP_LIST(Any* data) { invoke<Void>(0xEB5B50, data); }
static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(int p0, Any* p1) { return invoke<BOOL>(0xEB5B90, p0, p1); }
static BOOL SC_INBOX_GET_BOUNTY_DATA_AT_INDEX(int index, Any* outData) { return invoke<BOOL>(0xEB5BC0, index, outData); }
static void SC_EMAIL_RETRIEVE_EMAILS(int offset, int limit) { invoke<Void>(0xEB5BF0, offset, limit); }
static int SC_EMAIL_GET_RETRIEVAL_STATUS() { return invoke<int>(0xEB5C20); }
static int SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() { return invoke<int>(0xEB5C40); }
static BOOL SC_EMAIL_GET_EMAIL_AT_INDEX(int p0, Any* p1) { return invoke<BOOL>(0xEB5C60, p0, p1); }
static void SC_EMAIL_DELETE_EMAILS(Any* p0, Any p1) { invoke<Void>(0xEB5CD0, p0, p1); }
static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0xEB5D10, gamerHandle); }
static void SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST() { invoke<Void>(0xEB5DB0); }
static void SC_EMAIL_SEND_EMAIL(const char* p0) { invoke<Void>(0xEB5DC0, p0); }
static BOOL SC_EMAIL_SET_CURRENT_EMAIL_TAG(Any p0) { return invoke<BOOL>(0xEB5E20, p0); }
static void SC_CACHE_NEW_ROCKSTAR_MSGS(BOOL toggle) { invoke<Void>(0xEB5E50, toggle); }
static BOOL SC_HAS_NEW_ROCKSTAR_MSG() { return invoke<BOOL>(0xEB5E70); }
static const char* SC_GET_NEW_ROCKSTAR_MSG() { return invoke<const char*>(0xEB5E80); }
static BOOL SC_PRESENCE_ATTR_SET_INT(Hash attrHash, int value) { return invoke<BOOL>(0xEB5EB0, attrHash, value); }
static BOOL SC_PRESENCE_ATTR_SET_FLOAT(Hash attrHash, float value) { return invoke<BOOL>(0xEB5EE0, attrHash, value); }
static BOOL SC_PRESENCE_ATTR_SET_STRING(Hash attrHash, const char* value) { return invoke<BOOL>(0xEB5F20, attrHash, value); }
static BOOL SC_PRESENCE_SET_ACTIVITY_RATING(Any p0, float p1) { return invoke<BOOL>(0xEB5F60, p0, p1); }
static BOOL SC_GAMERDATA_GET_INT(const char* name, int* value) { return invoke<BOOL>(0xEB5FA0, name, value); }
static BOOL SC_GAMERDATA_GET_FLOAT(const char* name, float* value) { return invoke<BOOL>(0xEB5FE0, name, value); }
static BOOL SC_GAMERDATA_GET_BOOL(const char* name) { return invoke<BOOL>(0xEB6020, name); }
static BOOL SC_GAMERDATA_GET_STRING(const char* name, char* value) { return invoke<BOOL>(0xEB6090, name, value); }
static BOOL SC_GAMERDATA_GET_ACTIVE_XP_BONUS(float* value) { return invoke<BOOL>(0xEB60D0, value); }
static BOOL SC_PROFANITY_CHECK_STRING(const char* string, int* token) { return invoke<BOOL>(0xEB6100, string, token); }
static BOOL SC_PROFANITY_CHECK_STRING_UGC(const char* string, int* token) { return invoke<BOOL>(0xEB6100, string, token); }
static BOOL SC_PROFANITY_GET_CHECK_IS_VALID(int token) { return invoke<BOOL>(0xEB6180, token); }
static BOOL SC_PROFANITY_GET_CHECK_IS_PENDING(int token) { return invoke<BOOL>(0xEB61E0, token); }
static BOOL SC_PROFANITY_GET_STRING_PASSED(int token) { return invoke<BOOL>(0xEB6240, token); }
static int SC_PROFANITY_GET_STRING_STATUS(int token) { return invoke<int>(0xEB62A0, token); }
static BOOL SC_LICENSEPLATE_CHECK_STRING(const char* p0, int* p1) { return invoke<BOOL>(0xEB63A0, p0, p1); }
static BOOL SC_LICENSEPLATE_GET_CHECK_IS_VALID(Any p0) { return invoke<BOOL>(0xEB63E0, p0); }
static BOOL SC_LICENSEPLATE_GET_CHECK_IS_PENDING(Any p0) { return invoke<BOOL>(0xEB6440, p0); }
static int SC_LICENSEPLATE_GET_COUNT(int token) { return invoke<int>(0xEB64A0, token); }
static const char* SC_LICENSEPLATE_GET_PLATE(int token, int plateIndex) { return invoke<const char*>(0xEB64F0, token, plateIndex); }
static const char* SC_LICENSEPLATE_GET_PLATE_DATA(int token, int plateIndex) { return invoke<const char*>(0xEB64F0, token, plateIndex); }
static BOOL SC_LICENSEPLATE_SET_PLATE_DATA(const char* oldPlateText, const char* newPlateText, Any* plateData) { return invoke<BOOL>(0xEB65B0, oldPlateText, newPlateText, plateData); }
static BOOL SC_LICENSEPLATE_ADD(const char* plateText, Any* plateData, int* token) { return invoke<BOOL>(0xEB6630, plateText, plateData, token); }
static BOOL SC_LICENSEPLATE_GET_ADD_IS_PENDING(int token) { return invoke<BOOL>(0xEB66A0, token); }
static int SC_LICENSEPLATE_GET_ADD_STATUS(int token) { return invoke<int>(0xEB6700, token); }
static BOOL SC_LICENSEPLATE_ISVALID(const char* plateText, int* token) { return invoke<BOOL>(0xEB6750, plateText, token); }
static BOOL SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(int token) { return invoke<BOOL>(0xEB6790, token); }
static int SC_LICENSEPLATE_GET_ISVALID_STATUS(int token) { return invoke<int>(0xEB67F0, token); }
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE() { return invoke<BOOL>(0xEB6840); }
static int SC_COMMUNITY_EVENT_GET_EVENT_ID() { return invoke<int>(0xEB6870); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT(const char* p0, int* p1) { return invoke<BOOL>(0xEB68A0, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT(const char* p0, float* p1) { return invoke<BOOL>(0xEB68E0, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING(const char* p0, char* p1) { return invoke<BOOL>(0xEB6920, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME(char* p0) { return invoke<BOOL>(0xEB6970, p0); }
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_FOR_TYPE(const char* p0) { return invoke<BOOL>(0xEB6840, p0); }
static int SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(const char* p0) { return invoke<int>(0xEB6870, p0); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_FOR_TYPE(const char* p0, int* p1, const char* p2) { return invoke<BOOL>(0xEB68A0, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_FOR_TYPE(const char* p0, float* p1, const char* p2) { return invoke<BOOL>(0xEB68E0, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_FOR_TYPE(const char* p0, char* p1, const char* p2) { return invoke<BOOL>(0xEB6920, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_FOR_TYPE(char* p0, const char* p1) { return invoke<BOOL>(0xEB6970, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_BY_ID(int p0) { return invoke<BOOL>(0xEB6840, p0); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(int p0, const char* p1, int* p2) { return invoke<BOOL>(0xEB68A0, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_BY_ID(int p0, const char* p1, float* p2) { return invoke<BOOL>(0xEB68E0, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(int p0, const char* p1, char* p2) { return invoke<BOOL>(0xEB6920, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(int p0, char* p1) { return invoke<BOOL>(0xEB6970, p0, p1); }
static BOOL SC_TRANSITION_NEWS_SHOW(Any p0) { return invoke<BOOL>(0xEB6CC0, p0); }
static BOOL SC_TRANSITION_NEWS_SHOW_TIMED(Any p0, Any p1) { return invoke<BOOL>(0xEB6CC0, p0, p1); }
static BOOL SC_TRANSITION_NEWS_SHOW_NEXT_ITEM() { return invoke<BOOL>(0xEB6CC0); }
static BOOL SC_TRANSITION_NEWS_HAS_EXTRA_DATA_TU() { return invoke<BOOL>(0xEB6D90); }
static BOOL SC_TRANSITION_NEWS_GET_EXTRA_DATA_INT_TU(const char* p0, int* p1) { return invoke<BOOL>(0xEB6DC0, p0, p1); }
static void SC_TRANSITION_NEWS_END() { invoke<Void>(0xEB6E00); }
static BOOL SC_PAUSE_NEWS_INIT_STARTER_PACK(Any p0) { return invoke<BOOL>(0xEB6E20, p0); }
static BOOL SC_PAUSE_NEWS_GET_PENDING_STORY(Any p0) { return invoke<BOOL>(0xEB6E60, p0); }
static void SC_PAUSE_NEWS_SHUTDOWN() { invoke<Void>(0xEB6E90); }
static const char* SC_ACCOUNT_INFO_GET_NICKNAME() { return invoke<const char*>(0xEB6EB0); }
static BOOL SC_ACHIEVEMENT_INFO_STATUS(int* p0) { return invoke<BOOL>(0xEB6ED0, p0); }
static BOOL SC_HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0xEAB280, achievementId); }
static BOOL STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<BOOL>(0xECF000, statSlot); }
static BOOL STAT_LOAD(int statSlot) { return invoke<BOOL>(0xECF0B0, statSlot); }
static BOOL STAT_SAVE(int p0, BOOL p1, int p2, BOOL p3) { return invoke<BOOL>(0xECF0E0, p0, p1, p2, p3); }
static void STAT_SET_OPEN_SAVETYPE_IN_JOB(int p0) { invoke<Void>(0xECF120, p0); }
static BOOL STAT_LOAD_PENDING(int statSlot) { return invoke<BOOL>(0xECF0B0, statSlot); }
static BOOL STAT_SAVE_PENDING() { return invoke<BOOL>(0xECF0E0); }
static BOOL STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<BOOL>(0xECF0E0); }
static BOOL STAT_DELETE_SLOT(int p0) { return invoke<BOOL>(0xECF1E0, p0); }
static BOOL STAT_SLOT_IS_LOADED(int statSlot) { return invoke<BOOL>(0xECF250, statSlot); }
static BOOL STAT_CLOUD_SLOT_LOAD_FAILED(int p0) { return invoke<BOOL>(0xECF280, p0); }
static int STAT_CLOUD_SLOT_LOAD_FAILED_CODE(Any p0) { return invoke<int>(0xECF280, p0); }
static void STAT_SET_BLOCK_SAVES(BOOL toggle) { invoke<Void>(0xECF300, toggle); }
static BOOL STAT_GET_BLOCK_SAVES() { return invoke<BOOL>(0xECF320); }
static BOOL STAT_CLOUD_SLOT_SAVE_FAILED(Any p0) { return invoke<BOOL>(0xECF340, p0); }
static void STAT_CLEAR_PENDING_SAVES(Any p0) { invoke<Void>(0xECF3C0, p0); }
static BOOL STAT_LOAD_DIRTY_READ_DETECTED() { return invoke<BOOL>(0xECF0B0); }
static void STAT_CLEAR_DIRTY_READ_DETECTED() { invoke<Void>(0xECF430); }
static BOOL STAT_GET_LOAD_SAFE_TO_PROGRESS_TO_MP_FROM_SP() { return invoke<BOOL>(0xECF460); }
static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0xECF4B0, statName, value, save); }
static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0xECF4E0, statName, value, save); }
static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0xECF520, statName, value, save); }
static BOOL STAT_SET_GXT_LABEL(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xECF560, statName, value, save); }
static BOOL STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) { return invoke<BOOL>(0xECF5A0, statName, value, numFields, save); }
static BOOL STAT_SET_STRING(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xECF5E0, statName, value, save); }
static BOOL STAT_SET_POS(Hash statName, float x, float y, float z, BOOL save) { return invoke<BOOL>(0xECF620, statName, x, y, z, save); }
static BOOL STAT_SET_MASKED_INT(Hash statName, int p1, int p2, int p3, BOOL save) { return invoke<BOOL>(0xECF660, statName, p1, p2, p3, save); }
static BOOL STAT_SET_USER_ID(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xECF6A0, statName, value, save); }
static BOOL STAT_SET_CURRENT_POSIX_TIME(Hash statName, BOOL p1) { return invoke<BOOL>(0xECF6E0, statName, p1); }
static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0xECF710, statHash, outValue, p2); }
static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0xECF7F0, statHash, outValue, p2); }
static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0xECF820, statHash, outValue, p2); }
static BOOL STAT_GET_DATE(Hash statHash, Any* outValue, int numFields, Any p3) { return invoke<BOOL>(0xECF850, statHash, outValue, numFields, p3); }
static const char* STAT_GET_STRING(Hash statHash, int p1) { return invoke<const char*>(0xECF880, statHash, p1); }
static BOOL STAT_GET_POS(Hash statName, float* outX, float* outY, float* outZ, Any p4) { return invoke<BOOL>(0xECF8B0, statName, outX, outY, outZ, p4); }
static BOOL STAT_GET_MASKED_INT(Hash statHash, int* outValue, int p2, int p3, Any p4) { return invoke<BOOL>(0xECF8F0, statHash, outValue, p2, p3, p4); }
static const char* STAT_GET_USER_ID(Hash statHash) { return invoke<const char*>(0xECF9C0, statHash); }
static const char* STAT_GET_LICENSE_PLATE(Hash statName) { return invoke<const char*>(0xECF9F0, statName); }
static BOOL STAT_SET_LICENSE_PLATE(Hash statName, const char* str) { return invoke<BOOL>(0xECFA20, statName, str); }
static void STAT_INCREMENT(Hash statName, float value) { invoke<Void>(0xECFA50, statName, value); }
static BOOL STAT_COMMUNITY_START_SYNCH() { return invoke<BOOL>(0xECFAD0); }
static BOOL STAT_COMMUNITY_SYNCH_IS_PENDING() { return invoke<BOOL>(0xECFB00); }
static BOOL STAT_COMMUNITY_GET_HISTORY(Hash statName, int p1, float* outValue) { return invoke<BOOL>(0xECFB10, statName, p1, outValue); }
static void STAT_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0xECFB50, p0); }
static void STAT_LOCAL_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0xECFB60, p0); }
static int STAT_GET_NUMBER_OF_DAYS(Hash statName) { return invoke<int>(0xECFBC0, statName); }
static int STAT_GET_NUMBER_OF_HOURS(Hash statName) { return invoke<int>(0xECFBE0, statName); }
static int STAT_GET_NUMBER_OF_MINUTES(Hash statName) { return invoke<int>(0xECFC00, statName); }
static int STAT_GET_NUMBER_OF_SECONDS(Hash statName) { return invoke<int>(0xECFC20, statName); }
static void STAT_SET_PROFILE_SETTING_VALUE(int profileSetting, int value) { invoke<Void>(0xECFC40, profileSetting, value); }
static void STATS_COMPLETED_CHARACTER_CREATION(Any p0) { invoke<Void>(0xECFCB0, p0); }
static int PACKED_STAT_GET_INT_STAT_INDEX(int p0) { return invoke<int>(0xECF710, p0); }
static Hash GET_PACKED_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xECFCF0, index, spStat, charStat, character); }
static Hash GET_PACKED_TU_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xECFDD0, index, spStat, charStat, character); }
static Hash GET_PACKED_NG_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character, const char* section) { return invoke<Hash>(0xECFEB0, index, spStat, charStat, character, section); }
static BOOL GET_PACKED_STAT_BOOL_CODE(int index, int characterSlot) { return invoke<BOOL>(0xECFF90, index, characterSlot); }
static int GET_PACKED_STAT_INT_CODE(int index, int characterSlot) { return invoke<int>(0xED0040, index, characterSlot); }
static void SET_PACKED_STAT_BOOL_CODE(int index, BOOL value, int characterSlot) { invoke<Void>(0xED00F0, index, value, characterSlot); }
static void SET_PACKED_STAT_INT_CODE(int index, int value, int characterSlot) { invoke<Void>(0xED0140, index, value, characterSlot); }
static void PLAYSTATS_BACKGROUND_SCRIPT_ACTION(const char* action, int value) { invoke<Void>(0xED0190, action, value); }
static void PLAYSTATS_NPC_INVITE(const char* p0) { invoke<Void>(0xED03A0, p0); }
static void PLAYSTATS_AWARD_XP(int amount, Hash type, Hash category) { invoke<Void>(0xED03B0, amount, type, category); }
static void PLAYSTATS_RANK_UP(int rank) { invoke<Void>(0xED03D0, rank); }
static void PLAYSTATS_STARTED_SESSION_IN_OFFLINEMODE() { invoke<Void>(0xED03E0); }
static void PLAYSTATS_ACTIVITY_DONE(int p0, int activityId) { invoke<Void>(0xED0470, p0, activityId); }
static void PLAYSTATS_LEAVE_JOB_CHAIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED0510, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MISSION_STARTED(const char* p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xED05D0, p0, p1, p2, p3); }
static void PLAYSTATS_MISSION_OVER(const char* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0xED05F0, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_MISSION_CHECKPOINT(const char* p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED06A0, p0, p1, p2, p3); }
static void PLAYSTATS_RANDOM_MISSION_DONE(const char* name, Any p1, Any p2, Any p3) { invoke<Void>(0xED06D0, name, p1, p2, p3); }
static void PLAYSTATS_ROS_BET(int amount, int act, Player player, float cm) { invoke<Void>(0xED0700, amount, act, player, cm); }
static void PLAYSTATS_RACE_CHECKPOINT(Vehicle p0, Any p1, int p2, int p3, Any p4) { invoke<Void>(0xED07B0, p0, p1, p2, p3, p4); }
static BOOL PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(int* playerAccountId, int* posixTime) { return invoke<BOOL>(0xED07E0, playerAccountId, posixTime); }
static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2) { invoke<Void>(0xED0810, p0, p1, p2); }
static void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED0830, p0, p1, p2, p3, p4); }
static void PLAYSTATS_CRATE_DROP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xED0860, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYSTATS_CRATE_CREATED(float p0, float p1, float p2) { invoke<Void>(0xED0910, p0, p1, p2); }
static void PLAYSTATS_HOLD_UP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED0940, p0, p1, p2, p3); }
static void PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED0970, p0, p1, p2, p3); }
static void PLAYSTATS_RACE_TO_POINT_MISSION_DONE(int p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED09F0, p0, p1, p2, p3); }
static void PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(Any p0) { invoke<Void>(0xED0AB0, p0); }
static void PLAYSTATS_WEBSITE_VISITED(Hash scaleformHash, int p1) { invoke<Void>(0xED0AC0, scaleformHash, p1); }
static void PLAYSTATS_FRIEND_ACTIVITY(int p0, BOOL p1) { invoke<Void>(0xED0AD0, p0, p1); }
static void PLAYSTATS_ODDJOB_DONE(int totalTimeMs, int p1, BOOL p2) { invoke<Void>(0xED0AE0, totalTimeMs, p1, p2); }
static void PLAYSTATS_PROP_CHANGE(Ped p0, int p1, int p2, int p3) { invoke<Void>(0xED0AF0, p0, p1, p2, p3); }
static void PLAYSTATS_CLOTH_CHANGE(Ped p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED0B80, p0, p1, p2, p3, p4); }
static void PLAYSTATS_WEAPON_MODE_CHANGE(Hash weaponHash, Hash componentHashTo, Hash componentHashFrom) { invoke<Void>(0xED0C00, weaponHash, componentHashTo, componentHashFrom); }
static void PLAYSTATS_CHEAT_APPLIED(const char* cheat) { invoke<Void>(0xED0CC0, cheat); }
static void PLAYSTATS_JOB_ACTIVITY_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xED0CE0, p0, p1, p2, p3); }
static void PLAYSTATS_JOB_BEND(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xED0D00, p0, p1, p2, p3); }
static void PLAYSTATS_JOB_LTS_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xED0D20, p0, p1, p2, p3); }
static void PLAYSTATS_JOB_LTS_ROUND_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xED0D40, p0, p1, p2, p3); }
static void PLAYSTATS_QUICKFIX_TOOL(int element, const char* item) { invoke<Void>(0xED0D60, element, item); }
static void PLAYSTATS_IDLE_KICK(int msStoodIdle) { invoke<Void>(0xED0E10, msStoodIdle); }
static void PLAYSTATS_SET_JOIN_TYPE(int joinType) { invoke<Void>(0xED0E90, joinType); }
static void PLAYSTATS_HEIST_SAVE_CHEAT(Hash hash, int p1) { invoke<Void>(0xED0EA0, hash, p1); }
static void PLAYSTATS_APPEND_DIRECTOR_METRIC(Any* p0) { invoke<Void>(0xED0EB0, p0); }
static void PLAYSTATS_AWARD_BAD_SPORT(int id) { invoke<Void>(0xED0F30, id); }
static void PLAYSTATS_PEGASUS_AS_PERSONAL_AIRCRAFT(Hash modelHash) { invoke<Void>(0xED0FA0, modelHash); }
static void _PLAYSTATS_SHOPMENU_NAV(Any p0, Any p1, Any p2) { invoke<Void>(0xED1020, p0, p1, p2); }
static void PLAYSTATS_FM_EVENT_CHALLENGES(Any p0) { invoke<Void>(0xED10C0, p0); }
static void PLAYSTATS_FM_EVENT_VEHICLETARGET(Any p0) { invoke<Void>(0xED10D0, p0); }
static void PLAYSTATS_FM_EVENT_URBANWARFARE(Any p0) { invoke<Void>(0xED10E0, p0); }
static void PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(Any p0) { invoke<Void>(0xED10F0, p0); }
static void PLAYSTATS_FM_EVENT_ATOB(Any p0) { invoke<Void>(0xED1100, p0); }
static void PLAYSTATS_FM_EVENT_PENNEDIN(Any p0) { invoke<Void>(0xED1110, p0); }
static void PLAYSTATS_FM_EVENT_PASSTHEPARCEL(Any p0) { invoke<Void>(0xED1120, p0); }
static void PLAYSTATS_FM_EVENT_HOTPROPERTY(Any p0) { invoke<Void>(0xED1130, p0); }
static void PLAYSTATS_FM_EVENT_DEADDROP(Any p0) { invoke<Void>(0xED1140, p0); }
static void PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(Any p0) { invoke<Void>(0xED1150, p0); }
static void PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(Any p0) { invoke<Void>(0xED1160, p0); }
static void PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(Any p0) { invoke<Void>(0xED1170, p0); }
static void PLAYSTATS_FM_EVENT_HUNTBEAST(Any p0) { invoke<Void>(0xED1180, p0); }
static void PLAYSTATS_PIMENU_HIDE_OPTIONS(Any* data) { invoke<Void>(0xED1190, data); }
static int LEADERBOARDS_GET_NUMBER_OF_COLUMNS(int p0, Any p1) { return invoke<int>(0xED1280, p0, p1); }
static int LEADERBOARDS_GET_COLUMN_ID(int p0, int p1, int p2) { return invoke<int>(0xED12C0, p0, p1, p2); }
static int LEADERBOARDS_GET_COLUMN_TYPE(int p0, Any p1, Any p2) { return invoke<int>(0xED1310, p0, p1, p2); }
static int LEADERBOARDS_READ_CLEAR_ALL() { return invoke<int>(0xED1380); }
static int LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<int>(0xED13C0, p0, p1, p2); }
static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xED1430, p0, p1, p2); }
static BOOL LEADERBOARDS_READ_ANY_PENDING() { return invoke<BOOL>(0xED1460); }
static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xED14B0, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0xED1530, p0, p1, p2, p3, p4, p5); }
static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0xED1570, p0, p1); }
static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xED15A0, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xED15D0, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xED1600, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0xED1630, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_RANK_PREDICTION(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xED1660, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_PLAFORM(Any* p0, const char* gamerHandleCsv, const char* platformName) { return invoke<BOOL>(0xED1690, p0, gamerHandleCsv, platformName); }
static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_START(Any* p0) { return invoke<BOOL>(0xED16C0, p0); }
static void LEADERBOARDS2_READ_GET_ROW_DATA_END() { invoke<Void>(0xED16F0); }
static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_INFO(Any p0, Any* p1) { return invoke<BOOL>(0xED1720, p0, p1); }
static int LEADERBOARDS2_READ_GET_ROW_DATA_INT(Any p0, Any p1) { return invoke<int>(0xED1860, p0, p1); }
static float LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(Any p0, Any p1) { return invoke<float>(0xED1890, p0, p1); }
static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0xED18C0, p0); }
static void LEADERBOARDS_WRITE_ADD_COLUMN(Any p0, Any p1, float p2) { invoke<Void>(0xED18F0, p0, p1, p2); }
static void LEADERBOARDS_WRITE_ADD_COLUMN_LONG(Any p0, Any p1, Any p2) { invoke<Void>(0xED18F0, p0, p1, p2); }
static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0xED1930, p0); }
static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0xED1960); }
static void LEADERBOARDS_CLEAR_CACHE_DATA_ID(Any p0) { invoke<Void>(0xED1960, p0); }
static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0xED19A0, p0); }
static int LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<int>(0xED1A00, p0); }
static int LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Any p0) { return invoke<int>(0xED1A60, p0); }
static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xED1AA0, p0, p1, p2); }
static void PRESENCE_EVENT_UPDATESTAT_INT(Hash statHash, int value, int p2) { invoke<Void>(0xED1AD0, statHash, value, p2); }
static void PRESENCE_EVENT_UPDATESTAT_FLOAT(Hash statHash, float value, int p2) { invoke<Void>(0xED1AF0, statHash, value, p2); }
static void PRESENCE_EVENT_UPDATESTAT_INT_WITH_STRING(Hash statHash, int value, int p2, const char* string) { invoke<Void>(0xED1AD0, statHash, value, p2, string); }
static BOOL GET_PLAYER_HAS_DRIVEN_ALL_VEHICLES() { return invoke<BOOL>(0xED1B50); }
static void SET_HAS_POSTED_ALL_VEHICLES_DRIVEN() { invoke<Void>(0xED1B80); }
static void SET_PROFILE_SETTING_PROLOGUE_COMPLETE() { invoke<Void>(0xED1BD0); }
static void SET_PROFILE_SETTING_SP_CHOP_MISSION_COMPLETE() { invoke<Void>(0xED1C20); }
static void SET_PROFILE_SETTING_CREATOR_RACES_DONE(int value) { invoke<Void>(0xED1C70, value); }
static void SET_PROFILE_SETTING_CREATOR_DM_DONE(int value) { invoke<Void>(0xED1CD0, value); }
static void SET_PROFILE_SETTING_CREATOR_CTF_DONE(int value) { invoke<Void>(0xED1D30, value); }
static void SET_JOB_ACTIVITY_ID_STARTED(Any p0, int characterSlot) { invoke<Void>(0xED1D90, p0, characterSlot); }
static void SET_FREEMODE_PROLOGUE_DONE(Any p0, int characterSlot) { invoke<Void>(0xED1DA0, p0, characterSlot); }
static void SET_FREEMODE_STRAND_PROGRESSION_STATUS(int profileSetting, int settingValue) { invoke<Void>(0xED1DB0, profileSetting, settingValue); }
static void STAT_NETWORK_INCREMENT_ON_SUICIDE(Any p0, float p1) { invoke<Void>(0xED1E00, p0, p1); }
static void STAT_SET_CHEAT_IS_ACTIVE() { invoke<Void>(0xED1E80); }
static BOOL LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(Any* p0, Any* p1) { return invoke<BOOL>(0xED18C0, p0, p1); }
static void FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE() { invoke<Void>(0xED1ED0); }
static void STAT_MIGRATE_CLEAR_FOR_RESTART() { invoke<Void>(0xED1F20); }
static BOOL STAT_MIGRATE_SAVEGAME_START(const char* platformName) { return invoke<BOOL>(0xED1F30, platformName); }
static int STAT_MIGRATE_SAVEGAME_GET_STATUS() { return invoke<int>(0xED1F40); }
static BOOL STAT_MIGRATE_CHECK_ALREADY_DONE() { return invoke<BOOL>(0xED1F50); }
static BOOL STAT_MIGRATE_CHECK_START() { return invoke<BOOL>(0xED1F60); }
static int STAT_MIGRATE_CHECK_GET_IS_PLATFORM_AVAILABLE(int p0) { return invoke<int>(0xED1F70, p0); }
static int STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(int p0, Any* p1) { return invoke<int>(0xED1F80, p0, p1); }
static int STAT_GET_SAVE_MIGRATION_STATUS(Any* data) { return invoke<int>(0xED1F90, data); }
static BOOL STAT_SAVE_MIGRATION_CANCEL_PENDING_OPERATION() { return invoke<BOOL>(0xECF0E0); }
static int STAT_GET_CANCEL_SAVE_MIGRATION_STATUS() { return invoke<int>(0xED1FB0); }
static BOOL STAT_SAVE_MIGRATION_CONSUME_CONTENT(Hash contentId, const char* srcPlatform, const char* srcGamerHandle) { return invoke<BOOL>(0xECF0E0, contentId, srcPlatform, srcGamerHandle); }
static int STAT_GET_SAVE_MIGRATION_CONSUME_CONTENT_STATUS(int* p0) { return invoke<int>(0xED1FD0, p0); }
static void STAT_ENABLE_STATS_TRACKING() { invoke<Void>(0xED1FE0); }
static void STAT_DISABLE_STATS_TRACKING() { invoke<Void>(0xED1FF0); }
static BOOL STAT_IS_STATS_TRACKING_ENABLED() { return invoke<BOOL>(0xED2000); }
static BOOL STAT_START_RECORD_STAT(int statType, int valueType) { return invoke<BOOL>(0xED2020, statType, valueType); }
static BOOL STAT_STOP_RECORD_STAT() { return invoke<BOOL>(0xED2070); }
static BOOL STAT_GET_RECORDED_VALUE(float* value) { return invoke<BOOL>(0xED20A0, value); }
static BOOL STAT_IS_RECORDING_STAT() { return invoke<BOOL>(0xED20D0); }
static int STAT_GET_CURRENT_NEAR_MISS_NOCRASH_PRECISE() { return invoke<int>(0xED20F0); }
static float STAT_GET_CURRENT_REAR_WHEEL_DISTANCE() { return invoke<float>(0xDF67C0); }
static float STAT_GET_CURRENT_FRONT_WHEEL_DISTANCE() { return invoke<float>(0xDF67C0); }
static float STAT_GET_CURRENT_JUMP_DISTANCE() { return invoke<float>(0xDF67C0); }
static float STAT_GET_CURRENT_DRIVE_NOCRASH_DISTANCE() { return invoke<float>(0xDF67C0); }
static float STAT_GET_CURRENT_SPEED() { return invoke<float>(0xED21A0); }
static float STAT_GET_CURRENT_DRIVING_REVERSE_DISTANCE() { return invoke<float>(0xDF67C0); }
static float STAT_GET_CURRENT_SKYDIVING_DISTANCE() { return invoke<float>(0xDF67C0); }
static float STAT_GET_CHALLENGE_FLYING_DIST() { return invoke<float>(0xED2200); }
static BOOL STAT_GET_FLYING_ALTITUDE(float* outValue) { return invoke<BOOL>(0xED2220, outValue); }
static BOOL STAT_IS_PLAYER_VEHICLE_ABOVE_OCEAN() { return invoke<BOOL>(0xED2250); }
static float STAT_GET_VEHICLE_BAIL_DISTANCE() { return invoke<float>(0xDF67C0); }
static BOOL STAT_ROLLBACK_SAVE_MIGRATION() { return invoke<BOOL>(0xED2290); }
static void SET_HAS_SPECIALEDITION_CONTENT(int value) { invoke<Void>(0xED22A0, value); }
static void SET_SAVE_MIGRATION_TRANSACTION_ID_WARNING(int transactionId) { invoke<Void>(0xED22E0, transactionId); }
static void GET_BOSS_GOON_UUID(int characterSlot, Any p1, Any p2) { invoke<Void>(0xED2320, characterSlot, p1, p2); }
static void PLAYSTATS_BW_BOSSONBOSSDEATHMATCH(Any p0) { invoke<Void>(0xED2390, p0); }
static void PLAYSTATS_BW_YATCHATTACK(Any p0) { invoke<Void>(0xED23A0, p0); }
static void PLAYSTATS_BW_HUNT_THE_BOSS(Any p0) { invoke<Void>(0xED23B0, p0); }
static void PLAYSTATS_BW_SIGHTSEER(Any p0) { invoke<Void>(0xED23C0, p0); }
static void PLAYSTATS_BW_ASSAULT(Any p0) { invoke<Void>(0xED23D0, p0); }
static void PLAYSTATS_BW_BELLY_OF_THE_BEAST(Any p0) { invoke<Void>(0xED23E0, p0); }
static void PLAYSTATS_BW_HEAD_HUNTER(Any p0) { invoke<Void>(0xED23F0, p0); }
static void PLAYSTATS_BW_FRAGILE_GOODS(Any p0) { invoke<Void>(0xED2400, p0); }
static void PLAYSTATS_BW_AIR_FREIGHT(Any p0) { invoke<Void>(0xED2410, p0); }
static void PLAYSTATS_BC_CAR_JACKING(Any p0) { invoke<Void>(0xED2420, p0); }
static void PLAYSTATS_BC_SMASH_AND_GRAB(Any p0) { invoke<Void>(0xED2430, p0); }
static void PLAYSTATS_BC_PROTECTION_RACKET(Any p0) { invoke<Void>(0xED2440, p0); }
static void PLAYSTATS_BC_MOST_WANTED(Any p0) { invoke<Void>(0xED2450, p0); }
static void PLAYSTATS_BC_FINDERS_KEEPERS(Any p0) { invoke<Void>(0xED2460, p0); }
static void PLAYSTATS_BC_POINT_TO_POINT(Any p0) { invoke<Void>(0xED2470, p0); }
static void PLAYSTATS_BC_CASHING(Any p0) { invoke<Void>(0xED2480, p0); }
static void PLAYSTATS_BC_SALVAGE(Any p0) { invoke<Void>(0xED2490, p0); }
static void PLAYSTATS_SPENT_PI_CUSTOM_LOADOUT(int amount) { invoke<Void>(0xED24A0, amount); }
static void PLAYSTATS_BUY_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xED2570, data); }
static void PLAYSTATS_SELL_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xED2580, data); }
static void PLAYSTATS_DEFEND_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xED2590, data); }
static void PLAYSTATS_RECOVER_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xED25A0, data); }
static void PLAYSTATS_HIT_CONTRABAND_DESTROY_LIMIT(Any p0) { invoke<Void>(0xED25B0, p0); }
static void START_BEING_BOSS(Any p0) { invoke<Void>(0xED2640, p0); }
static void START_BEING_GOON(Any p0, Any p1, Any p2) { invoke<Void>(0xED2660, p0, p1, p2); }
static void END_BEING_BOSS(Any p0, Any p1) { invoke<Void>(0xED26F0, p0, p1); }
static void END_BEING_GOON(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2710, p0, p1, p2, p3, p4); }
static void HIRED_LIMO(Any p0, Any p1) { invoke<Void>(0xED2730, p0, p1); }
static void ORDER_BOSS_VEHICLE(Any p0, Any p1, Hash vehicleHash) { invoke<Void>(0xED27B0, p0, p1, vehicleHash); }
static void CHANGE_UNIFORM(Any p0, Any p1, Any p2) { invoke<Void>(0xED2860, p0, p1, p2); }
static void CHANGE_GOON_LOOKING_FOR_WORK(Any p0) { invoke<Void>(0xED28F0, p0); }
static void SEND_METRIC_GHOSTING_TO_PLAYER(Any p0) { invoke<Void>(0xED2910, p0); }
static void SEND_METRIC_VIP_POACH(Any p0, Any p1, Any p2) { invoke<Void>(0xED2920, p0, p1, p2); }
static void SEND_METRIC_PUNISH_BODYGUARD(Any p0) { invoke<Void>(0xED29F0, p0); }
static void PLAYSTATS_START_TRACKING_STUNTS() { invoke<Void>(0xED2AA0); }
static void PLAYSTATS_STOP_TRACKING_STUNTS() { invoke<Void>(0xED2AB0); }
static void PLAYSTATS_MISSION_ENDED(Any p0) { invoke<Void>(0xED2AC0, p0); }
static void PLAYSTATS_IMPEXP_MISSION_ENDED(Any p0) { invoke<Void>(0xED2AD0, p0); }
static void PLAYSTATS_CHANGE_MC_ROLE(Any p0, Any p1, Any p2, Any p3, int role, int p5, Any p6) { invoke<Void>(0xED2AE0, p0, p1, p2, p3, role, p5, p6); }
static void PLAYSTATS_CHANGE_MC_OUTFIT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B10, p0, p1, p2, p3, p4); }
static void PLAYSTATS_SWITCH_MC_EMBLEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B30, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MC_REQUEST_BIKE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B50, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MC_KILLED_RIVAL_MC_MEMBER(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B70, p0, p1, p2, p3, p4); }
static void PLAYSTATS_ABANDONED_MC(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED2B90, p0, p1, p2, p3, p4); }
static void PLAYSTATS_EARNED_MC_POINTS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xED2BB0, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_MC_FORMATION_ENDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xED2BD0, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_MC_CLUBHOUSE_ACTIVITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xED2C00, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYSTATS_RIVAL_BEHAVIOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xED2C40, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void PLAYSTATS_COPY_RANK_INTO_NEW_SLOT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xED2D70, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_DUPE_DETECTED(Any* data) { invoke<Void>(0xED2E30, data); }
static void PLAYSTATS_BAN_ALERT(int p0) { invoke<Void>(0xED2EF0, p0); }
static void PLAYSTATS_GUNRUNNING_MISSION_ENDED(Any* data) { invoke<Void>(0xED2F60, data); }
static void PLAYSTATS_GUNRUNNING_RND(Any p0) { invoke<Void>(0xED2F70, p0); }
static void PLAYSTATS_BUSINESS_BATTLE_ENDED(Any p0) { invoke<Void>(0xED3040, p0); }
static void PLAYSTATS_WAREHOUSE_MISSION_ENDED(Any p0) { invoke<Void>(0xED3050, p0); }
static void PLAYSTATS_NIGHTCLUB_MISSION_ENDED(Any p0) { invoke<Void>(0xED3060, p0); }
static void PLAYSTATS_DJ_USAGE(Any p0, Any p1) { invoke<Void>(0xED3070, p0, p1); }
static void PLAYSTATS_MINIGAME_USAGE(Any p0, Any p1, Any p2) { invoke<Void>(0xED3100, p0, p1, p2); }
static void PLAYSTATS_STONE_HATCHET_ENDED(Any* data) { invoke<Void>(0xED31A0, data); }
static void PLAYSTATS_SMUGGLER_MISSION_ENDED(Any* data) { invoke<Void>(0xED31B0, data); }
static void PLAYSTATS_FM_HEIST_PREP_ENDED(Any* data) { invoke<Void>(0xED31C0, data); }
static void PLAYSTATS_INSTANCED_HEIST_ENDED(Any* data, Any p1, Any p2, Any p3) { invoke<Void>(0xDF67C0, data, p1, p2, p3); }
static void PLAYSTATS_DAR_CHECKPOINT(Any* data) { invoke<Void>(0xED31F0, data); }
static void PLAYSTATS_ENTER_SESSION_PACK(Any* data) { invoke<Void>(0xED3200, data); }
static void PLAYSTATS_DRONE_USAGE(int p0, int p1, int p2) { invoke<Void>(0xED3210, p0, p1, p2); }
static void PLAYSTATS_SPIN_WHEEL(int p0, int p1, int p2, int p3) { invoke<Void>(0xED32B0, p0, p1, p2, p3); }
static void PLAYSTATS_ARENA_WARS_SPECTATOR(int p0, int p1, int p2, int p3, int p4) { invoke<Void>(0xED3370, p0, p1, p2, p3, p4); }
static void PLAYSTATS_ARENA_WARS_ENDED(Any* data) { invoke<Void>(0xED3430, data); }
static void PLAYSTATS_SWITCH_PASSIVE_MODE(BOOL p0, int p1, int p2, int p3) { invoke<Void>(0xED3440, p0, p1, p2, p3); }
static void PLAYSTATS_COLLECTIBLE_PICKED_UP(int p0, Hash objectHash, Any p2, Any p3, int moneyAmount, int rpAmount, int chipsAmount, Any p7, int p8, Any p9, Any p10) { invoke<Void>(0xED34E0, p0, objectHash, p2, p3, moneyAmount, rpAmount, chipsAmount, p7, p8, p9, p10); }
static void PLAYSTATS_CASINO_STORY_MISSION_ENDED(Any p0, Any p1) { invoke<Void>(0xDF6720, p0, p1); }
static void PLAYSTATS_CASINO_CHIP(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_ROULETTE(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_BLACKJACK(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_THREE_CARD_POKER(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_SLOT_MACHINE(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_INSIDE_TRACK(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_LUCKY_SEVEN(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_ROULETTE_LIGHT(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_BLACKJACK_LIGHT(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_THREE_CARD_POKER_LIGHT(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_SLOT_MACHINE_LIGHT(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_CASINO_INSIDE_TRACK_LIGHT(Any p0) { invoke<Void>(0xDF6720, p0); }
static void PLAYSTATS_ARCADE_GAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xED4130, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_ARCADE_LOVE_MATCH(Any p0, Any p1) { invoke<Void>(0xED41F0, p0, p1); }
static void PLAYSTATS_FREEMODE_CASINO_MISSION_ENDED(Any* data) { invoke<Void>(0xDF6720, data); }
static void PLAYSTATS_HEIST3_DRONE(Any p0) { invoke<Void>(0xED42A0, p0); }
static void PLAYSTATS_HEIST3_HACK(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xED4340, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_NPC_PHONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0xED43F0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void PLAYSTATS_ARCADE_CABINET(Any p0) { invoke<Void>(0xED4400, p0); }
static void PLAYSTATS_HEIST3_FINALE(Any p0) { invoke<Void>(0xED44B0, p0); }
static void PLAYSTATS_HEIST3_PREP(Any p0) { invoke<Void>(0xED4510, p0); }
static void PLAYSTATS_MASTER_CONTROL(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED4570, p0, p1, p2, p3); }
static void PLAYSTATS_QUIT_MODE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED4610, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MISSION_VOTE(Any p0) { invoke<Void>(0xED4700, p0); }
static void PLAYSTATS_NJVS_VOTE(Any p0) { invoke<Void>(0xED4710, p0); }
static void PLAYSTATS_FM_MISSION_END(Any p0, Any p1, Any p2) { invoke<Void>(0xED4830, p0, p1, p2); }
static void PLAYSTATS_HEIST4_PREP(Any p0) { invoke<Void>(0xED4850, p0); }
static void PLAYSTATS_HEIST4_FINALE(Any p0) { invoke<Void>(0xED48B0, p0); }
static void PLAYSTATS_HEIST4_HACK(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xED4910, p0, p1, p2, p3, p4); }
static void PLAYSTATS_SUB_WEAP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED49C0, p0, p1, p2, p3); }
static void PLAYSTATS_FAST_TRVL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0xED4A60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void PLAYSTATS_HUB_ENTRY(Any p0) { invoke<Void>(0xED4BA0, p0); }
static void PLAYSTATS_DJ_MISSION_ENDED(Any p0) { invoke<Void>(0xED4C70, p0); }
static void PLAYSTATS_ROBBERY_PREP(Any p0) { invoke<Void>(0xED4C80, p0); }
static void PLAYSTATS_ROBBERY_FINALE(Any p0) { invoke<Void>(0xED4CE0, p0); }
static void PLAYSTATS_EXTRA_EVENT(Any p0) { invoke<Void>(0xED4D40, p0); }
static void PLAYSTATS_CARCLUB_POINTS(Any p0) { invoke<Void>(0xED4DE0, p0); }
static void PLAYSTATS_CARCLUB_CHALLENGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED4ED0, p0, p1, p2, p3); }
static void PLAYSTATS_CARCLUB_PRIZE(int p0, Hash vehicleModel) { invoke<Void>(0xED4F70, p0, vehicleModel); }
static void PLAYSTATS_AWARD_NAV(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED4FF0, p0, p1, p2, p3); }
static void PLAYSTATS_INST_MISSION_END(Any p0) { invoke<Void>(0xED5120, p0); }
static void PLAYSTATS_HUB_EXIT(Any p0) { invoke<Void>(0xED5180, p0); }
static void PLAYSTATS_INVENTORY(Any p0) { invoke<Void>(0xED5320, p0); }
static void _PLAYSTATS_ACID_MISSION_END(Any p0) { invoke<Void>(0xED53D0, p0); }
static void _PLAYSTATS_ACID_RND(Any p0) { invoke<Void>(0xED5430, p0); }
static void _PLAYSTATS_IDLE(Any p0, Any p1, Any p2) { invoke<Void>(0xED5500, p0, p1, p2); }
static void _PLAYSTATS_PLAYER_STYLE(Any p0) { invoke<Void>(0xED55D0, p0); }
static void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0xED9170); }
static void LOAD_SCENE(float x, float y, float z) { invoke<Void>(0xED9190, x, y, z); }
static BOOL NETWORK_UPDATE_LOAD_SCENE() { return invoke<BOOL>(0xED9190); }
static BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0xED9240); }
static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { invoke<Void>(0xED9260, interiorID, toggle); }
static void REQUEST_MODEL(Hash model) { invoke<Void>(0xED9290, model); }
static void REQUEST_MENU_PED_MODEL(Hash model) { invoke<Void>(0xED92A0, model); }
static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0xED92C0, model); }
static void REQUEST_MODELS_IN_ROOM(Interior interior, const char* roomName) { invoke<Void>(0xED9290, interior, roomName); }
static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0xED9400, model); }
static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0xED9480, model); }
static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0xED94F0, model); }
static BOOL IS_MODEL_A_PED(Hash model) { return invoke<BOOL>(0xED9560, model); }
static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0xED95D0, model); }
static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xED9640, x, y, z); }
static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0xED9680, model); }
static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0xED9690, model); }
static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xED9730, x, y, z); }
static BOOL DOES_ANIM_DICT_EXIST(const char* animDict) { return invoke<BOOL>(0xED9770, animDict); }
static void REQUEST_ANIM_DICT(const char* animDict) { invoke<Void>(0xED97D0, animDict); }
static BOOL HAS_ANIM_DICT_LOADED(const char* animDict) { return invoke<BOOL>(0xED97E0, animDict); }
static void REMOVE_ANIM_DICT(const char* animDict) { invoke<Void>(0xED9860, animDict); }
static void REQUEST_ANIM_SET(const char* animSet) { invoke<Void>(0xED98E0, animSet); }
static BOOL HAS_ANIM_SET_LOADED(const char* animSet) { return invoke<BOOL>(0xED98F0, animSet); }
static void REMOVE_ANIM_SET(const char* animSet) { invoke<Void>(0xED9980, animSet); }
static void REQUEST_CLIP_SET(const char* clipSet) { invoke<Void>(0xED9A10, clipSet); }
static BOOL HAS_CLIP_SET_LOADED(const char* clipSet) { return invoke<BOOL>(0xED9A20, clipSet); }
static void REMOVE_CLIP_SET(const char* clipSet) { invoke<Void>(0xED9AB0, clipSet); }
static void REQUEST_IPL(const char* iplName) { invoke<Void>(0xED9B40, iplName); }
static void REMOVE_IPL(const char* iplName) { invoke<Void>(0xED9BC0, iplName); }
static BOOL IS_IPL_ACTIVE(const char* iplName) { return invoke<BOOL>(0xED9BD0, iplName); }
static void SET_STREAMING(BOOL toggle) { invoke<Void>(0xED9C20, toggle); }
static void LOAD_GLOBAL_WATER_FILE(int waterType) { invoke<Void>(0xED9C40, waterType); }
static int GET_GLOBAL_WATER_FILE() { return invoke<int>(0xED9C50); }
static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0xED9C70, toggle); }
static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xED9C90, toggle); }
static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xED9CB0, toggle); }
static void SET_DITCH_POLICE_MODELS(BOOL toggle) { invoke<Void>(0xED9CD0, toggle); }
static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0xED9CE0); }
static void REQUEST_PTFX_ASSET() { invoke<Void>(0xED9D00); }
static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0xED9D10); }
static void REMOVE_PTFX_ASSET() { invoke<Void>(0xED9D30); }
static void REQUEST_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0xED9D40, fxName); }
static BOOL HAS_NAMED_PTFX_ASSET_LOADED(const char* fxName) { return invoke<BOOL>(0xED9D50, fxName); }
static void REMOVE_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0xED9D80, fxName); }
static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<Void>(0xED9D90, p0); }
static void SET_PED_POPULATION_BUDGET(int p0) { invoke<Void>(0xED9DB0, p0); }
static void CLEAR_FOCUS() { invoke<Void>(0xED9DD0); }
static void SET_FOCUS_POS_AND_VEL(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0xED9DE0, x, y, z, offsetX, offsetY, offsetZ); }
static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0xED9E50, entity); }
static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0xED9ED0, entity); }
static void SET_RESTORE_FOCUS_ENTITY(Entity p0) { invoke<Void>(0xED9F30, p0); }
static void SET_MAPDATACULLBOX_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0xED9FB0, name, toggle); }
static void SET_ALL_MAPDATA_CULLED(Any p0) { invoke<Void>(0xED9FD0, p0); }
static int STREAMVOL_CREATE_SPHERE(float x, float y, float z, float rad, Any p4, Any p5) { return invoke<int>(0xED9FE0, x, y, z, rad, p4, p5); }
static int STREAMVOL_CREATE_FRUSTUM(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<int>(0xEDA0E0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static int STREAMVOL_CREATE_LINE(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<int>(0xEDA1C0, p0, p1, p2, p3, p4, p5, p6); }
static void STREAMVOL_DELETE(Any unused) { invoke<Void>(0xEDA270, unused); }
static BOOL STREAMVOL_HAS_LOADED(Any unused) { return invoke<BOOL>(0xEDA290, unused); }
static BOOL STREAMVOL_IS_VALID(Any unused) { return invoke<BOOL>(0xEDA2C0, unused); }
static BOOL IS_STREAMVOL_ACTIVE() { return invoke<BOOL>(0xEDA2D0); }
static BOOL NEW_LOAD_SCENE_START(float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7) { return invoke<BOOL>(0xED9190, posX, posY, posZ, offsetX, offsetY, offsetZ, radius, p7); }
static BOOL NEW_LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4) { return invoke<BOOL>(0xED9190, x, y, z, radius, p4); }
static void NEW_LOAD_SCENE_STOP() { invoke<Void>(0xED9190); }
static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0xED9190); }
static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0xED9190); }
static BOOL IS_SAFE_TO_START_PLAYER_SWITCH() { return invoke<BOOL>(0xEDA480); }
static void START_PLAYER_SWITCH(Ped from, Ped to, int flags, int switchType) { invoke<Void>(0xEDA4D0, from, to, flags, switchType); }
static void STOP_PLAYER_SWITCH() { invoke<Void>(0xEDA590); }
static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0xEDA5C0); }
static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0xEDA5F0); }
static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xEDA600, x1, y1, z1, x2, y2, z2); }
static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0xEDA660); }
static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0xEDA680); }
static void SET_PLAYER_SHORT_SWITCH_STYLE(int p0) { invoke<Void>(0xEDA6A0, p0); }
static int GET_PLAYER_SWITCH_JUMP_CUT_INDEX() { return invoke<int>(0xEDA6C0); }
static void SET_PLAYER_SWITCH_OUTRO(float cameraCoordX, float cameraCoordY, float cameraCoordZ, float camRotationX, float camRotationY, float camRotationZ, float camFov, float camFarClip, int rotationOrder) { invoke<Void>(0xEDA6E0, cameraCoordX, cameraCoordY, cameraCoordZ, camRotationX, camRotationY, camRotationZ, camFov, camFarClip, rotationOrder); }
static void SET_PLAYER_SWITCH_ESTABLISHING_SHOT(const char* name) { invoke<Void>(0xEDA7D0, name); }
static void ALLOW_PLAYER_SWITCH_PAN() { invoke<Void>(0xEDA830); }
static void ALLOW_PLAYER_SWITCH_OUTRO() { invoke<Void>(0xEDA870); }
static void ALLOW_PLAYER_SWITCH_ASCENT() { invoke<Void>(0xEDA8B0); }
static void ALLOW_PLAYER_SWITCH_DESCENT() { invoke<Void>(0xEDA8F0); }
static BOOL IS_SWITCH_READY_FOR_DESCENT() { return invoke<BOOL>(0xEDA930); }
static void ENABLE_SWITCH_PAUSE_BEFORE_DESCENT() { invoke<Void>(0xEDA970); }
static void DISABLE_SWITCH_OUTRO_FX() { invoke<Void>(0xEDA9B0); }
static void SWITCH_TO_MULTI_FIRSTPART(Ped ped, int flags, int switchType) { invoke<Void>(0xEDAA00, ped, flags, switchType); }
static void SWITCH_TO_MULTI_SECONDPART(Ped ped) { invoke<Void>(0xEDAA80, ped); }
static BOOL IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED() { return invoke<BOOL>(0xEDAA00); }
static int GET_PLAYER_SWITCH_INTERP_OUT_DURATION() { return invoke<int>(0xEDAB00); }
static int GET_PLAYER_SWITCH_INTERP_OUT_CURRENT_TIME() { return invoke<int>(0xEDAB20); }
static BOOL IS_SWITCH_SKIPPING_DESCENT() { return invoke<BOOL>(0xEDAB60); }
static void SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME() { invoke<Void>(0xEDABA0); }
static float GET_LODSCALE() { return invoke<float>(0xEDABB0); }
static void OVERRIDE_LODSCALE_THIS_FRAME(float scaling) { invoke<Void>(0xEDABD0, scaling); }
static void REMAP_LODSCALE_RANGE_THIS_FRAME(float p0, float p1, float p2, float p3) { invoke<Void>(0xEDABF0, p0, p1, p2, p3); }
static void SUPPRESS_HD_MAP_STREAMING_THIS_FRAME() { invoke<Void>(0xEDAC20); }
static void SET_RENDER_HD_ONLY(BOOL toggle) { invoke<Void>(0xEDAC30, toggle); }
static void FORCE_ALLOW_TIME_BASED_FADING_THIS_FRAME() { invoke<Void>(0xEDAC70); }
static void IPL_GROUP_SWAP_START(const char* iplName1, const char* iplName2) { invoke<Void>(0xEDAC80, iplName1, iplName2); }
static void IPL_GROUP_SWAP_CANCEL() { invoke<Void>(0xEDAC90); }
static BOOL IPL_GROUP_SWAP_IS_READY() { return invoke<BOOL>(0xEDACB0); }
static void IPL_GROUP_SWAP_FINISH() { invoke<Void>(0xEDACE0); }
static BOOL IPL_GROUP_SWAP_IS_ACTIVE() { return invoke<BOOL>(0xEDAD00); }
static void PREFETCH_SRL(const char* srl) { invoke<Void>(0xEDAD20, srl); }
static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0xEDAD40); }
static void BEGIN_SRL() { invoke<Void>(0xEDAD70); }
static void END_SRL() { invoke<Void>(0xEDAD80); }
static void SET_SRL_TIME(float p0) { invoke<Void>(0xEDAD90, p0); }
static void SET_SRL_POST_CUTSCENE_CAMERA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xEDADB0, p0, p1, p2, p3, p4, p5); }
static void SET_SRL_READAHEAD_TIMES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xEDAE00, p0, p1, p2, p3); }
static void SET_SRL_LONG_JUMP_MODE(BOOL p0) { invoke<Void>(0xEDAE20, p0); }
static void SET_SRL_FORCE_PRESTREAM(Any p0) { invoke<Void>(0xEDAE40, p0); }
static void SET_HD_AREA(float x, float y, float z, float radius) { invoke<Void>(0xEDAE60, x, y, z, radius); }
static void CLEAR_HD_AREA() { invoke<Void>(0xEDAEB0); }
static void INIT_CREATOR_BUDGET() { invoke<Void>(0xEDAEC0); }
static void SHUTDOWN_CREATOR_BUDGET() { invoke<Void>(0xEDAED0); }
static BOOL ADD_MODEL_TO_CREATOR_BUDGET(Hash modelHash) { return invoke<BOOL>(0xEDAEE0, modelHash); }
static void REMOVE_MODEL_FROM_CREATOR_BUDGET(Hash modelHash) { invoke<Void>(0xEDAF90, modelHash); }
static float GET_USED_CREATOR_BUDGET() { return invoke<float>(0xEDB030); }
static void SET_ISLAND_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0xEDB100, name, toggle); }
static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0xEF1EE0, ped, ms); }
static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0xDF67C0, ped, time); }
static void TASK_JUMP(Ped ped, BOOL usePlayerLaunchForce, BOOL doSuperJump, BOOL useFullSuperJumpForce) { invoke<Void>(0xEF1FE0, ped, usePlayerLaunchForce, doSuperJump, useFullSuperJumpForce); }
static void TASK_COWER(Ped ped, int duration) { invoke<Void>(0xEF2060, ped, duration); }
static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int timeToFacePed, int flags) { invoke<Void>(0xEF20E0, ped, duration, facingPed, timeToFacePed, flags); }
static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0xEF20E0, ped, duration); }
static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int seat, float speed) { invoke<Void>(0xEF2210, ped, vehicle, timeOut, seat, speed); }
static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, const char* overrideEntryClipsetName) { invoke<Void>(0xEF2230, ped, vehicle, timeout, seat, speed, flag, overrideEntryClipsetName); }
static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { invoke<Void>(0xEF2260, ped, vehicle, flags); }
static void TASK_GET_OFF_BOAT(Ped ped, Vehicle boat) { invoke<Void>(0xEF2280, ped, boat); }
static void TASK_SKY_DIVE(Ped ped, BOOL instant) { invoke<Void>(0xEF2300, ped, instant); }
static void TASK_PARACHUTE(Ped ped, BOOL giveParachuteItem, BOOL instant) { invoke<Void>(0xEF2320, ped, giveParachuteItem, instant); }
static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xEF2320, ped, x, y, z); }
static void SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xEF2430, ped, x, y, z); }
static void SET_PARACHUTE_TASK_THRUST(Ped ped, float thrust) { invoke<Void>(0xEF24B0, ped, thrust); }
static void TASK_RAPPEL_FROM_HELI(Ped ped, float minHeightAboveGround) { invoke<Void>(0xEF2520, ped, minHeightAboveGround); }
static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float straightLineDistance) { invoke<Void>(0xEF25A0, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, straightLineDistance); }
static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<Void>(0xEF25A0, ped, vehicle, x, y, z, speed, driveMode, stopRange); }
static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0xEF2640, ped, vehicle, speed, drivingStyle); }
static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing) { invoke<Void>(0xEF2710, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing); }
static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<Void>(0xEF2740, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); }
static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Ped ped, Entity entity, float x, float y, float z, float moveBlendRatio, int time) { invoke<Void>(0xEF2740, ped, entity, x, y, z, moveBlendRatio, time); }
static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0xEF2790, ped, heading, timeout); }
static void TASK_FLUSH_ROUTE() { invoke<Void>(0xEF27B0); }
static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0xEF27C0, x, y, z); }
static void TASK_FOLLOW_POINT_ROUTE(Ped ped, float speed, int mode) { invoke<Void>(0xEF2800, ped, speed, mode); }
static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float moveBlendRatio, float slowDownDistance, int flags) { invoke<Void>(0xEF2820, entity, target, duration, distance, moveBlendRatio, slowDownDistance, flags); }
static void TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, BOOL preferPavements, BOOL quitIfOutOfRange) { invoke<Void>(0xEF2850, ped, x, y, z, distance, time, preferPavements, quitIfOutOfRange); }
static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float safeDistance, int fleeTime, BOOL preferPavements, BOOL updateToNearestHatedPed) { invoke<Void>(0xEF2880, ped, fleeTarget, safeDistance, fleeTime, preferPavements, updateToNearestHatedPed); }
static void TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) { invoke<Void>(0xEF28B0, ped, fleeTarget); }
static void TASK_SHOCKING_EVENT_REACT(Ped ped, int eventHandle) { invoke<Void>(0xEF28C0, ped, eventHandle); }
static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks) { invoke<Void>(0xEF28D0, ped, x, y, z, radius, minimalLength, timeBetweenWalks); }
static void TASK_WANDER_STANDARD(Ped ped, float heading, int flags) { invoke<Void>(0xDF67C0, ped, heading, flags); }
static void TASK_WANDER_SPECIFIC(Ped ped, const char* conditionalAnimGroupStr, const char* conditionalAnimStr, float heading) { invoke<Void>(0xEF2A00, ped, conditionalAnimGroupStr, conditionalAnimStr, heading); }
static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { invoke<Void>(0xEF2A20, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); }
static void TASK_STEALTH_KILL(Ped killer, Ped target, Hash stealthKillActionResultHash, float desiredMoveBlendRatio, int stealthFlags) { invoke<Void>(0xEF2A50, killer, target, stealthKillActionResultHash, desiredMoveBlendRatio, stealthFlags); }
static void TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) { invoke<Void>(0xEF2A70, ped, x, y, z, heading); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float targetHeading) { invoke<Void>(0xEF2AB0, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, targetHeading); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float slideToCoordHeading, float maxSlopeNavigable, float clampMaxSearchDistance, float targetHeading) { invoke<Void>(0xEF2AB0, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, slideToCoordHeading, maxSlopeNavigable, clampMaxSearchDistance, targetHeading); }
static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { invoke<Void>(0xEF2AE0, ped, Toggle); }
static void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { invoke<Void>(0xEF2B40, ped, Toggle); }
static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { invoke<Void>(0xEF2BA0, ped, Toggle); }
static void SET_PED_PATH_CLIMB_COST_MODIFIER(Ped ped, float modifier) { invoke<Void>(0xEF2C00, ped, modifier); }
static void SET_PED_PATH_MAY_ENTER_WATER(Ped ped, BOOL mayEnterWater) { invoke<Void>(0xEF2C70, ped, mayEnterWater); }
static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater) { invoke<Void>(0xEF2CD0, ped, avoidWater); }
static void SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) { invoke<Void>(0xEF2D30, ped, avoidFire); }
static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<Void>(0xEF2D90, height); }
static int GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped ped, float* distanceRemaining, BOOL* isPathReady) { return invoke<int>(0xDF67C0, ped, distanceRemaining, isPathReady); }
static int GET_NAVMESH_ROUTE_RESULT(Ped ped) { return invoke<int>(0xEF2EA0, ped); }
static BOOL IS_CONTROLLED_VEHICLE_UNABLE_TO_GET_TO_ROAD(Ped ped) { return invoke<BOOL>(0xEF2EC0, ped); }
static void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets) { invoke<Void>(0xEF2F40, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float warpTimerMS) { invoke<Void>(0xEF2F40, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, warpTimerMS); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float cruiseSpeed, float targetArriveDist) { invoke<Void>(0xEF2F40, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, cruiseSpeed, targetArriveDist); }
static void TASK_PLAY_ANIM(Ped ped, const char* animDictionary, const char* animationName, float blendInSpeed, float blendOutSpeed, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { invoke<Void>(0xEF3000, ped, animDictionary, animationName, blendInSpeed, blendOutSpeed, duration, flag, playbackRate, lockX, lockY, lockZ); }
static void TASK_PLAY_ANIM_ADVANCED(Ped ped, const char* animDict, const char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float animEnterSpeed, float animExitSpeed, int duration, Any flag, float animTime, int rotOrder, int ikFlags) { invoke<Void>(0xEF3000, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, animEnterSpeed, animExitSpeed, duration, flag, animTime, rotOrder, ikFlags); }
static void STOP_ANIM_TASK(Entity entity, const char* animDictionary, const char* animationName, float blendDelta) { invoke<Void>(0xEF3180, entity, animDictionary, animationName, blendDelta); }
static void TASK_SCRIPTED_ANIMATION(Ped ped, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0xEF31A0, ped, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); }
static void PLAY_ENTITY_SCRIPTED_ANIM(Entity entity, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0xEF31D0, entity, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); }
static void STOP_ANIM_PLAYBACK(Entity entity, int priority, BOOL secondary) { invoke<Void>(0xEF3200, entity, priority, secondary); }
static void SET_ANIM_WEIGHT(Entity entity, float weight, int priority, int index, BOOL secondary) { invoke<Void>(0xEF32A0, entity, weight, priority, index, secondary); }
static void SET_ANIM_PHASE(Entity entity, float phase, int priority, BOOL secondary) { invoke<Void>(0xEF32C0, entity, phase, priority, secondary); }
static void SET_ANIM_RATE(Entity entity, float rate, int priority, BOOL secondary) { invoke<Void>(0xEF3370, entity, rate, priority, secondary); }
static void SET_ANIM_LOOPED(Entity entity, BOOL looped, int priority, BOOL secondary) { invoke<Void>(0xEF3420, entity, looped, priority, secondary); }
static void TASK_PLAY_PHONE_GESTURE_ANIMATION(Ped ped, const char* animDict, const char* animation, const char* boneMaskType, float blendInDuration, float blendOutDuration, BOOL isLooping, BOOL holdLastFrame) { invoke<Void>(0xEF3450, ped, animDict, animation, boneMaskType, blendInDuration, blendOutDuration, isLooping, holdLastFrame); }
static void TASK_STOP_PHONE_GESTURE_ANIMATION(Ped ped, float blendOutOverride) { invoke<Void>(0xEF3490, ped, blendOutOverride); }
static BOOL IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) { return invoke<BOOL>(0xEF3510, ped); }
static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Ped ped) { return invoke<float>(0xEF35A0, ped); }
static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Ped ped) { return invoke<float>(0xEF3640, ped); }
static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, const char* animationSet, const char* animationName) { invoke<Void>(0xEF36E0, vehicle, animationSet, animationName); }
static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, int duration, int flags, int priority) { invoke<Void>(0xEF3700, entity, x, y, z, duration, flags, priority); }
static void TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int flags, int priority) { invoke<Void>(0xEF3720, ped, lookAt, duration, flags, priority); }
static void TASK_CLEAR_LOOK_AT(Ped ped) { invoke<Void>(0xEF3740, ped); }
static void OPEN_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0xEF3750, taskSequenceId); }
static void CLOSE_SEQUENCE_TASK(int taskSequenceId) { invoke<Void>(0xEF37C0, taskSequenceId); }
static void TASK_PERFORM_SEQUENCE(Ped ped, int taskSequenceId) { invoke<Void>(0xEF3810, ped, taskSequenceId); }
static void TASK_PERFORM_SEQUENCE_LOCALLY(Ped ped, int taskSequenceId) { invoke<Void>(0xEF3810, ped, taskSequenceId); }
static void CLEAR_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0xEF3830, taskSequenceId); }
static void SET_SEQUENCE_TO_REPEAT(int taskSequenceId, BOOL repeat) { invoke<Void>(0xEF3870, taskSequenceId, repeat); }
static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0xEF3940, ped); }
static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskIndex) { return invoke<BOOL>(0xEF3960, ped, taskIndex); }
static int GET_SCRIPT_TASK_STATUS(Ped ped, Hash taskHash) { return invoke<int>(0xEF3A00, ped, taskHash); }
static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle vehicle) { return invoke<int>(0xEF3A70, vehicle); }
static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int delayTime, int flags) { invoke<Void>(0xEF3A90, ped, delayTime, flags); }
static void TASK_AIM_GUN_SCRIPTED(Ped ped, Hash scriptTask, BOOL disableBlockingClip, BOOL instantBlendToAim) { invoke<Void>(0xEF3AB0, ped, scriptTask, disableBlockingClip, instantBlendToAim); }
static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Ped ped, Ped target, float x, float y, float z, int gunTaskType, BOOL disableBlockingClip, BOOL forceAim) { invoke<Void>(0xEF3AB0, ped, target, x, y, z, gunTaskType, disableBlockingClip, forceAim); }
static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped ped, Ped target, float x, float y, float z, BOOL disableBlockingClip) { invoke<Void>(0xEF3AB0, ped, target, x, y, z, disableBlockingClip); }
static const char* GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(int gunTaskType) { return invoke<const char*>(0xEF3B30, gunTaskType); }
static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL instantBlendToAim) { invoke<Void>(0xEF3B70, ped, entity, duration, instantBlendToAim); }
static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { invoke<Void>(0xEF3B90, ped, entity, duration); }
static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL instantBlendToAim, BOOL playAnimIntro) { invoke<Void>(0xEF3BB0, ped, x, y, z, time, instantBlendToAim, playAnimIntro); }
static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { invoke<Void>(0xEF3BE0, ped, x, y, z, duration, firingPattern); }
static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle, BOOL useAlternateShuffle) { invoke<Void>(0xEF3C00, ped, vehicle, useAlternateShuffle); }
static void CLEAR_PED_TASKS(Ped ped) { invoke<Void>(0xEF3C20, ped); }
static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0xEF3CA0, ped); }
static void TASK_EVERYONE_LEAVE_VEHICLE(Vehicle vehicle) { invoke<Void>(0xEF3D30, vehicle); }
static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Entity entity, int time, float seekRadius, float seekAngleDeg, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0xEF3D40, ped, entity, time, seekRadius, seekAngleDeg, moveBlendRatio, gotoEntityOffsetFlags); }
static void TASK_GOTO_ENTITY_OFFSET_XY(Ped ped, Entity entity, int duration, float targetRadius, float offsetX, float offsetY, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0xEF3D40, ped, entity, duration, targetRadius, offsetX, offsetY, moveBlendRatio, gotoEntityOffsetFlags); }
static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { invoke<Void>(0xEF3DA0, ped, x, y, z, duration); }
static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0xEF3E90, driver, vehicle, action, time); }
static void TASK_VEHICLE_MISSION(Ped driver, Vehicle vehicle, Vehicle vehicleTarget, int missionType, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xEF3EB0, driver, vehicle, vehicleTarget, missionType, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); }
static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int missionType, float maxSpeed, int drivingStyle, float minDistance, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xEF3EB0, ped, vehicle, pedTarget, missionType, maxSpeed, drivingStyle, minDistance, straightLineDistance, DriveAgainstTraffic); }
static void TASK_VEHICLE_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, int mission, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xEF3EB0, ped, vehicle, x, y, z, mission, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); }
static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int minHeightAboveTerrain, float noRoadsDistance) { invoke<Void>(0xEF3FD0, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, minHeightAboveTerrain, noRoadsDistance); }
static void TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, float speed, int drivingStyle, int minDistance) { invoke<Void>(0xEF4000, driver, vehicle, targetEntity, speed, drivingStyle, minDistance); }
static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { invoke<Void>(0xEF4020, driver, targetEnt); }
static void TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int drivingFlags, float radius, int altitude, int heliFlags) { invoke<Void>(0xEF4030, pilot, vehicle, entityToFollow, targetSpeed, drivingFlags, radius, altitude, heliFlags); }
static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { invoke<Void>(0xEF4020, ped, flag, set); }
static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Ped ped, float distance) { invoke<Void>(0xDF67C0, ped, distance); }
static void TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xEF4160, pilot, entityToFollow, x, y, z); }
static void TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xEF4180, pilot, entityToFollow, x, y, z); }
static void TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<Void>(0xEF41A0, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); }
static void CLEAR_DEFAULT_PRIMARY_TASK(Ped ped) { invoke<Void>(0xEF41C0, ped); }
static void CLEAR_PRIMARY_VEHICLE_TASK(Vehicle vehicle) { invoke<Void>(0xEF4240, vehicle); }
static void CLEAR_VEHICLE_CRASH_TASK(Vehicle vehicle) { invoke<Void>(0xEF42A0, vehicle); }
static void TASK_PLANE_GOTO_PRECISE_VTOL(Ped ped, Vehicle vehicle, float x, float y, float z, int flightHeight, int minHeightAboveTerrain, BOOL useDesiredOrientation, float desiredOrientation, BOOL autopilot) { invoke<Void>(0xEF4300, ped, vehicle, x, y, z, flightHeight, minHeightAboveTerrain, useDesiredOrientation, desiredOrientation, autopilot); }
static void TASK_SUBMARINE_GOTO_AND_STOP(Ped ped, Vehicle submarine, float x, float y, float z, BOOL autopilot) { invoke<Void>(0xEF4350, ped, submarine, x, y, z, autopilot); }
static void TASK_HELI_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float maxSpeed, float radius, float targetHeading, int maxHeight, int minHeight, float slowDownDistance, int behaviorFlags) { invoke<Void>(0xEF4370, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, maxSpeed, radius, targetHeading, maxHeight, minHeight, slowDownDistance, behaviorFlags); }
static void TASK_HELI_ESCORT_HELI(Ped pilot, Vehicle heli1, Vehicle heli2, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0xEF43D0, pilot, heli1, heli2, offsetX, offsetY, offsetZ); }
static void TASK_PLANE_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float angularDrag, float targetReached, float targetHeading, float maxZ, float minZ, BOOL precise) { invoke<Void>(0xEF43F0, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, angularDrag, targetReached, targetHeading, maxZ, minZ, precise); }
static void TASK_PLANE_TAXI(Ped pilot, Vehicle aircraft, float x, float y, float z, float cruiseSpeed, float targetReached) { invoke<Void>(0xEF4450, pilot, aircraft, x, y, z, cruiseSpeed, targetReached); }
static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle vehicle, Vehicle targetVehicle, Ped targetPed, float x, float y, float z, int mission, float maxSpeed, int drivingStyle, float targetReached, Any boatFlags) { invoke<Void>(0xEF4470, pedDriver, vehicle, targetVehicle, targetPed, x, y, z, mission, maxSpeed, drivingStyle, targetReached, boatFlags); }
static void TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL pushUnderneathDrivingTaskIfDriving, Hash firingPattern) { invoke<Void>(0xEF44C0, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, pushUnderneathDrivingTaskIfDriving, firingPattern); }
static void SET_DRIVEBY_TASK_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) { invoke<Void>(0xEF4500, shootingPed, targetPed, targetVehicle, x, y, z); }
static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0xEF4520, ped); }
static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0xEF45B0, ped); }
static BOOL CONTROL_MOUNTED_WEAPON(Ped ped) { return invoke<BOOL>(0xEF4640, ped); }
static void SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z, int taskMode, BOOL ignoreTargetVehDeadCheck) { invoke<Void>(0xEF46E0, shootingPed, targetPed, targetVehicle, x, y, z, taskMode, ignoreTargetVehDeadCheck); }
static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0xEF4710, ped); }
static void TASK_USE_MOBILE_PHONE(Ped ped, BOOL usePhone, int desiredPhoneMode) { invoke<Void>(0xEF4780, ped, usePhone, desiredPhoneMode); }
static void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) { invoke<Void>(0xEF4780, ped, duration); }
static void TASK_CHAT_TO_PED(Ped ped, Ped target, int flags, float goToLocationX, float goToLocationY, float goToLocationZ, float headingDegs, float idleTime) { invoke<Void>(0xEF47B0, ped, target, flags, goToLocationX, goToLocationY, goToLocationZ, headingDegs, idleTime); }
static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0xEF47D0, ped, vehicle, seat); }
static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { invoke<Void>(0xEF47F0, entity, target, duration, firingPattern); }
static void TASK_CLIMB(Ped ped, BOOL usePlayerLaunchForce) { invoke<Void>(0xEF4810, ped, usePlayerLaunchForce); }
static void TASK_CLIMB_LADDER(Ped ped, BOOL fast) { invoke<Void>(0xEF4810, ped, fast); }
static void TASK_RAPPEL_DOWN_WALL_USING_CLIPSET_OVERRIDE(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, float minZ, int ropeHandle, const char* clipSet, Any p10) { invoke<Void>(0xEF48E0, ped, x1, y1, z1, x2, y2, z2, minZ, ropeHandle, clipSet, p10); }
static int GET_TASK_RAPPEL_DOWN_WALL_STATE(Ped ped) { return invoke<int>(0xEF4910, ped); }
static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { invoke<Void>(0xEF3C20, ped); }
static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, int taskIndex, int progress1, int progress2) { invoke<Void>(0xEF3810, ped, taskIndex, progress1, progress2); }
static void SET_NEXT_DESIRED_MOVE_STATE(float nextMoveState) { invoke<Void>(0xEF4A00, nextMoveState); }
static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float newMoveBlendRatio) { invoke<Void>(0xEF4A10, ped, newMoveBlendRatio); }
static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0xEF4A20, ped); }
static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0xEF4A70, ped, target, distanceToStopAt, StartAimingDist); }
static void TASK_SET_DECISION_MAKER(Ped ped, Hash decisionMakerId) { invoke<Void>(0xDB9360, ped, decisionMakerId); }
static void TASK_SET_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius) { invoke<Void>(0xEF4B30, ped, x, y, z, radius); }
static void TASK_CLEAR_DEFENSIVE_AREA(Ped ped) { invoke<Void>(0xEF4B50, ped); }
static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float speed) { invoke<Void>(0xEF4B60, ped, x, y, z, heading, speed); }
static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float speed, float headingChangeRate) { invoke<Void>(0xEF4B60, ped, x, y, z, heading, speed, headingChangeRate); }
static ScrHandle ADD_COVER_POINT(float x, float y, float z, float direction, int usage, int height, int arc, BOOL isPriority) { return invoke<ScrHandle>(0xEF4BA0, x, y, z, direction, usage, height, arc, isPriority); }
static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0xEF4C50, coverpoint); }
static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0xEF4C90, x, y, z); }
static vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<vector3>(0xEF4D20, coverpoint); }
static void ADD_SCRIPTED_COVER_AREA(float x, float y, float z, float radius) { invoke<Void>(0xEF4DF0, x, y, z, radius); }
static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int combatFlags, int threatResponseFlags) { invoke<Void>(0xEF4EB0, ped, targetPed, combatFlags, threatResponseFlags); }
static void TASK_COMBAT_PED_TIMED(Ped ped, Ped target, int time, int flags) { invoke<Void>(0xEF4EB0, ped, target, time, flags); }
static void TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0xEF4EF0, ped, x, y, z, duration, allowPeekingAndFiring); }
static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0xEF4F10, ped, target, duration, allowPeekingAndFiring); }
static void TASK_SEEK_COVER_TO_COVER_POINT(Ped ped, ScrHandle coverpoint, float x, float y, float z, int time, BOOL allowPeekingAndFiring) { invoke<Void>(0xEF4F30, ped, coverpoint, x, y, z, time, allowPeekingAndFiring); }
static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, int timeout, BOOL shortRoute) { invoke<Void>(0xEF4F50, ped, x1, y1, z1, x2, y2, z2, timeout, shortRoute); }
static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, int time, BOOL allowPeekingAndFiring, float blendInDuration, BOOL forceInitialFacingDirection, BOOL forceFaceLeft, int identifier, BOOL doEntry) { invoke<Void>(0xEF4F80, ped, x, y, z, time, allowPeekingAndFiring, blendInDuration, forceInitialFacingDirection, forceFaceLeft, identifier, doEntry); }
static void TASK_WARP_PED_DIRECTLY_INTO_COVER(Ped ped, int time, BOOL allowPeekingAndFiring, BOOL forceInitialFacingDirection, BOOL forceFaceLeft, int identifier) { invoke<Void>(0xEF5090, ped, time, allowPeekingAndFiring, forceInitialFacingDirection, forceFaceLeft, identifier); }
static void TASK_EXIT_COVER(Ped ped, int exitType, float x, float y, float z) { invoke<Void>(0xEF50D0, ped, exitType, x, y, z); }
static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float blendInDuration, float timeInMelee, float strafePhaseSync, int aiCombatFlags) { invoke<Void>(0xEF50F0, ped, meleeTarget, blendInDuration, timeInMelee, strafePhaseSync, aiCombatFlags); }
static void TASK_TOGGLE_DUCK(Ped ped, int toggleType) { invoke<Void>(0xEF5110, ped, toggleType); }
static void TASK_GUARD_CURRENT_POSITION(Ped ped, float maxPatrolProximity, float defensiveAreaRadius, BOOL setDefensiveArea) { invoke<Void>(0xEF51A0, ped, maxPatrolProximity, defensiveAreaRadius, setDefensiveArea); }
static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float heading, float maxPatrolProximity, int timer) { invoke<Void>(0xEF51C0, ped, x, y, z, heading, maxPatrolProximity, timer); }
static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped ped, float defendPositionX, float defendPositionY, float defendPositionZ, float heading, float maxPatrolProximity, int time, float x, float y, float z, float defensiveAreaRadius) { invoke<Void>(0xEF51E0, ped, defendPositionX, defendPositionY, defendPositionZ, heading, maxPatrolProximity, time, x, y, z, defensiveAreaRadius); }
static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, const char* scenarioName) { invoke<Void>(0xDF67C0, ped, x, y, z, heading, scenarioName); }
static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0xEF5230, driver, cruiseSpeed); }
static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Ped ped, float speed) { invoke<Void>(0xEF5240, ped, speed); }
static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { invoke<Void>(0xEF5260, ped, drivingStyle); }
static void ADD_COVER_BLOCKING_AREA(float startX, float startY, float startZ, float endX, float endY, float endZ, BOOL blockObjects, BOOL blockVehicles, BOOL blockMap, BOOL blockPlayer) { invoke<Void>(0xEF52F0, startX, startY, startZ, endX, endY, endZ, blockObjects, blockVehicles, blockMap, blockPlayer); }
static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0xEF53A0); }
static void REMOVE_COVER_BLOCKING_AREAS_AT_POSITION(float x, float y, float z) { invoke<Void>(0xEF53C0, x, y, z); }
static void REMOVE_SPECIFIC_COVER_BLOCKING_AREAS(float startX, float startY, float startZ, float endX, float endY, float endZ, BOOL blockObjects, BOOL blockVehicles, BOOL blockMap, BOOL blockPlayer) { invoke<Void>(0xEF5420, startX, startY, startZ, endX, endY, endZ, blockObjects, blockVehicles, blockMap, blockPlayer); }
static void TASK_START_SCENARIO_IN_PLACE(Ped ped, const char* scenarioName, int unkDelay, BOOL playEnterAnim) { invoke<Void>(0xEF54D0, ped, scenarioName, unkDelay, playEnterAnim); }
static void TASK_START_SCENARIO_AT_POSITION(Ped ped, const char* scenarioName, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport) { invoke<Void>(0xEF54F0, ped, scenarioName, x, y, z, heading, duration, sittingScenario, teleport); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration) { invoke<Void>(0xEF5530, ped, x, y, z, distance, duration); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0xEF5530, ped, x, y, z, radius, timeToLeave); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Ped ped, float x, float y, float z, float maxRange, int timeToLeave) { invoke<Void>(0xEF5690, ped, x, y, z, maxRange, timeToLeave); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0xEF5690, ped, x, y, z, radius, timeToLeave); }
static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL mustBeFree) { return invoke<BOOL>(0xEF56D0, x, y, z, radius, mustBeFree); }
static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float x, float y, float z, const char* scenarioName, float radius, BOOL mustBeFree) { return invoke<BOOL>(0xEF5770, x, y, z, scenarioName, radius, mustBeFree); }
static BOOL IS_SCENARIO_OCCUPIED(float x, float y, float z, float maxRange, BOOL onlyUsersActuallyAtScenario) { return invoke<BOOL>(0xEF5830, x, y, z, maxRange, onlyUsersActuallyAtScenario); }
static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0xEF5860, ped); }
static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, const char* animDict, const char* animName) { invoke<Void>(0xEF58C0, ped, animDict, animName); }
static BOOL DOES_SCENARIO_GROUP_EXIST(const char* scenarioGroup) { return invoke<BOOL>(0xEF58E0, scenarioGroup); }
static BOOL IS_SCENARIO_GROUP_ENABLED(const char* scenarioGroup) { return invoke<BOOL>(0xEF5960, scenarioGroup); }
static void SET_SCENARIO_GROUP_ENABLED(const char* scenarioGroup, BOOL enabled) { invoke<Void>(0xEF5A00, scenarioGroup, enabled); }
static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0xEF5A90); }
static void SET_EXCLUSIVE_SCENARIO_GROUP(const char* scenarioGroup) { invoke<Void>(0xEF5AA0, scenarioGroup); }
static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0xEF5AA0); }
static BOOL IS_SCENARIO_TYPE_ENABLED(const char* scenarioType) { return invoke<BOOL>(0xEF5B40, scenarioType); }
static void SET_SCENARIO_TYPE_ENABLED(const char* scenarioType, BOOL toggle) { invoke<Void>(0xEF5BD0, scenarioType, toggle); }
static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0xEF5C60); }
static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0xEF5C70, ped); }
static BOOL IS_PED_PLAYING_BASE_CLIP_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0xEF5CF0, ped); }
static void SET_PED_CAN_PLAY_AMBIENT_IDLES(Ped ped, BOOL blockIdleClips, BOOL removeIdleClipIfPlaying) { invoke<Void>(0xEF5D20, ped, blockIdleClips, removeIdleClipIfPlaying); }
static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, int combatFlags) { invoke<Void>(0xEF5DA0, ped, x, y, z, radius, combatFlags); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int combatFlags) { invoke<Void>(0xEF5EA0, ped, radius, combatFlags); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped ped, float radius, int time, int combatFlags) { invoke<Void>(0xEF5EA0, ped, radius, time, combatFlags); }
static void TASK_THROW_PROJECTILE(Ped ped, float x, float y, float z, int ignoreCollisionEntityIndex, BOOL createInvincibleProjectile) { invoke<Void>(0xEF6090, ped, x, y, z, ignoreCollisionEntityIndex, createInvincibleProjectile); }
static void TASK_SWAP_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0xEF60B0, ped, drawWeapon); }
static void TASK_RELOAD_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0xEF6130, ped, drawWeapon); }
static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0xEF6150, ped); }
static void TASK_WRITHE(Ped ped, Ped target, int minFireLoops, int startState, BOOL forceShootOnGround, int shootFromGroundTimer) { invoke<Void>(0xEF61B0, ped, target, minFireLoops, startState, forceShootOnGround, shootFromGroundTimer); }
static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0xEF61E0, ped); }
static void OPEN_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0xEF6240, patrolRoute); }
static void CLOSE_PATROL_ROUTE() { invoke<Void>(0xEF6260); }
static void ADD_PATROL_ROUTE_NODE(int nodeId, const char* nodeType, float posX, float posY, float posZ, float headingX, float headingY, float headingZ, int duration) { invoke<Void>(0xEF6270, nodeId, nodeType, posX, posY, posZ, headingX, headingY, headingZ, duration); }
static void ADD_PATROL_ROUTE_LINK(int nodeId1, int nodeId2) { invoke<Void>(0xEF6300, nodeId1, nodeId2); }
static void CREATE_PATROL_ROUTE() { invoke<Void>(0xEF6320); }
static void DELETE_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0xEF6330, patrolRoute); }
static BOOL GET_PATROL_TASK_INFO(Ped ped, int* timeLeftAtNode, int* nodeId) { return invoke<BOOL>(0xEF6370, ped, timeLeftAtNode, nodeId); }
static void TASK_PATROL(Ped ped, const char* patrolRouteName, int alertState, BOOL canChatToPeds, BOOL useHeadLookAt) { invoke<Void>(0xEF6410, ped, patrolRouteName, alertState, canChatToPeds, useHeadLookAt); }
static void TASK_STAY_IN_COVER(Ped ped) { invoke<Void>(0xEF64B0, ped); }
static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xEF6510, ped, x, y, z); }
static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped target) { invoke<Void>(0xEF6520, ped, target); }
static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float fireTolerance) { invoke<Void>(0xEF6530, ped, target, fireTolerance); }
static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0xEF6550, ped, target); }
static void TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float fireTolerance) { invoke<Void>(0xEF6560, ped, x, y, z, fireTolerance); }
static void TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xEF6580, ped, x, y, z); }
static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0xEF6590, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xEF65B0, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Ped ped, float x, float y, float z, Entity aimAtID, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern, int time) { invoke<Void>(0xEF6610, ped, x, y, z, aimAtID, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern, time); }
static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL useNavMesh, int navFlags, int taskFlags, Hash firingPattern) { invoke<Void>(0xEF6680, pedHandle, goToLocationX, goToLocationY, goToLocationZ, focusLocationX, focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance, useNavMesh, navFlags, taskFlags, firingPattern); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Ped ped, Entity entity, float aimX, float aimY, float aimZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xEF2820, ped, entity, aimX, aimY, aimZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xEF2820, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); }
static void SET_HIGH_FALL_TASK(Ped ped, int minTime, int maxTime, int entryType) { invoke<Void>(0xEF67A0, ped, minTime, maxTime, entryType); }
static void REQUEST_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0xEF67C0, name); }
static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(const char* name) { return invoke<BOOL>(0xEF6800, name); }
static void REMOVE_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0xEF6840, name); }
static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(const char* name, int* points) { return invoke<BOOL>(0xEF6880, name, points); }
static BOOL WAYPOINT_RECORDING_GET_COORD(const char* name, int point, vector3* coord) { return invoke<BOOL>(0xEF68E0, name, point, coord); }
static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(const char* name, int point) { return invoke<float>(0xEF6950, name, point); }
static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(const char* name, float x, float y, float z, int* point) { return invoke<BOOL>(0xEF69F0, name, x, y, z, point); }
static void TASK_FOLLOW_WAYPOINT_RECORDING(Ped ped, const char* name, int p2, int p3, int p4) { invoke<Void>(0xEF6AA0, ped, name, p2, p3, p4); }
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Ped ped) { return invoke<BOOL>(0xEF6B60, ped); }
static int GET_PED_WAYPOINT_PROGRESS(Ped ped) { return invoke<int>(0xEF6BE0, ped); }
static float GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<float>(0xDF67C0, p0); }
static BOOL SET_PED_WAYPOINT_ROUTE_OFFSET(Ped ped, float x, float y, float z) { return invoke<BOOL>(0xEF6D70, ped, x, y, z); }
static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(const char* name, int point) { return invoke<float>(0xDF67C0, name, point); }
static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0xEF6E80, p0); }
static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xEF6F10, p0, p1, p2); }
static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0xEF6FB0, p0, p1, p2, p3); }
static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { invoke<Void>(0xEF7050, p0, p1, p2); }
static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0xEF7110, p0); }
static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(const char* name, BOOL p1, float p2, float p3) { invoke<Void>(0xEF7180, name, p1, p2, p3); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Ped ped, Ped target, BOOL p2) { invoke<Void>(0xEF71A0, ped, target, p2); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4) { invoke<Void>(0xEF7260, ped, x, y, z, p4); }
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Ped ped, Ped ped2, BOOL p2, BOOL p3) { invoke<Void>(0xEF7330, ped, ped2, p2, p3); }
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4, Hash firingPattern) { invoke<Void>(0xEF7350, ped, x, y, z, p4, firingPattern); }
static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Ped ped) { invoke<Void>(0xEF7370, ped); }
static void ASSISTED_MOVEMENT_REQUEST_ROUTE(const char* route) { invoke<Void>(0xEF73E0, route); }
static void ASSISTED_MOVEMENT_REMOVE_ROUTE(const char* route) { invoke<Void>(0xEF73F0, route); }
static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(const char* route) { return invoke<BOOL>(0xEF7430, route); }
static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(const char* route, int props) { invoke<Void>(0xEF74B0, route, props); }
static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<Void>(0xDF67C0, dist); }
static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Vehicle vehicle, const char* WPRecording, int p3, int p4, int p5, int p6, float p7, BOOL p8, float p9) { invoke<Void>(0xEF4000, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9); }
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xEF7530, vehicle); }
static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) { return invoke<int>(0xEF75B0, vehicle); }
static int GET_VEHICLE_WAYPOINT_TARGET_POINT(Vehicle vehicle) { return invoke<int>(0xEF7630, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Vehicle vehicle) { invoke<Void>(0xEF6F10, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Vehicle vehicle) { invoke<Void>(0xEF6FB0, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Vehicle vehicle) { invoke<Void>(0xEF7110, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xEF7050, vehicle, speed); }
static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xE97810, ped, toggle); }
static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL forceRestart) { invoke<Void>(0xEF79A0, ped, state, forceRestart); }
static void TASK_MOVE_NETWORK_BY_NAME(Ped ped, const char* task, float multiplier, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xEF79C0, ped, task, multiplier, allowOverrideCloneUpdate, animDict, flags); }
static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME(Ped ped, const char* network, float x, float y, float z, float rotX, float rotY, float rotZ, int rotOrder, float blendDuration, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xEF79F0, ped, network, x, y, z, rotX, rotY, rotZ, rotOrder, blendDuration, allowOverrideCloneUpdate, animDict, flags); }
static void TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* network, int* initialParameters, float blendDuration, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xEF79C0, ped, network, initialParameters, blendDuration, allowOverrideCloneUpdate, animDict, flags); }
static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* network, int* initialParameters, float x, float y, float z, float rotX, float rotY, float rotZ, int rotOrder, float blendDuration, BOOL allowOverrideCloneUpdate, const char* dictionary, int flags) { invoke<Void>(0xEF79F0, ped, network, initialParameters, x, y, z, rotX, rotY, rotZ, rotOrder, blendDuration, allowOverrideCloneUpdate, dictionary, flags); }
static BOOL IS_TASK_MOVE_NETWORK_ACTIVE(Ped ped) { return invoke<BOOL>(0xEF7AD0, ped); }
static BOOL IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Ped ped) { return invoke<BOOL>(0xEF7B60, ped); }
static BOOL REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Ped ped, const char* name) { return invoke<BOOL>(0xEF7C10, ped, name); }
static BOOL SET_EXPECTED_CLONE_NEXT_TASK_MOVE_NETWORK_STATE(Ped ped, const char* state) { return invoke<BOOL>(0xEF7C20, ped, state); }
static const char* GET_TASK_MOVE_NETWORK_STATE(Ped ped) { return invoke<const char*>(0xEF7C30, ped); }
static void SET_TASK_MOVE_NETWORK_ANIM_SET(Ped ped, Hash clipSet, Hash variableClipSet) { invoke<Void>(0xEF7CE0, ped, clipSet, variableClipSet); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0xEF7D00, ped, signalName, value); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_LOCAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0xEF7D20, ped, signalName, value); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_LERP_RATE(Ped ped, const char* signalName, float value) { invoke<Void>(0xEF7D00, ped, signalName, value); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName, BOOL value) { invoke<Void>(0xEF7E80, ped, signalName, value); }
static float GET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName) { return invoke<float>(0xEF7EA0, ped, signalName); }
static BOOL GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName) { return invoke<BOOL>(0xEF7F50, ped, signalName); }
static BOOL GET_TASK_MOVE_NETWORK_EVENT(Ped ped, const char* eventName) { return invoke<BOOL>(0xEF7FF0, ped, eventName); }
static BOOL SET_TASK_MOVE_NETWORK_ENABLE_COLLISION_ON_NETWORK_CLONE_WHEN_FIXED(Ped ped, BOOL enable) { return invoke<BOOL>(0xEF8090, ped, enable); }
static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0xEF8200, ped); }
static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0xEF8220, ped); }
static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0xEF8260, ped); }
static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0xEF82A0, ped); }
static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0xEF82C0, ped); }
static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0xEF8370, ped); }
static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0xEF8420, ped); }
static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0xEF84D0, ped); }
static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0xEF8570, ped); }
static void TASK_SYNCHRONIZED_SCENE(Ped ped, int scene, const char* animDictionary, const char* animationName, float blendIn, float blendOut, int flags, int ragdollBlockingFlags, float moverBlendDelta, int ikFlags) { invoke<Void>(0xEF85D0, ped, scene, animDictionary, animationName, blendIn, blendOut, flags, ragdollBlockingFlags, moverBlendDelta, ikFlags); }
static void TASK_AGITATED_ACTION_CONFRONT_RESPONSE(Ped ped, Ped ped2) { invoke<Void>(0xEF8620, ped, ped2); }
static void TASK_SWEEP_AIM_ENTITY(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, Entity targetEntity, float turnRate, float blendInDuration) { invoke<Void>(0xEF8630, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, targetEntity, turnRate, blendInDuration); }
static void UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) { invoke<Void>(0xEF8630, ped, entity); }
static void TASK_SWEEP_AIM_POSITION(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, float x, float y, float z, float turnRate, float blendInDuration) { invoke<Void>(0xEF8680, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, x, y, z, turnRate, blendInDuration); }
static void UPDATE_TASK_SWEEP_AIM_POSITION(Ped ped, float x, float y, float z) { invoke<Void>(0xEF8680, ped, x, y, z); }
static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0xEF8750, ped, target); }
static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0xEF8420, ped); }
static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0xEF87F0, ped); }
static void UNCUFF_PED(Ped ped) { invoke<Void>(0xEF8800, ped); }
static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0xEF8850, ped); }
static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh) { return invoke<Vehicle>(0xF1AFB0, modelHash, x, y, z, heading, isNetwork, bScriptHostVeh); }
static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0xF1B000, vehicle); }
static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(Vehicle vehicle, BOOL toggle, BOOL p2) { invoke<Void>(0xF1B010, vehicle, toggle, p2); }
static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(Vehicle vehicle, BOOL canBeLockedOn, BOOL p2) { invoke<Void>(0xF1B010, vehicle, canBeLockedOn, p2); }
static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL toggle) { invoke<Void>(0xF1B190, veh, toggle); }
static int GET_VEHICLE_HOMING_LOCKON_STATE(Vehicle vehicle) { return invoke<int>(0xF1B230, vehicle); }
static int GET_VEHICLE_HOMING_LOCKEDONTO_STATE(Any p0) { return invoke<int>(0xF1B280, p0); }
static void SET_VEHICLE_HOMING_LOCKEDONTO_STATE(Any p0, Any p1) { invoke<Void>(0xF1B2D0, p0, p1); }
static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash model) { return invoke<BOOL>(0xF1B330, vehicle, model); }
static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int vehicleGenerator) { return invoke<BOOL>(0xF1B3F0, vehicleGenerator); }
static int CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<int>(0xF1B450, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
static void DELETE_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator) { invoke<Void>(0xF1B620, vehicleGenerator); }
static void SET_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator, BOOL enabled) { invoke<Void>(0xF1B6A0, vehicleGenerator, enabled); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle, BOOL p7) { invoke<Void>(0xF1B730, x1, y1, z1, x2, y2, z2, toggle, p7); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0xF1B760); }
static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { invoke<Void>(0xF1B770, active); }
static void SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(float x, float y, float z, float radius) { invoke<Void>(0xF1B790, x, y, z, radius); }
static void CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST() { invoke<Void>(0xF1B7D0); }
static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle, float p1) { return invoke<BOOL>(0xF1B7E0, vehicle, p1); }
static BOOL SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xF1B890, p0, p1, p2, p3); }
static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0xF1B9D0, vehicle); }
static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xF1BA30, vehicle); }
static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xF1BA80, vehicle); }
static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0xF1BAA0, vehicle); }
static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle, BOOL includeDriver, BOOL includeDeadOccupants) { return invoke<int>(0xF1BB00, vehicle, includeDriver, includeDeadOccupants); }
static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0xF1BB90, vehicle); }
static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash modelHash) { return invoke<int>(0xF1BBF0, modelHash); }
static BOOL IS_SEAT_WARP_ONLY(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xF1BC90, vehicle, seatIndex); }
static BOOL IS_TURRET_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xF1BD30, vehicle, seatIndex); }
static BOOL DOES_VEHICLE_ALLOW_RAPPEL(Vehicle vehicle) { return invoke<BOOL>(0xF1BDB0, vehicle); }
static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xF1BE10, multiplier); }
static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xF1BE40, multiplier); }
static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xF1BE60, multiplier); }
static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(BOOL toggle) { invoke<Void>(0xF1BE80, toggle); }
static void SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(float value) { invoke<Void>(0xF1BEA0, value); }
static void SET_FAR_DRAW_VEHICLES(BOOL toggle) { invoke<Void>(0xF1BEE0, toggle); }
static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<Void>(0xF1BF00, value); }
static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0xF1BF10, vehicle, doorLockStatus); }
static void SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(Vehicle vehicle, int doorId, int doorLockStatus) { invoke<Void>(0xF1BF60, vehicle, doorId, doorLockStatus); }
static void SET_VEHICLE_HAS_MUTED_SIRENS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1BFF0, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { invoke<Void>(0xF1BF10, vehicle, player, toggle); }
static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player) { return invoke<BOOL>(0xF1C0B0, vehicle, player); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1BF10, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1BF10, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0xF1BF10, vehicle, team, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_TEAMS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1BF10, vehicle, toggle); }
static void SET_VEHICLE_DONT_TERMINATE_TASK_WHEN_ACHIEVED(Vehicle vehicle) { invoke<Void>(0xF1C310, vehicle); }
static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { invoke<Void>(0xF1C3F0, vehicle, isAudible, isInvisible); }
static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { invoke<Void>(0xF1C4A0, vehicle, killDriver, explodeOnImpact); }
static void SET_VEHICLE_TIMED_EXPLOSION(Vehicle vehicle, Ped ped, BOOL toggle) { invoke<Void>(0xF1C580, vehicle, ped, toggle); }
static void ADD_VEHICLE_PHONE_EXPLOSIVE_DEVICE(Vehicle vehicle) { invoke<Void>(0xF1C5A0, vehicle); }
static void CLEAR_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { invoke<Void>(0xF1C620); }
static BOOL HAS_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { return invoke<BOOL>(0xF1C650); }
static void DETONATE_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { invoke<Void>(0xF1C6D0); }
static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0xF1C740, vehicle, state); }
static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xF1C7D0, vehicle); }
static BOOL IS_VEHICLE_IN_GARAGE_AREA(const char* garageName, Vehicle vehicle) { return invoke<BOOL>(0xF1C840, garageName, vehicle); }
static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { invoke<Void>(0xF1C8B0, vehicle, colorPrimary, colorSecondary); }
static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1C950, vehicle, toggle); }
static void SET_VEHICLE_IS_RACING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1C9F0, vehicle, toggle); }
static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xF1CAA0, vehicle, r, g, b); }
static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF1CB70, vehicle, r, g, b); }
static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { invoke<Void>(0xF1CBF0, vehicle); }
static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xF1CC40, vehicle); }
static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xF1CCA0, vehicle, r, g, b); }
static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF1CD70, vehicle, r, g, b); }
static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { invoke<Void>(0xF1CDF0, vehicle); }
static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xF1CE40, vehicle); }
static void SET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle, float fade) { invoke<Void>(0xF1CEA0, vehicle, fade); }
static float GET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle) { return invoke<float>(0xF1CF10, vehicle); }
static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0xF1CF90, vehicle, state); }
static void SET_GOON_BOSS_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D040, vehicle, toggle); }
static void SET_OPEN_REAR_DOORS_ON_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D0A0, vehicle, toggle); }
static void FORCE_SUBMARINE_SURFACE_MODE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D100, vehicle, toggle); }
static void FORCE_SUBMARINE_NEURTAL_BUOYANCY(Any p0, Any p1) { invoke<Void>(0xF1D170, p0, p1); }
static void SET_SUBMARINE_CRUSH_DEPTHS(Vehicle vehicle, BOOL p1, float depth1, float depth2, float depth3) { invoke<Void>(0xF1D1D0, vehicle, p1, depth1, depth2, depth3); }
static BOOL GET_SUBMARINE_IS_UNDER_DESIGN_DEPTH(Vehicle submarine) { return invoke<BOOL>(0xF1D270, submarine); }
static int GET_SUBMARINE_NUMBER_OF_AIR_LEAKS(Vehicle submarine) { return invoke<int>(0xF1D2F0, submarine); }
static void SET_BOAT_IGNORE_LAND_PROBES(Any p0, Any p1) { invoke<Void>(0xF1D350, p0, p1); }
static void _SET_BOUNDS_AFFECT_WATER_PROBES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D3B0, vehicle, toggle); }
static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D410, vehicle, toggle); }
static BOOL CAN_ANCHOR_BOAT_HERE(Vehicle vehicle) { return invoke<BOOL>(0xF1D430, vehicle); }
static BOOL CAN_ANCHOR_BOAT_HERE_IGNORE_PLAYERS(Vehicle vehicle) { return invoke<BOOL>(0xF1D430, vehicle); }
static void SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D530, vehicle, toggle); }
static void SET_FORCE_LOW_LOD_ANCHOR_MODE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1D550, vehicle, p1); }
static void SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(Vehicle vehicle, float value) { invoke<Void>(0xDF67C0, vehicle, value); }
static BOOL IS_BOAT_ANCHORED(Vehicle vehicle) { return invoke<BOOL>(0xF1D610, vehicle); }
static void SET_BOAT_SINKS_WHEN_WRECKED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D680, vehicle, toggle); }
static void SET_BOAT_WRECKED(Vehicle vehicle) { invoke<Void>(0xF1D6E0, vehicle); }
static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D730, vehicle, toggle); }
static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0xF1D790, vehicle); }
static BOOL IS_VEHICLE_SIREN_AUDIO_ON(Vehicle vehicle) { return invoke<BOOL>(0xF1D820, vehicle); }
static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1D8B0, vehicle, toggle); }
static void REMOVE_VEHICLE_STUCK_CHECK(Vehicle vehicle) { invoke<Void>(0xF1D950, vehicle); }
static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { invoke<Void>(0xF1D970, vehicle, colorPrimary, colorSecondary); }
static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex, BOOL isTaskRunning) { return invoke<BOOL>(0xF1D9D0, vehicle, seatIndex, isTaskRunning); }
static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex, BOOL p2) { return invoke<Ped>(0xF1DA00, vehicle, seatIndex, p2); }
static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0xF1DA30, vehicle, seatIndex); }
static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, BOOL* lightsOn, BOOL* highbeamsOn) { return invoke<BOOL>(0xF1DAB0, vehicle, lightsOn, highbeamsOn); }
static BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, BOOL completely) { return invoke<BOOL>(0xF1DB40, vehicle, wheelID, completely); }
static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xF1DC20, vehicle, speed); }
static void SET_VEHICLE_FORWARD_SPEED_XY(Vehicle vehicle, float speed) { invoke<Void>(0xF1DC20, vehicle, speed); }
static void BRING_VEHICLE_TO_HALT(Vehicle vehicle, float distance, int duration, BOOL p3) { invoke<Void>(0xF1DD00, vehicle, distance, duration, p3); }
static void SET_VEHICLE_STEER_FOR_BUILDINGS(Vehicle vehicle, Any p1) { invoke<Void>(0xF1DD20, vehicle, p1); }
static void SET_VEHICLE_CAUSES_SWERVING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1DD80, vehicle, toggle); }
static void SET_IGNORE_PLANES_SMALL_PITCH_CHANGE(Any p0, Any p1) { invoke<Void>(0xF1DDF0, p0, p1); }
static void STOP_BRINGING_VEHICLE_TO_HALT(Vehicle vehicle) { invoke<Void>(0xF1DE50, vehicle); }
static BOOL IS_VEHICLE_BEING_BROUGHT_TO_HALT(Vehicle vehicle) { return invoke<BOOL>(0xF1DEC0, vehicle); }
static void LOWER_FORKLIFT_FORKS(Vehicle forklift) { invoke<Void>(0xF1DF40, forklift); }
static void SET_FORKLIFT_FORK_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0xF1DF50, vehicle, height); }
static BOOL IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0xDB4110, vehicle, entity); }
static BOOL IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle) { return invoke<BOOL>(0xF1DF90, vehicle); }
static Vehicle FIND_HANDLER_VEHICLE_CONTAINER_IS_ATTACHED_TO(Entity entity) { return invoke<Vehicle>(0xF1E050, entity); }
static BOOL IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0xF1E070, vehicle, entity); }
static void ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(Vehicle vehicle, Entity entity) { invoke<Void>(0xF1E0A0, vehicle, entity); }
static void DETACH_CONTAINER_FROM_HANDLER_FRAME(Vehicle vehicle) { invoke<Void>(0xF1E0B0, vehicle); }
static void SET_VEHICLE_DISABLE_HEIGHT_MAP_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1E0C0, vehicle, p1); }
static void SET_BOAT_DISABLE_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1E1B0, vehicle, p1); }
static BOOL IS_HELI_LANDING_AREA_BLOCKED(Vehicle vehicle) { return invoke<BOOL>(0xF1E210, vehicle); }
static void SET_SHORT_SLOWDOWN_FOR_LANDING(Vehicle vehicle) { invoke<Void>(0xF1E280, vehicle); }
static void SET_HELI_TURBULENCE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0xF1E2F0, vehicle, p1); }
static void SET_CAR_BOOT_OPEN(Vehicle vehicle) { invoke<Void>(0xF1E350, vehicle); }
static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL onRim, float p3) { invoke<Void>(0xF1E3C0, vehicle, index, onRim, p3); }
static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0xF1E3E0, vehicle, closeInstantly); }
static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1E400, vehicle, toggle); }
static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0xF1E460, vehicle); }
static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0xF1E4C0, vehicle, enabled); }
static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorId, BOOL loose, BOOL openInstantly) { invoke<Void>(0xF1E560, vehicle, doorId, loose, openInstantly); }
static void SET_VEHICLE_DOOR_AUTO_LOCK(Vehicle vehicle, int doorId, BOOL toggle) { invoke<Void>(0xF1E590, vehicle, doorId, toggle); }
static void SET_FLEEING_VEHICLES_USE_SWITCHED_OFF_NODES(Any p0) { invoke<Void>(0xF1E630, p0); }
static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E650, vehicle, windowIndex); }
static void ROLL_DOWN_WINDOWS(Vehicle vehicle) { invoke<Void>(0xF1E6D0, vehicle); }
static void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E6E0, vehicle, windowIndex); }
static void ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E750, vehicle, windowIndex); }
static void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E7C0, vehicle, windowIndex); }
static void FIX_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xF1E7D0, vehicle, windowIndex); }
static void POP_OUT_VEHICLE_WINDSCREEN(Vehicle vehicle) { invoke<Void>(0xF1E840, vehicle); }
static void POP_OFF_VEHICLE_ROOF_WITH_IMPULSE(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xF1E8A0, vehicle, x, y, z); }
static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int state) { invoke<Void>(0xF1E950, vehicle, state); }
static void SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1EA50, vehicle, toggle); }
static void SET_VEHICLE_HEADLIGHT_SHADOWS(Vehicle vehicle, int p1) { invoke<Void>(0xF1EAA0, vehicle, p1); }
static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0xF1EB00, vehicle, state); }
static void START_VEHICLE_ALARM(Vehicle vehicle) { invoke<Void>(0xF1EB50, vehicle); }
static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0xF1EBA0, vehicle); }
static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1EC10, vehicle, toggle); }
static void SET_VEHICLE_FORCE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1ECB0, vehicle, toggle); }
static void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xF1ED00, vehicle, multiplier); }
static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { invoke<Void>(0xF1ED50, vehicle, trailer, radius); }
static void ATTACH_VEHICLE_ON_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float offsetX, float offsetY, float offsetZ, float coordsX, float coordsY, float coordsZ, float rotationX, float rotationY, float rotationZ, float disableCollisions) { invoke<Void>(0xF1EE30, vehicle, trailer, offsetX, offsetY, offsetZ, coordsX, coordsY, coordsZ, rotationX, rotationY, rotationZ, disableCollisions); }
static void STABILISE_ENTITY_ATTACHED_TO_HELI(Vehicle vehicle, Entity entity, float p2) { invoke<Void>(0xF1EE50, vehicle, entity, p2); }
static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { invoke<Void>(0xF1EF00, vehicle); }
static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0xF1EF90, vehicle); }
static void SET_TRAILER_INVERSE_MASS_SCALE(Vehicle vehicle, float p1) { invoke<Void>(0xF1F050, vehicle, p1); }
static void SET_TRAILER_LEGS_RAISED(Vehicle vehicle) { invoke<Void>(0xF1F0E0, vehicle); }
static void SET_TRAILER_LEGS_LOWERED(Vehicle vehicle) { invoke<Void>(0xF1F140, vehicle); }
static void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0xF1F1A0, vehicle, tyreIndex); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, const char* plateText) { invoke<Void>(0xF1F230, vehicle, plateText); }
static const char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<const char*>(0xF1F280, vehicle); }
static int GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0xF1F2E0); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { invoke<Void>(0xF1F230, vehicle, plateIndex); }
static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0xF1F280, vehicle); }
static void SET_RANDOM_TRAINS(BOOL toggle) { invoke<Void>(0xF1F3B0, toggle); }
static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction, Any p5, Any p6) { return invoke<Vehicle>(0xF1F3D0, variation, x, y, z, direction, p5, p6); }
static void SWITCH_TRAIN_TRACK(int trackId, BOOL state) { invoke<Void>(0xF1F420, trackId, state); }
static void SET_TRAIN_TRACK_SPAWN_FREQUENCY(int trackIndex, int frequency) { invoke<Void>(0xF1F450, trackIndex, frequency); }
static void ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(Any p0) { invoke<Void>(0xF1F480, p0); }
static void DELETE_ALL_TRAINS() { invoke<Void>(0xF1F4D0); }
static void SET_TRAIN_SPEED(Vehicle train, float speed) { invoke<Void>(0xF1F4E0, train, speed); }
static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { invoke<Void>(0xF1F550, train, speed); }
static void SET_RANDOM_BOATS(BOOL toggle) { invoke<Void>(0xF1F5C0, toggle); }
static void SET_RANDOM_BOATS_MP(BOOL toggle) { invoke<Void>(0xF1F5C0, toggle); }
static void SET_GARBAGE_TRUCKS(BOOL toggle) { invoke<Void>(0xF1F600, toggle); }
static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Vehicle vehicle) { return invoke<BOOL>(0xF1F620, vehicle); }
static int GET_VEHICLE_RECORDING_ID(int recording, const char* script) { return invoke<int>(0xF1F6A0, recording, script); }
static void REQUEST_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0xF1F6D0, recording, script); }
static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(int recording, const char* script) { return invoke<BOOL>(0xF1F750, recording, script); }
static void REMOVE_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0xF1F790, recording, script); }
static vector3 GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<vector3>(0xF1F7E0, id, time); }
static vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<vector3>(0xF1F870, recording, time, script); }
static vector3 GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<vector3>(0xF1F920, id, time); }
static vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<vector3>(0xF1F9B0, recording, time, script); }
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(int id) { return invoke<float>(0xF1FA60, id); }
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(int recording, const char* script) { return invoke<float>(0xF1FA90, recording, script); }
static float GET_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0xF1FAD0, vehicle); }
static float GET_TIME_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0xF1FB20, vehicle); }
static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, int recording, const char* script, BOOL p3) { invoke<Void>(0xF1FB70, vehicle, recording, script, p3); }
static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Vehicle vehicle, int recording, const char* script, int flags, int time, int drivingStyle) { invoke<Void>(0xF1FB70, vehicle, recording, script, flags, time, drivingStyle); }
static void FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1FBB0, vehicle, p1); }
static void STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF1FBD0, vehicle); }
static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF1FC20, vehicle); }
static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF1FC20, vehicle); }
static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xF1FCC0, vehicle); }
static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xF1FD20, vehicle); }
static int GET_CURRENT_PLAYBACK_FOR_VEHICLE(Vehicle vehicle) { return invoke<int>(0xF1FD90, vehicle); }
static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF1FBD0, vehicle); }
static void SET_PLAYBACK_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xF1FE30, vehicle, speed); }
static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Vehicle vehicle, int recording, const char* script, float speed, int drivingStyle) { invoke<Void>(0xF1FB70, vehicle, recording, script, speed, drivingStyle); }
static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, float time) { invoke<Void>(0xF1FEB0, vehicle, time); }
static void SET_PLAYBACK_TO_USE_AI(Vehicle vehicle, int drivingStyle) { invoke<Void>(0xF1FF10, vehicle, drivingStyle); }
static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Vehicle vehicle, int time, int drivingStyle, BOOL p3) { invoke<Void>(0xF1FF10, vehicle, time, drivingStyle, p3); }
static void SET_ADDITIONAL_ROTATION_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z, Any p4) { invoke<Void>(0xF1FFD0, vehicle, x, y, z, p4); }
static void SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xF1FFF0, vehicle, x, y, z); }
static void SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xF20050, vehicle, x, y, z); }
static void SET_SHOULD_LERP_FROM_AI_TO_FULL_RECORDING(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF200B0, vehicle, p1); }
static void EXPLODE_VEHICLE_IN_CUTSCENE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1C3F0, vehicle, p1); }
static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0xF201D0, p0, p1, p2, p3, p4, p5, p6); }
static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { invoke<Void>(0xF20280, model, suppressed); }
static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xF202A0, x, y, z, radius, modelHash, flags); }
static Vehicle GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xF20320, p0, p1, p2, p3, p4, p5, p6); }
static Vehicle GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xF203A0, p0, p1, p2, p3, p4, p5, p6); }
static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xF20420, x, y, z, radius, modelHash, flags); }
static Vehicle GET_TRAIN_CARRIAGE(Vehicle train, int trailerNumber) { return invoke<Vehicle>(0xF20450, train, trailerNumber); }
static BOOL IS_MISSION_TRAIN(Vehicle train) { return invoke<BOOL>(0xF20540, train); }
static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0xF205C0, train); }
static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0xF205D0, train, p1); }
static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0xF205E0, train, x, y, z); }
static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0xF20680, model); }
static BOOL IS_THIS_MODEL_A_JETSKI(Hash model) { return invoke<BOOL>(0xF20700, model); }
static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0xF20780, model); }
static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0xF20800, model); }
static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0xF20880, model); }
static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0xF20900, model); }
static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0xF20980, model); }
static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0xF20A00, model); }
static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0xF20A80, model); }
static BOOL IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(Hash model) { return invoke<BOOL>(0xF20B00, model); }
static BOOL IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(Hash model) { return invoke<BOOL>(0xF20B80, model); }
static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { invoke<Void>(0xF20C00, vehicle); }
static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xF20CC0, vehicle, speed); }
static void FORCE_SUB_THROTTLE_FOR_TIME(Vehicle vehicle, float p1, float p2) { invoke<Void>(0xF20DA0, vehicle, p1, p2); }
static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0xF20E30, vehicle, state); }
static void SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF20ED0, vehicle, p1); }
static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0xF20FD0, vehicle, state); }
static void SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF21070, vehicle, toggle); }
static void SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF21110, vehicle, p1); }
static void SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED(Any p0, Any p1) { invoke<Void>(0xF211B0, p0, p1); }
static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0xF21200, vehicle); }
static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0xF21250, vehicle, dirtLevel); }
static BOOL GET_DOES_VEHICLE_HAVE_DAMAGE_DECALS(Vehicle vehicle) { return invoke<BOOL>(0xF212C0, vehicle); }
static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorId) { return invoke<BOOL>(0xF21320, vehicle, doorId); }
static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL disableAutoStart) { invoke<Void>(0xF213B0, vehicle, value, instantly, disableAutoStart); }
static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF213E0, vehicle, toggle); }
static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF214B0, vehicle, toggle); }
static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorId, int speed, float angle) { invoke<Void>(0xF21550, vehicle, doorId, speed, angle); }
static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorId, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xF21570, vehicle, doorId, p2, p3, p4); }
static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int doorId) { return invoke<float>(0xF215A0, vehicle, doorId); }
static Ped GET_PED_USING_VEHICLE_DOOR(Vehicle vehicle, int doord) { return invoke<Ped>(0xF21640, vehicle, doord); }
static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorId, BOOL closeInstantly) { invoke<Void>(0xF21670, vehicle, doorId, closeInstantly); }
static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorId, BOOL deleteDoor) { invoke<Void>(0xF21690, vehicle, doorId, deleteDoor); }
static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF216B0, vehicle, toggle); }
static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0xF21720, vehicle); }
static void SET_VEHICLE_REMOVE_AGGRESSIVE_CARJACK_MISSION(Any p0) { invoke<Void>(0xF21780, p0); }
static void SET_VEHICLE_AVOID_PLAYER_VEHICLE_RIOT_VAN_MISSION(Any p0) { invoke<Void>(0xF217D0, p0); }
static void SET_CARJACK_MISSION_REMOVAL_PARAMETERS(Any p0, Any p1) { invoke<Void>(0xF21820, p0, p1); }
static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xF21840, vehicle); }
static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0xF218A0, vehicle); }
static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int colorCombination) { invoke<Void>(0xF21910, vehicle, colorCombination); }
static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0xF21920, vehicle); }
static void SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(Vehicle vehicle, int colorIndex) { invoke<Void>(0xF21940, vehicle, colorIndex); }
static int GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(Vehicle vehicle) { return invoke<int>(0xF21990, vehicle); }
static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF219F0, vehicle, toggle); }
static void SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF21A90, vehicle, toggle); }
static void SET_VEHICLE_ACT_AS_IF_HAS_SIREN_ON(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF21B30, vehicle, p1); }
static void SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF21B90, vehicle, p1); }
static void SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF21BF0, vehicle, p1); }
static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL p0, Hash* modelHash, int* successIndicator) { invoke<Void>(0xF21C60, p0, modelHash, successIndicator); }
static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0xF21C70, vehicle); }
static int GET_VEHICLE_INDIVIDUAL_DOOR_LOCK_STATUS(Vehicle vehicle, int doorId) { return invoke<int>(0xF21CC0, vehicle, doorId); }
static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0xF21D40, veh, doorID); }
static void SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Vehicle vehicle, int doorId, BOOL isBreakable) { invoke<Void>(0xF21DF0, vehicle, doorId, isBreakable); }
static BOOL IS_VEHICLE_BUMPER_BOUNCING(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0xF21E90, vehicle, frontBumper); }
static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0xF21F20, vehicle, frontBumper); }
static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0xF21F50, x1, x2, y1, y2, z1, z2); }
static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xF22000, vehicle); }
static int GET_VEHICLE_MODEL_VALUE(Hash vehicleModel) { return invoke<int>(0xF22060, vehicleModel); }
static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0xF22080, vehicle); }
static Hash GET_IN_VEHICLE_CLIPSET_HASH_FOR_SEAT(Vehicle vehicle, int p1) { return invoke<Hash>(0xF220E0, vehicle, p1); }
static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { invoke<Void>(0xF22160, train, toggle); }
static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { invoke<Void>(0xF22180, vehicle, pearlescentColor, wheelColor); }
static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { invoke<Void>(0xF22220, vehicle, pearlescentColor, wheelColor); }
static void SET_VEHICLE_EXTRA_COLOUR_5(Vehicle vehicle, int color) { invoke<Void>(0xF22280, vehicle, color); }
static void GET_VEHICLE_EXTRA_COLOUR_5(Vehicle vehicle, int* color) { invoke<Void>(0xF222F0, vehicle, color); }
static void SET_VEHICLE_EXTRA_COLOUR_6(Vehicle vehicle, int color) { invoke<Void>(0xF22340, vehicle, color); }
static void GET_VEHICLE_EXTRA_COLOUR_6(Vehicle vehicle, int* color) { invoke<Void>(0xF223B0, vehicle, color); }
static void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0xF22400); }
static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0xF22410, vehicle); }
static void SET_VEHICLE_DEFORMATION_FIXED(Vehicle vehicle) { invoke<Void>(0xF22480, vehicle); }
static void SET_VEHICLE_CAN_ENGINE_MISSFIRE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF224D0, vehicle, toggle); }
static void SET_VEHICLE_CAN_LEAK_OIL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22580, vehicle, toggle); }
static void SET_VEHICLE_CAN_LEAK_PETROL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22630, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDF67C0, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDF67C0, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_ENGINE_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22840, vehicle, toggle); }
static void SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF228F0, vehicle, toggle); }
static void SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDF67C0, vehicle, toggle); }
static void SET_DISABLE_PRETEND_OCCUPANTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22A40, vehicle, toggle); }
static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0xF22AF0, x1, y1, z1, x2, y2, z2, p6); }
static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0xF22B10, vehicle, value); }
static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xF22B60, vehicle, extraId); }
static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, BOOL disable) { invoke<Void>(0xF22BD0, vehicle, extraId, disable); }
static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xF22BF0, vehicle, extraId); }
static BOOL IS_EXTRA_BROKEN_OFF(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xF22C80, vehicle, extraId); }
static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF22D30, vehicle, p1); }
static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { invoke<Void>(0xF22DA0, vehicle, instantlyLower); }
static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { invoke<Void>(0xF22DF0, vehicle, instantlyRaise); }
static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0xF22E40, vehicle); }
static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xF22EA0, vehicle, p1); }
static BOOL TRANSFORM_TO_SUBMARINE(Vehicle vehicle, BOOL noAnimation) { return invoke<BOOL>(0xF22F20, vehicle, noAnimation); }
static void TRANSFORM_TO_CAR(Vehicle vehicle, BOOL noAnimation) { invoke<Void>(0xF22F70, vehicle, noAnimation); }
static BOOL IS_VEHICLE_IN_SUBMARINE_MODE(Vehicle vehicle) { return invoke<BOOL>(0xF22FC0, vehicle); }
static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0xF1BAA0, vehicle); }
static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL focusOnModel) { invoke<Void>(0xF230C0, vehicle, xOffset, yOffset, zOffset, damage, radius, focusOnModel); }
static void SET_VEHICLE_OCCUPANTS_TAKE_EXPLOSIVE_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF230F0, vehicle, toggle); }
static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0xF23140, vehicle); }
static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xF231A0, vehicle, health); }
static void SET_PLANE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xF232A0, vehicle, health); }
static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0xDF67C0, vehicle); }
static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xDF67C0, vehicle, health); }
static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int ms) { return invoke<BOOL>(0xF233F0, vehicle, p1, ms); }
static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, int nullAttributes) { invoke<Void>(0xF23480, vehicle, nullAttributes); }
static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL isOnFireCheck) { return invoke<BOOL>(0xF234D0, vehicle, isOnFireCheck); }
static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0xF23560, vehicle, owned); }
static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF23600, vehicle, toggle); }
static void SET_VEHICLE_BLIP_THROTTLE_RANDOMLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF236A0, vehicle, p1); }
static void SET_POLICE_FOCUS_WILL_TRACK_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF23740, vehicle, toggle); }
static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { invoke<Void>(0xF237E0, vehicle, duration, mode, forever); }
static void SET_VEHICLE_IN_CAR_MOD_SHOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF238B0, vehicle, toggle); }
static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF23910, vehicle, toggle); }
static const char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0xF239B0, modelHash); }
static const char* GET_MAKE_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0xF23A30, modelHash); }
static vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float offsetX, float offsetY, float offsetZ) { return invoke<vector3>(0xF23AB0, vehicle, offsetX, offsetY, offsetZ); }
static void SET_VEHICLE_LIVERY(Vehicle vehicle, int livery) { invoke<Void>(0xF23B80, vehicle, livery); }
static int GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0xF23BE0, vehicle); }
static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0xF23BE0, vehicle); }
static void SET_VEHICLE_LIVERY2(Vehicle vehicle, int livery) { invoke<Void>(0xF23B80, vehicle, livery); }
static int GET_VEHICLE_LIVERY2(Vehicle vehicle) { return invoke<int>(0xF23BE0, vehicle); }
static int GET_VEHICLE_LIVERY2_COUNT(Vehicle vehicle) { return invoke<int>(0xF23BE0, vehicle); }
static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0xF23DC0, vehicle, windowIndex); }
static BOOL ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0xF23E40, vehicle); }
static BOOL ARE_ANY_VEHICLE_SEATS_FREE(Vehicle vehicle) { return invoke<BOOL>(0xF23EA0, vehicle); }
static void RESET_VEHICLE_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF23F10, vehicle, toggle); }
static BOOL IS_HELI_PART_BROKEN(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xF23F90, vehicle, p1, p2, p3); }
static float GET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xF24040, vehicle); }
static float GET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xF240C0, vehicle); }
static float GET_HELI_TAIL_BOOM_HEALTH(Vehicle vehicle) { return invoke<float>(0xF24140, vehicle); }
static void SET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xF241C0, vehicle, health); }
static void SET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xF24220, vehicle, health); }
static BOOL SET_HELI_TAIL_BOOM_CAN_BREAK_OFF(Vehicle vehicle, BOOL toggle) { return invoke<BOOL>(0xF24280, vehicle, toggle); }
static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, const char* name) { invoke<Void>(0xF242D0, vehicle, name); }
static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF242E0, vehicle, toggle); }
static void SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF24380, vehicle, toggle); }
static void SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF243D0, vehicle, toggle); }
static void SET_VEHICLE_DISABLE_TOWING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF24470, vehicle, toggle); }
static BOOL GET_VEHICLE_HAS_LANDING_GEAR(Vehicle vehicle) { return invoke<BOOL>(0xF24510, vehicle); }
static void CONTROL_LANDING_GEAR(Vehicle vehicle, int state) { invoke<Void>(0xF24570, vehicle, state); }
static int GET_LANDING_GEAR_STATE(Vehicle vehicle) { return invoke<int>(0xF245F0, vehicle); }
static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xF24670, x, y, z, radius); }
static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0xF24770, vehicle); }
static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0xF24940, vehicle); }
static BOOL IS_VEHICLE_HIGH_DETAIL(Vehicle vehicle) { return invoke<BOOL>(0xF24980, vehicle); }
static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { invoke<Void>(0xF249E0, vehicleHash, vehicleAsset); }
static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0xF24A90, vehicleAsset); }
static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { invoke<Void>(0xF24AC0, vehicleAsset); }
static void SET_VEHICLE_TOW_TRUCK_ARM_POSITION(Vehicle vehicle, float position) { invoke<Void>(0xF24B40, vehicle, position); }
static void ATTACH_VEHICLE_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle, BOOL rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<Void>(0xF24BF0, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); }
static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0xF24C10, towTruck, vehicle); }
static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0xF24C20, vehicle); }
static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0xF24C50, towTruck, vehicle); }
static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0xDB2B30, towTruck); }
static Entity SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, BOOL p1, Any p2) { return invoke<Entity>(0xF24D30, vehicle, p1, p2); }
static void SET_VEHICLE_BULLDOZER_ARM_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0xF24DF0, vehicle, position, p2); }
static void SET_VEHICLE_TANK_TURRET_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0xDF67C0, vehicle, position, p2); }
static void SET_VEHICLE_TURRET_TARGET(Vehicle vehicle, BOOL p1, float x, float y, float z, BOOL p5) { invoke<Void>(0xF24E30, vehicle, p1, x, y, z, p5); }
static void SET_VEHICLE_TANK_STATIONARY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDF67C0, vehicle, p1); }
static void SET_VEHICLE_TURRET_SPEED_THIS_FRAME(Vehicle vehicle, float speed) { invoke<Void>(0xF24EB0, vehicle, speed); }
static void DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0xF24EC0, vehicle); }
static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle vehicle, float angleRatio) { invoke<Void>(0xF24ED0, vehicle, angleRatio); }
static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(Vehicle vehicle, float angle) { invoke<Void>(0xF24ED0, vehicle, angle); }
static float GET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle plane) { return invoke<float>(0xF24FB0, plane); }
static void SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25020, vehicle, toggle); }
static BOOL GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(vector3* outVec, Any p1, vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0xF25080, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); }
static void SET_VEHICLE_BURNOUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25170, vehicle, toggle); }
static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0xF251D0, vehicle); }
static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25240, vehicle, toggle); }
static void SET_VEHICLE_REDUCE_GRIP_LEVEL(Vehicle vehicle, int val) { invoke<Void>(0xF25240, vehicle, val); }
static void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL toggle) { invoke<Void>(0xF25320, vehicle, turnSignal, toggle); }
static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25430, vehicle, toggle); }
static void SET_VEHICLE_TAIL_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF254D0, vehicle, toggle); }
static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25530, vehicle, toggle); }
static void SET_VEHICLE_BRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25600, vehicle, toggle); }
static void INSTANTLY_FILL_VEHICLE_POPULATION() { invoke<Void>(0xDF67C0); }
static BOOL HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() { return invoke<BOOL>(0xDF67C0); }
static void NETWORK_ENABLE_EMPTY_CROWDING_VEHICLES_REMOVAL(BOOL toggle) { invoke<Void>(0xF25680, toggle); }
static void NETWORK_CAP_EMPTY_CROWDING_VEHICLES_REMOVAL(int p0) { invoke<Void>(0xF256A0, p0); }
static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0xF256B0, vehicle, trailer); }
static Vehicle _GET_VEHICLE_TRAILER_PARENT_VEHICLE(Vehicle trailer) { return invoke<Vehicle>(0xF25780, trailer); }
static void SET_VEHICLE_USES_LARGE_REAR_RAMP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF257F0, vehicle, toggle); }
static void SET_VEHICLE_RUDDER_BROKEN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF25890, vehicle, toggle); }
static void SET_CONVERTIBLE_ROOF_LATCH_STATE(Vehicle vehicle, BOOL state) { invoke<Void>(0xF22D30, vehicle, state); }
static float GET_VEHICLE_ESTIMATED_MAX_SPEED(Vehicle vehicle) { return invoke<float>(0xF25A70, vehicle); }
static float GET_VEHICLE_MAX_BRAKING(Vehicle vehicle) { return invoke<float>(0xF25AA0, vehicle); }
static float GET_VEHICLE_MAX_TRACTION(Vehicle vehicle) { return invoke<float>(0xF25AD0, vehicle); }
static float GET_VEHICLE_ACCELERATION(Vehicle vehicle) { return invoke<float>(0xF25B00, vehicle); }
static float GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(Hash modelHash) { return invoke<float>(0xF25B30, modelHash); }
static float GET_VEHICLE_MODEL_MAX_BRAKING(Hash modelHash) { return invoke<float>(0xF25BE0, modelHash); }
static float GET_VEHICLE_MODEL_MAX_BRAKING_MAX_MODS(Hash modelHash) { return invoke<float>(0xF25BE0, modelHash); }
static float GET_VEHICLE_MODEL_MAX_TRACTION(Hash modelHash) { return invoke<float>(0xF25D90, modelHash); }
static float GET_VEHICLE_MODEL_ACCELERATION(Hash modelHash) { return invoke<float>(0xF25E70, modelHash); }
static float GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(Hash modelHash) { return invoke<float>(0xF25E70, modelHash); }
static float GET_FLYING_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0xF25F60, modelHash); }
static float GET_BOAT_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0xF25F90, modelHash); }
static float GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(int vehicleClass) { return invoke<float>(0xF26050, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_TRACTION(int vehicleClass) { return invoke<float>(0xF26090, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_AGILITY(int vehicleClass) { return invoke<float>(0xF260E0, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_ACCELERATION(int vehicleClass) { return invoke<float>(0xF26130, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_BRAKING(int vehicleClass) { return invoke<float>(0xF26180, vehicleClass); }
static int ADD_ROAD_NODE_SPEED_ZONE(float x, float y, float z, float radius, float speed, BOOL p5) { return invoke<int>(0xF261D0, x, y, z, radius, speed, p5); }
static BOOL REMOVE_ROAD_NODE_SPEED_ZONE(int speedzone) { return invoke<BOOL>(0xF26280, speedzone); }
static void OPEN_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0xF262C0, vehicle); }
static void CLOSE_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0xF26340, vehicle); }
static BOOL GET_ARE_BOMB_BAY_DOORS_OPEN(Vehicle aircraft) { return invoke<BOOL>(0xF263C0, aircraft); }
static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xF26450, vehicle); }
static void SET_VEHICLE_SEARCHLIGHT(Vehicle heli, BOOL toggle, BOOL canBeUsedByAI) { invoke<Void>(0xF26520, heli, toggle, canBeUsedByAI); }
static BOOL DOES_VEHICLE_HAVE_SEARCHLIGHT(Vehicle vehicle) { return invoke<BOOL>(0xF26540, vehicle); }
static BOOL IS_ENTRY_POINT_FOR_SEAT_CLEAR(Ped ped, Vehicle vehicle, int seatIndex, BOOL side, BOOL onEnter) { return invoke<BOOL>(0xF265F0, ped, vehicle, seatIndex, side, onEnter); }
static vector3 GET_ENTRY_POINT_POSITION(Vehicle vehicle, int doorId) { return invoke<vector3>(0xF26630, vehicle, doorId); }
static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xF26720, vehicle, seatIndex); }
static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0xF267D0, vehicle); }
static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { invoke<Void>(0xF26830, vehicle, modKit); }
static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0xF268A0, vehicle); }
static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0xF268A0, vehicle); }
static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0xF26970, vehicle); }
static void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { invoke<Void>(0xF269D0, vehicle, WheelType); }
static int GET_NUM_MOD_COLORS(int paintType, BOOL p1) { return invoke<int>(0xF26A70, paintType, p1); }
static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int pearlescentColor) { invoke<Void>(0xF26B10, vehicle, paintType, color, pearlescentColor); }
static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { invoke<Void>(0xF26BA0, vehicle, paintType, color); }
static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* pearlescentColor) { invoke<Void>(0xF26C30, vehicle, paintType, color, pearlescentColor); }
static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { invoke<Void>(0xF26CE0, vehicle, paintType, color); }
static const char* GET_VEHICLE_MOD_COLOR_1_NAME(Vehicle vehicle, BOOL p1) { return invoke<const char*>(0xF26C30, vehicle, p1); }
static const char* GET_VEHICLE_MOD_COLOR_2_NAME(Vehicle vehicle) { return invoke<const char*>(0xF26CE0, vehicle); }
static BOOL HAVE_VEHICLE_MODS_STREAMED_IN(Vehicle vehicle) { return invoke<BOOL>(0xF26E90, vehicle); }
static BOOL IS_VEHICLE_MOD_GEN9_EXCLUSIVE(Vehicle vehicle, int modType, int modIndex) { return invoke<BOOL>(0xF26EF0, vehicle, modType, modIndex); }
static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { invoke<Void>(0xF26F80, vehicle, modType, modIndex, customTires); }
static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0xF27060, vehicle, modType); }
static int GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<int>(0xF27060, vehicle, modType); }
static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0xF27210, vehicle, modType); }
static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { invoke<Void>(0xF272B0, vehicle, modType); }
static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { invoke<Void>(0xF27380, vehicle, modType, toggle); }
static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0xF27410, vehicle, modType); }
static const char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<const char*>(0xF27490, vehicle, modType, modValue); }
static const char* GET_MOD_SLOT_NAME(Vehicle vehicle, int modType) { return invoke<const char*>(0xF27540, vehicle, modType); }
static const char* GET_LIVERY_NAME(Vehicle vehicle, int liveryIndex) { return invoke<const char*>(0xF275E0, vehicle, liveryIndex); }
static int GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<int>(0xF27060, vehicle, modType, modIndex); }
static Hash GET_VEHICLE_MOD_IDENTIFIER_HASH(Vehicle vehicle, int modType, int modIndex) { return invoke<Hash>(0xF27060, vehicle, modType, modIndex); }
static void PRELOAD_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex) { invoke<Void>(0xF276C0, vehicle, modType, modIndex); }
static BOOL HAS_PRELOAD_MODS_FINISHED(Vehicle vehicle) { return invoke<BOOL>(0xF27760, vehicle); }
static void RELEASE_PRELOAD_MODS(Vehicle vehicle) { invoke<Void>(0xF277C0, vehicle); }
static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xF27810, vehicle, r, g, b); }
static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF27870, vehicle, r, g, b); }
static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { invoke<Void>(0xF278E0, vehicle, tint); }
static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0xF27930, vehicle); }
static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0xF279A0); }
static void GET_VEHICLE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF279C0, vehicle, r, g, b); }
static int GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(Vehicle vehicle) { return invoke<int>(0xF1D970, vehicle); }
static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0xF27A00, vehicle); }
static void OVERRIDE_PLANE_DAMAGE_THREHSOLD(Vehicle vehicle, float health) { invoke<Void>(0xF27A50, vehicle, health); }
static BOOL GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xF27BC0, vehicle); }
static BOOL GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xF27C40, vehicle); }
static BOOL GET_BOTH_VEHICLE_HEADLIGHTS_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xF27CC0, vehicle); }
static void MODIFY_VEHICLE_TOP_SPEED(Vehicle vehicle, float value) { invoke<Void>(0xF27D20, vehicle, value); }
static void SET_VEHICLE_MAX_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xF27D30, vehicle, speed); }
static void SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF27D80, vehicle, toggle); }
static void SET_VEHICLE_ACT_AS_IF_HIGH_SPEED_FOR_FRAG_SMASHING(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF27E20, vehicle, p1); }
static void SET_PEDS_CAN_FALL_OFF_THIS_VEHICLE_FROM_LARGE_FALL_DAMAGE(Vehicle vehicle, BOOL toggle, float p2) { invoke<Void>(0xF27EB0, vehicle, toggle, p2); }
static int ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<int>(0xF27F80, p0, p1, p2, p3, p4, p5, p6); }
static void REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA(int p0) { invoke<Void>(0xF28020, p0); }
static BOOL IS_ANY_PED_RAPPELLING_FROM_HELI(Vehicle vehicle) { return invoke<BOOL>(0xF28060, vehicle); }
static void SET_VEHICLE_CHEAT_POWER_INCREASE(Vehicle vehicle, float value) { invoke<Void>(0xF28090, vehicle, value); }
static void SET_VEHICLE_INFLUENCES_WANTED_LEVEL(Any p0, BOOL p1) { invoke<Void>(0xF280E0, p0, p1); }
static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { invoke<Void>(0xF28170, vehicle, state); }
static void SWING_BOAT_BOOM_TO_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0xF28210, vehicle, ratio); }
static void SWING_BOAT_BOOM_FREELY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF282B0, vehicle, toggle); }
static void ALLOW_BOAT_BOOM_TO_ANIMATE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28350, vehicle, toggle); }
static float GET_BOAT_BOOM_POSITION_RATIO(Vehicle vehicle) { return invoke<float>(0xF283F0, vehicle); }
static void DISABLE_PLANE_AILERON(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0xF28490, vehicle, p1, p2); }
static BOOL GET_IS_VEHICLE_ENGINE_RUNNING(Vehicle vehicle) { return invoke<BOOL>(0xF28510, vehicle); }
static void SET_VEHICLE_USE_ALTERNATE_HANDLING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28570, vehicle, toggle); }
static void SET_BIKE_ON_STAND(Vehicle vehicle, float x, float y) { invoke<Void>(0xDF67C0, vehicle, x, y); }
static void SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF286B0, vehicle, p1); }
static void LOCK_DOORS_WHEN_NO_LONGER_NEEDED(Vehicle vehicle) { invoke<Void>(0xF28750, vehicle); }
static void SET_LAST_DRIVEN_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF287A0, vehicle); }
static Vehicle GET_LAST_DRIVEN_VEHICLE() { return invoke<Vehicle>(0xF287F0); }
static void CLEAR_LAST_DRIVEN_VEHICLE() { invoke<Void>(0xF28820); }
static void SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28830, vehicle, toggle); }
static void SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(Vehicle plane, int height) { invoke<Void>(0xF288D0, plane, height); }
static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xF288E0, vehicle, multiplier); }
static void SET_VEHICLE_CAN_SAVE_IN_GARAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28930, vehicle, toggle); }
static int GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(Vehicle vehicle) { return invoke<int>(0xF289D0, vehicle); }
static int GET_VEHICLE_NUM_OF_BROKEN_LOOSEN_PARTS(Vehicle vehicle) { return invoke<int>(0xF28A30, vehicle); }
static void SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Any p0, BOOL p1) { invoke<Void>(0xF28A90, p0, p1); }
static void SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28B30, vehicle, toggle); }
static void COPY_VEHICLE_DAMAGES(Vehicle sourceVehicle, Vehicle targetVehicle) { invoke<Void>(0xF28BD0, sourceVehicle, targetVehicle); }
static void DISABLE_VEHICLE_EXPLOSION_BREAK_OFF_PARTS() { invoke<Void>(0xF28C60); }
static void SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(float distance) { invoke<Void>(0xDF67C0, distance); }
static void SET_VEHICLE_SHOOT_AT_TARGET(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget) { invoke<Void>(0xF28C90, driver, entity, xTarget, yTarget, zTarget); }
static BOOL GET_VEHICLE_LOCK_ON_TARGET(Vehicle vehicle, Entity* entity) { return invoke<BOOL>(0xF28CB0, vehicle, entity); }
static void SET_FORCE_HD_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28D20, vehicle, toggle); }
static void SET_VEHICLE_CUSTOM_PATH_NODE_STREAMING_RADIUS(Vehicle vehicle, float p1) { invoke<Void>(0xF28DC0, vehicle, p1); }
static int GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<int>(0xF28E20, vehicle); }
static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0xF28E80, vehicle); }
static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0xF28EC0, vehicle); }
static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF28F30, vehicle, toggle); }
static void SET_ENABLE_VEHICLE_SLIPSTREAMING(BOOL toggle) { invoke<Void>(0xF28F90, toggle); }
static void SET_VEHICLE_SLIPSTREAMING_SHOULD_TIME_OUT(BOOL toggle) { invoke<Void>(0xF28FB0, toggle); }
static float GET_VEHICLE_CURRENT_TIME_IN_SLIP_STREAM(Vehicle vehicle) { return invoke<float>(0xF28FD0, vehicle); }
static BOOL IS_VEHICLE_PRODUCING_SLIP_STREAM(Vehicle vehicle) { return invoke<BOOL>(0xF29020, vehicle); }
static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF29080, vehicle, toggle); }
static void SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF29190, vehicle, toggle); }
static BOOL IS_VEHICLE_SPRAYABLE(Vehicle vehicle) { return invoke<BOOL>(0xF29230, vehicle); }
static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF29290, vehicle, toggle); }
static void DISABLE_VEHCILE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle, int p1, int p2) { invoke<Void>(0xF29340, vehicle, p1, p2); }
static void ENABLE_VEHICLE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle) { invoke<Void>(0xF293C0, vehicle); }
static BOOL IS_PLANE_LANDING_GEAR_INTACT(Vehicle plane) { return invoke<BOOL>(0xF29400, plane); }
static BOOL ARE_PLANE_PROPELLERS_INTACT(Vehicle plane) { return invoke<BOOL>(0xF29480, plane); }
static BOOL SET_PLANE_PROPELLER_HEALTH(Vehicle plane, float health) { return invoke<BOOL>(0xF294F0, plane, health); }
static void SET_VEHICLE_CAN_DEFORM_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF29560, vehicle, toggle); }
static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0xF29610, vehicle); }
static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0xF29670, vehicle, isStolen); }
static void SET_PLANE_TURBULENCE_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xF29700, vehicle, multiplier); }
static BOOL ARE_WINGS_OF_PLANE_INTACT(Vehicle plane) { return invoke<BOOL>(0xF29780, plane); }
static void ALLOW_AMBIENT_VEHICLES_TO_AVOID_ADVERSE_CONDITIONS(Vehicle vehicle) { invoke<Void>(0xF29810, vehicle); }
static void DETACH_VEHICLE_FROM_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0xF29820, vehicle, cargobob); }
static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(Vehicle vehicle) { return invoke<BOOL>(0xF29830, vehicle); }
static BOOL DETACH_ENTITY_FROM_CARGOBOB(Vehicle cargobob, Entity entity) { return invoke<BOOL>(0xDB5170, cargobob, entity); }
static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob, Vehicle vehicleAttached) { return invoke<BOOL>(0xF298A0, cargobob, vehicleAttached); }
static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0xF298D0, cargobob); }
static Entity GET_ENTITY_ATTACHED_TO_CARGOBOB(Any p0) { return invoke<Entity>(0xDB2B30, p0); }
static void ATTACH_VEHICLE_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z) { invoke<Void>(0xF29910, vehicle, cargobob, p2, x, y, z); }
static void ATTACH_ENTITY_TO_CARGOBOB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xF29930, p0, p1, p2, p3, p4, p5); }
static void SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(Vehicle cargobob, BOOL toggle) { invoke<Void>(0xF29950, cargobob, toggle); }
static void SET_CARGOBOB_EXCLUDE_FROM_PICKUP_ENTITY(Any p0, Any p1) { invoke<Void>(0xF29970, p0, p1); }
static BOOL CAN_CARGOBOB_PICK_UP_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0xF29980, p0, p1); }
static vector3 GET_ATTACHED_PICK_UP_HOOK_POSITION(Vehicle cargobob) { return invoke<vector3>(0xF299B0, cargobob); }
static BOOL DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Vehicle cargobob) { return invoke<BOOL>(0xF29B10, cargobob); }
static void CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob, int state) { invoke<Void>(0xF29BC0, cargobob, state); }
static void REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob) { invoke<Void>(0xF29BD0, cargobob); }
static void SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Vehicle cargobob, float length1, float length2, BOOL p3) { invoke<Void>(0xF29C30, cargobob, length1, length2, p3); }
static void SET_PICKUP_ROPE_LENGTH_WITHOUT_CREATING_ROPE_FOR_CARGOBOB(Any p0, Any p1, Any p2) { invoke<Void>(0xF29C50, p0, p1, p2); }
static void SET_CARGOBOB_PICKUP_ROPE_DAMPING_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0xF29C70, p0, p1); }
static void SET_CARGOBOB_PICKUP_ROPE_TYPE(Any p0, Any p1) { invoke<Void>(0xF29C80, p0, p1); }
static BOOL DOES_CARGOBOB_HAVE_PICKUP_MAGNET(Vehicle cargobob) { return invoke<BOOL>(0xF29CE0, cargobob); }
static void SET_CARGOBOB_PICKUP_MAGNET_ACTIVE(Vehicle cargobob, BOOL isActive) { invoke<Void>(0xF29D90, cargobob, isActive); }
static void SET_CARGOBOB_PICKUP_MAGNET_STRENGTH(Vehicle cargobob, float strength) { invoke<Void>(0xF29DB0, cargobob, strength); }
static void SET_CARGOBOB_PICKUP_MAGNET_FALLOFF(Vehicle cargobob, float p1) { invoke<Void>(0xF29E60, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_STRENGTH(Vehicle cargobob, float p1) { invoke<Void>(0xF29F10, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_FALLOFF(Vehicle cargobob, float p1) { invoke<Void>(0xF29FC0, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_PULL_STRENGTH(Vehicle cargobob, float p1) { invoke<Void>(0xF2A070, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_PULL_ROPE_LENGTH(Vehicle vehicle, float p1) { invoke<Void>(0xF2A120, vehicle, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_SET_TARGETED_MODE(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0xF2A1D0, vehicle, cargobob); }
static void SET_CARGOBOB_PICKUP_MAGNET_SET_AMBIENT_MODE(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0xF2A1E0, vehicle, p1, p2); }
static void SET_CARGOBOB_PICKUP_MAGNET_ENSURE_PICKUP_ENTITY_UPRIGHT(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2A200, vehicle, p1); }
static BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0xF2A2A0, vehicle); }
static void SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2A320, vehicle, p1); }
static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0xF2A380, disabled, weaponHash, vehicle, owner); }
static BOOL IS_VEHICLE_WEAPON_DISABLED(Hash weaponHash, Vehicle vehicle, Ped owner) { return invoke<BOOL>(0xF2A3A0, weaponHash, vehicle, owner); }
static void SET_VEHICLE_USED_FOR_PILOT_SCHOOL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A3D0, vehicle, toggle); }
static void SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A470, vehicle, toggle); }
static int GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<int>(0xF2A530, vehicle); }
static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0xF2A530, modelHash); }
static void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF2A600, vehicle); }
static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A650, vehicle, toggle); }
static void SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0xF2A700, vehicle, p1); }
static void SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A7A0, vehicle, toggle); }
static void SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2A820, vehicle, toggle); }
static void SET_VEHICLE_IMPATIENCE_TIMER(Vehicle vehicle, Any p1) { invoke<Void>(0xF2A8C0, vehicle, p1); }
static void SET_VEHICLE_HANDLING_OVERRIDE(Vehicle vehicle, Hash hash) { invoke<Void>(0xF2A910, vehicle, hash); }
static void SET_VEHICLE_EXTENDED_REMOVAL_RANGE(Vehicle vehicle, int range) { invoke<Void>(0xF2A960, vehicle, range); }
static void SET_VEHICLE_STEERING_BIAS_SCALAR(Any p0, float p1) { invoke<Void>(0xF2A9A0, p0, p1); }
static void SET_HELI_CONTROL_LAGGING_RATE_SCALAR(Vehicle helicopter, float multiplier) { invoke<Void>(0xF2AA00, helicopter, multiplier); }
static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { invoke<Void>(0xF2AA70, vehicle, friction); }
static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1E4C0, vehicle, toggle); }
static BOOL ARE_PLANE_CONTROL_PANELS_INTACT(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xF2AB60, vehicle, p1); }
static void SET_VEHICLE_CEILING_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0xF2ABD0, vehicle, height); }
static void SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2AC40, vehicle, toggle); }
static void CLEAR_VEHICLE_ROUTE_HISTORY(Vehicle vehicle) { invoke<Void>(0xF2AC90, vehicle); }
static Vehicle DOES_VEHICLE_EXIST_WITH_DECORATOR(const char* decorator) { return invoke<Vehicle>(0xF2ACE0, decorator); }
static void SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2AD10, vehicle, toggle); }
static void SET_VEHICLE_EXCLUSIVE_DRIVER(Vehicle vehicle, Ped ped, int index) { invoke<Void>(0xF2ADB0, vehicle, ped, index); }
static BOOL IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(Ped ped, Vehicle vehicle, int* outIndex) { return invoke<BOOL>(0xF2ADD0, ped, vehicle, outIndex); }
static void DISABLE_INDIVIDUAL_PLANE_PROPELLER(Vehicle vehicle, int propeller) { invoke<Void>(0xF2AE90, vehicle, propeller); }
static void SET_VEHICLE_FORCE_AFTERBURNER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2AF50, vehicle, toggle); }
static void SET_DONT_PROCESS_VEHICLE_GLASS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2AFF0, vehicle, toggle); }
static void SET_DISABLE_WANTED_CONES_RESPONSE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2B040, vehicle, toggle); }
static void SET_USE_DESIRED_Z_CRUISE_SPEED_FOR_LANDING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2B090, vehicle, toggle); }
static void SET_ARRIVE_DISTANCE_OVERRIDE_FOR_VEHICLE_PERSUIT_ATTACK(Vehicle vehicle, float p1) { invoke<Void>(0xDF67C0, vehicle, p1); }
static void SET_VEHICLE_READY_FOR_CLEANUP(Any p0) { invoke<Void>(0xF2B130, p0); }
static void SET_DISTANT_CARS_ENABLED(BOOL toggle) { invoke<Void>(0xDF67C0, toggle); }
static void SET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xF2B190, vehicle, r, g, b); }
static void SET_VEHICLE_NEON_INDEX_COLOUR(Vehicle vehicle, int index) { invoke<Void>(0xF2B250, vehicle, index); }
static void GET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xF2B2E0, vehicle, r, g, b); }
static void SET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0xF2B360, vehicle, index, toggle); }
static BOOL GET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0xF2B410, vehicle, index); }
static void SET_AMBIENT_VEHICLE_NEON_ENABLED(BOOL p0) { invoke<Void>(0xF2B4C0, p0); }
static void SUPPRESS_NEONS_ON_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2B4E0, vehicle, toggle); }
static void SET_DISABLE_SUPERDUMMY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2B530, vehicle, p1); }
static void REQUEST_VEHICLE_DIAL(Vehicle vehicle) { invoke<Void>(0xF2B5C0, vehicle); }
static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0xF2B610, vehicle); }
static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0xF2B670, vehicle, value); }
static void GET_VEHICLE_SIZE(Vehicle vehicle, vector3* out1, vector3* out2) { invoke<Void>(0xF2B6F0, vehicle, out1, out2); }
static float GET_FAKE_SUSPENSION_LOWERING_AMOUNT(Vehicle vehicle) { return invoke<float>(0xF2B790, vehicle); }
static void SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(float multiplier) { invoke<Void>(0xF2B800, multiplier); }
static int GET_NUMBER_OF_VEHICLE_DOORS(Vehicle vehicle) { return invoke<int>(0xF2B820, vehicle); }
static void SET_HYDRAULICS_CONTROL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2B870, vehicle, toggle); }
static void SET_CAN_ADJUST_GROUND_CLEARANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2B890, vehicle, p1); }
static float GET_VEHICLE_HEALTH_PERCENTAGE(Vehicle vehicle, float maxEngineHealth, float maxPetrolTankHealth, float maxBodyHealth, float maxMainRotorHealth, float maxTailRotorHealth, float maxUnkHealth) { return invoke<float>(0xF2B920, vehicle, maxEngineHealth, maxPetrolTankHealth, maxBodyHealth, maxMainRotorHealth, maxTailRotorHealth, maxUnkHealth); }
static BOOL GET_VEHICLE_IS_MERCENARY(Vehicle vehicle) { return invoke<BOOL>(0xF2B9E0, vehicle); }
static void SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2BA40, vehicle, p1); }
static void SET_VEHICLE_KERS_ALLOWED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2BA90, vehicle, toggle); }
static BOOL GET_VEHICLE_HAS_KERS(Vehicle vehicle) { return invoke<BOOL>(0xF2BAF0, vehicle); }
static void SET_PLANE_RESIST_TO_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2BB50, vehicle, toggle); }
static void SET_HELI_RESIST_TO_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2BBF0, vehicle, toggle); }
static void SET_DISABLE_BMX_EXTRA_TRICK_FORCES(Any p0) { invoke<Void>(0xF2BCA0, p0); }
static void SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Vehicle vehicle, int wheelId, float value) { invoke<Void>(0xF2BCC0, vehicle, wheelId, value); }
static float GET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Vehicle vehicle, int wheelId) { return invoke<float>(0xF2BCE0, vehicle, wheelId); }
static void SET_CAN_USE_HYDRAULICS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2BDD0, vehicle, toggle); }
static void SET_HYDRAULIC_VEHICLE_STATE(Vehicle vehicle, int state) { invoke<Void>(0xF2BDF0, vehicle, state); }
static void SET_HYDRAULIC_WHEEL_STATE(Vehicle vehicle, int wheelId, int state, float value, Any p4) { invoke<Void>(0xF2BE00, vehicle, wheelId, state, value, p4); }
static BOOL HAS_VEHICLE_PETROLTANK_SET_ON_FIRE_BY_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0xDF67C0, p0, p1); }
static void CLEAR_VEHICLE_PETROLTANK_FIRE_CULPRIT(Vehicle vehicle) { invoke<Void>(0xDF67C0, vehicle); }
static void SET_VEHICLE_BOBBLEHEAD_VELOCITY(float x, float y, float p2) { invoke<Void>(0xF2BF20, x, y, p2); }
static BOOL GET_VEHICLE_IS_DUMMY(Any p0) { return invoke<BOOL>(0xF2BF80, p0); }
static BOOL SET_VEHICLE_DAMAGE_SCALE(Vehicle vehicle, float p1) { return invoke<BOOL>(0xF230C0, vehicle, p1); }
static BOOL SET_VEHICLE_WEAPON_DAMAGE_SCALE(Vehicle vehicle, float multiplier) { return invoke<BOOL>(0xF2C080, vehicle, multiplier); }
static BOOL SET_DISABLE_DAMAGE_WITH_PICKED_UP_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0xF2C0D0, p0, p1); }
static void SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0xF2C120, p0, p1); }
static void SET_BIKE_EASY_TO_LAND(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2C170, vehicle, toggle); }
static void SET_INVERT_VEHICLE_CONTROLS(Vehicle vehicle, BOOL state) { invoke<Void>(0xF2C1C0, vehicle, state); }
static void SET_SPEED_BOOST_EFFECT_DISABLED(BOOL disabled) { invoke<Void>(0xF2C210, disabled); }
static void SET_SLOW_DOWN_EFFECT_DISABLED(BOOL disabled) { invoke<Void>(0xF2C230, disabled); }
static void SET_FORMATION_LEADER(Vehicle vehicle, float x, float y, float z, float p4) { invoke<Void>(0xF2C250, vehicle, x, y, z, p4); }
static void RESET_FORMATION_LEADER() { invoke<Void>(0xF2C250); }
static BOOL GET_IS_BOAT_CAPSIZED(Vehicle vehicle) { return invoke<BOOL>(0xF2C300, vehicle); }
static void SET_ALLOW_RAMMING_SOOP_OR_RAMP(Any p0, Any p1) { invoke<Void>(0xF2C360, p0, p1); }
static void SET_SCRIPT_RAMP_IMPULSE_SCALE(Vehicle vehicle, float impulseScale) { invoke<Void>(0xF2C3B0, vehicle, impulseScale); }
static BOOL GET_IS_DOOR_VALID(Vehicle vehicle, int doorId) { return invoke<BOOL>(0xF2C400, vehicle, doorId); }
static void SET_SCRIPT_ROCKET_BOOST_RECHARGE_TIME(Vehicle vehicle, float seconds) { invoke<Void>(0xF2C480, vehicle, seconds); }
static BOOL GET_HAS_ROCKET_BOOST(Vehicle vehicle) { return invoke<BOOL>(0xF2C550, vehicle); }
static BOOL IS_ROCKET_BOOST_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0xF2C5B0, vehicle); }
static void SET_ROCKET_BOOST_ACTIVE(Vehicle vehicle, BOOL active) { invoke<Void>(0xF2C620, vehicle, active); }
static BOOL GET_HAS_RETRACTABLE_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xF2C640, vehicle); }
static BOOL GET_IS_WHEELS_RETRACTED(Vehicle vehicle) { return invoke<BOOL>(0xF2C6A0, vehicle); }
static void SET_WHEELS_EXTENDED_INSTANTLY(Vehicle vehicle) { invoke<Void>(0xDF67C0, vehicle); }
static void SET_WHEELS_RETRACTED_INSTANTLY(Vehicle vehicle) { invoke<Void>(0xDF67C0, vehicle); }
static BOOL GET_CAR_HAS_JUMP(Vehicle vehicle) { return invoke<BOOL>(0xF2C7B0, vehicle); }
static void SET_USE_HIGHER_CAR_JUMP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2C810, vehicle, toggle); }
static void SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2C860, vehicle, toggle); }
static void SET_VEHICLE_WEAPON_RESTRICTED_AMMO(Vehicle vehicle, int weaponIndex, int capacity) { invoke<Void>(0xF2C8B0, vehicle, weaponIndex, capacity); }
static int GET_VEHICLE_WEAPON_RESTRICTED_AMMO(Vehicle vehicle, int weaponIndex) { return invoke<int>(0xF2C910, vehicle, weaponIndex); }
static BOOL GET_VEHICLE_HAS_PARACHUTE(Vehicle vehicle) { return invoke<BOOL>(0xF2C970, vehicle); }
static BOOL GET_VEHICLE_CAN_DEPLOY_PARACHUTE(Vehicle vehicle) { return invoke<BOOL>(0xF2C9E0, vehicle); }
static void VEHICLE_START_PARACHUTING(Vehicle vehicle, BOOL active) { invoke<Void>(0xF2CA50, vehicle, active); }
static BOOL IS_VEHICLE_PARACHUTE_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0xF2CAC0, vehicle); }
static void VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2CB30, vehicle, toggle); }
static void VEHICLE_SET_ENABLE_RAMP_CAR_SIDE_IMPULSE(Any p0, Any p1) { invoke<Void>(0xF2CBA0, p0, p1); }
static void VEHICLE_SET_ENABLE_NORMALISE_RAMP_CAR_VERTICAL_VELOCTIY(Any p0, Any p1) { invoke<Void>(0xF2CC00, p0, p1); }
static void VEHICLE_SET_JET_WASH_FORCE_ENABLED(Any p0) { invoke<Void>(0xF2CC60, p0); }
static void SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2CC80, vehicle, toggle); }
static void SET_VEHICLE_USE_BOOST_BUTTON_FOR_WHEEL_RETRACT(BOOL toggle) { invoke<Void>(0xF2CCD0, toggle); }
static void VEHICLE_SET_PARACHUTE_MODEL_OVERRIDE(Vehicle vehicle, Hash modelHash) { invoke<Void>(0xF2CD10, vehicle, modelHash); }
static void VEHICLE_SET_PARACHUTE_MODEL_TINT_INDEX(Vehicle vehicle, int textureVariation) { invoke<Void>(0xF2CD70, vehicle, textureVariation); }
static int VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(Any p0, Any p1) { return invoke<int>(0xF2CE00, p0, p1); }
static int VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(Any p0, Any p1) { return invoke<int>(0xF2CE10, p0, p1); }
static int VEHICLE_SET_OVERRIDE_SIDE_RATIO(Any p0, Any p1) { return invoke<int>(0xF2CE20, p0, p1); }
static int GET_ALL_VEHICLES(Any* vehsStruct) { return invoke<int>(0xF2CE30, vehsStruct); }
static void SET_CARGOBOB_EXTA_PICKUP_RANGE(Any p0, Any p1) { invoke<Void>(0xF2CE60, p0, p1); }
static void SET_OVERRIDE_VEHICLE_DOOR_TORQUE(Any p0, Any p1, Any p2) { invoke<Void>(0xF2CE70, p0, p1, p2); }
static void SET_WHEELIE_ENABLED(Vehicle vehicle, BOOL enabled) { invoke<Void>(0xF2CF00, vehicle, enabled); }
static void SET_DISABLE_HELI_EXPLODE_FROM_BODY_DAMAGE(Any p0, Any p1) { invoke<Void>(0xF2CF50, p0, p1); }
static void SET_DISABLE_EXPLODE_FROM_BODY_DAMAGE_ON_COLLISION(Vehicle vehicle, float value) { invoke<Void>(0xF2CFB0, vehicle, value); }
static void SET_TRAILER_ATTACHMENT_ENABLED(Any p0, Any p1) { invoke<Void>(0xF2D050, p0, p1); }
static void SET_ROCKET_BOOST_FILL(Vehicle vehicle, float percentage) { invoke<Void>(0xF2D0A0, vehicle, percentage); }
static void SET_GLIDER_ACTIVE(Vehicle vehicle, BOOL state) { invoke<Void>(0xF2D1A0, vehicle, state); }
static void SET_SHOULD_RESET_TURRET_IN_SCRIPTED_CAMERAS(Vehicle vehicle, BOOL shouldReset) { invoke<Void>(0xF2D200, vehicle, shouldReset); }
static void SET_VEHICLE_DISABLE_COLLISION_UPON_CREATION(Vehicle vehicle, BOOL disable) { invoke<Void>(0xF2D250, vehicle, disable); }
static void SET_GROUND_EFFECT_REDUCES_DRAG(BOOL toggle) { invoke<Void>(0xF2D2E0, toggle); }
static void SET_DISABLE_MAP_COLLISION(Vehicle vehicle) { invoke<Void>(0xF2D300, vehicle); }
static void SET_DISABLE_PED_STAND_ON_TOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDF67C0, vehicle, toggle); }
static void SET_VEHICLE_DAMAGE_SCALES(Vehicle vehicle, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF230C0, vehicle, p1, p2, p3, p4); }
static void SET_PLANE_SECTION_DAMAGE_SCALE(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0xF2D450, vehicle, p1, p2); }
static void SET_HELI_CAN_PICKUP_ENTITY_THAT_HAS_PICK_UP_DISABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D520, vehicle, toggle); }
static void SET_VEHICLE_BOMB_AMMO(Vehicle vehicle, int bombCount) { invoke<Void>(0xF2D570, vehicle, bombCount); }
static int GET_VEHICLE_BOMB_AMMO(Vehicle vehicle) { return invoke<int>(0xF2D5C0, vehicle); }
static void SET_VEHICLE_COUNTERMEASURE_AMMO(Vehicle vehicle, int counterMeasureCount) { invoke<Void>(0xF2D620, vehicle, counterMeasureCount); }
static int GET_VEHICLE_COUNTERMEASURE_AMMO(Vehicle vehicle) { return invoke<int>(0xF2D670, vehicle); }
static void SET_HELI_COMBAT_OFFSET(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xF2D6D0, vehicle, x, y, z); }
static BOOL GET_CAN_VEHICLE_BE_PLACED_HERE(Vehicle vehicle, float x, float y, float z, float rotX, float rotY, float rotZ, int p7, Any p8) { return invoke<BOOL>(0xF2D760, vehicle, x, y, z, rotX, rotY, rotZ, p7, p8); }
static void SET_DISABLE_AUTOMATIC_CRASH_TASK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D7A0, vehicle, toggle); }
static void SET_SPECIAL_FLIGHT_MODE_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0xF2D820, vehicle, ratio); }
static void SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(Vehicle vehicle, float targetRatio) { invoke<Void>(0xF2D890, vehicle, targetRatio); }
static void SET_SPECIAL_FLIGHT_MODE_ALLOWED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D900, vehicle, toggle); }
static void SET_DISABLE_HOVER_MODE_FLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2D960, vehicle, toggle); }
static BOOL GET_OUTRIGGERS_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0xF2D9C0, vehicle); }
static vector3 FIND_SPAWN_COORDINATES_FOR_HELI(Ped ped) { return invoke<vector3>(0xF2DA30, ped); }
static void SET_DEPLOY_FOLDING_WINGS(Vehicle vehicle, BOOL deploy, BOOL p2) { invoke<Void>(0xF2DAD0, vehicle, deploy, p2); }
static BOOL ARE_FOLDING_WINGS_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0xF2DB40, vehicle); }
static void SET_DIP_STRAIGHT_DOWN_WHEN_CRASHING_PLANE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2DC50, vehicle, toggle); }
static void SET_TURRET_HIDDEN(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0xF2DCA0, vehicle, index, toggle); }
static void SET_HOVER_MODE_WING_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0xF2DD40, vehicle, ratio); }
static void SET_DISABLE_TURRET_MOVEMENT(Vehicle vehicle, int turretId) { invoke<Void>(0xF2DDA0, vehicle, turretId); }
static void SET_FORCE_FIX_LINK_MATRICES(Vehicle vehicle) { invoke<Void>(0xF2DE30, vehicle); }
static void SET_TRANSFORM_RATE_FOR_ANIMATION(Vehicle vehicle, float transformRate) { invoke<Void>(0xF2DE70, vehicle, transformRate); }
static void SET_TRANSFORM_TO_SUBMARINE_USES_ALTERNATE_INPUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF22F20, vehicle, toggle); }
static void SET_VEHICLE_COMBAT_MODE(BOOL toggle) { invoke<Void>(0xF2DF40, toggle); }
static void SET_VEHICLE_DETONATION_MODE(BOOL toggle) { invoke<Void>(0xF2DF50, toggle); }
static void SET_VEHICLE_SHUNT_ON_STICK(BOOL toggle) { invoke<Void>(0xF2DF60, toggle); }
static BOOL GET_IS_VEHICLE_SHUNTING(Vehicle vehicle) { return invoke<BOOL>(0xF2DFE0, vehicle); }
static BOOL GET_HAS_VEHICLE_BEEN_HIT_BY_SHUNT(Vehicle vehicle) { return invoke<BOOL>(0xF2E050, vehicle); }
static Vehicle GET_LAST_SHUNT_VEHICLE(Vehicle vehicle) { return invoke<Vehicle>(0xF2E0C0, vehicle); }
static void SET_DISABLE_VEHICLE_EXPLOSIONS_DAMAGE(BOOL toggle) { invoke<Void>(0xF2E120, toggle); }
static void SET_OVERRIDE_NITROUS_LEVEL(Vehicle vehicle, BOOL toggle, float level, float power, float rechargeTime, BOOL disableSound) { invoke<Void>(0xF2E140, vehicle, toggle, level, power, rechargeTime, disableSound); }
static void SET_INCREASE_WHEEL_CRUSH_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2E540, vehicle, toggle); }
static void SET_DISABLE_WEAPON_BLADE_FORCES(BOOL toggle) { invoke<Void>(0xF2E590, toggle); }
static void SET_USE_DOUBLE_CLICK_FOR_CAR_JUMP(BOOL toggle) { invoke<Void>(0xF2E5B0, toggle); }
static BOOL GET_DOES_VEHICLE_HAVE_TOMBSTONE(Vehicle vehicle) { return invoke<BOOL>(0xF2E5D0, vehicle); }
static void HIDE_TOMBSTONE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2E630, vehicle, toggle); }
static BOOL GET_IS_VEHICLE_DISABLED_BY_EMP(Vehicle vehicle) { return invoke<BOOL>(0xF2E6E0, vehicle); }
static void SET_DISABLE_RETRACTING_WEAPON_BLADES(BOOL toggle) { invoke<Void>(0xF2E740, toggle); }
static float GET_TYRE_HEALTH(Vehicle vehicle, int wheelIndex) { return invoke<float>(0xF2E760, vehicle, wheelIndex); }
static void SET_TYRE_HEALTH(Vehicle vehicle, int wheelIndex, float health) { invoke<Void>(0xF2E7F0, vehicle, wheelIndex, health); }
static float GET_TYRE_WEAR_RATE(Vehicle vehicle, int wheelIndex) { return invoke<float>(0xF2E8B0, vehicle, wheelIndex); }
static void SET_TYRE_WEAR_RATE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0xF2E940, vehicle, wheelIndex, multiplier); }
static void SET_TYRE_WEAR_RATE_SCALE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0xF2E940, vehicle, wheelIndex, multiplier); }
static void SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0xF2EA50, vehicle, wheelIndex, multiplier); }
static void SET_AIRCRAFT_IGNORE_HIGHTMAP_OPTIMISATION(Vehicle vehicle, int p1) { invoke<Void>(0xF2EAD0, vehicle, p1); }
static void SET_REDUCED_SUSPENSION_FORCE(Vehicle vehicle, BOOL enable) { invoke<Void>(0xF2EB30, vehicle, enable); }
static void SET_DRIFT_TYRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2EB90, vehicle, toggle); }
static BOOL GET_DRIFT_TYRES_SET(Vehicle vehicle) { return invoke<BOOL>(0xF2EBE0, vehicle); }
static void NETWORK_USE_HIGH_PRECISION_TRAIN_BLENDING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2EC40, vehicle, toggle); }
static void SET_CHECK_FOR_ENOUGH_ROOM_FOR_PED(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2ECA0, vehicle, p1); }
static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0xF2F950, x, y, z, height); }
static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0xF2F950, x, y, z, height); }
static BOOL TEST_PROBE_AGAINST_WATER(float x1, float y1, float z1, float x2, float y2, float z2, vector3* result) { return invoke<BOOL>(0xF2FAF0, x1, y1, z1, x2, y2, z2, result); }
static int TEST_PROBE_AGAINST_ALL_WATER(float x1, float y1, float z1, float x2, float y2, float z2, int flags, float* waterHeight) { return invoke<int>(0xF2FB60, x1, y1, z1, x2, y2, z2, flags, waterHeight); }
static int TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, int flags, float* waterHeight) { return invoke<int>(0xF2FC20, x, y, z, flags, waterHeight); }
static void MODIFY_WATER(float x, float y, float radius, float height) { invoke<Void>(0xF2FD00, x, y, radius, height); }
static int ADD_EXTRA_CALMING_QUAD(float xLow, float yLow, float xHigh, float yHigh, float height) { return invoke<int>(0xF2FD20, xLow, yLow, xHigh, yHigh, height); }
static void REMOVE_EXTRA_CALMING_QUAD(int calmingQuad) { invoke<Void>(0xF2FD60, calmingQuad); }
static void SET_DEEP_OCEAN_SCALER(float intensity) { invoke<Void>(0xF2FD70, intensity); }
static float GET_DEEP_OCEAN_SCALER() { return invoke<float>(0xF2FD80); }
static void SET_CALMED_WAVE_HEIGHT_SCALER(float height) { invoke<Void>(0xF2FDA0, height); }
static void RESET_DEEP_OCEAN_SCALER() { invoke<Void>(0xF2FD70); }
static void ENABLE_LASER_SIGHT_RENDERING(BOOL toggle) { invoke<Void>(0xF38580, toggle); }
static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0xF385A0, componentHash); }
static Hash GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Hash>(0xF38660, weaponHash); }
static Hash GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke<Hash>(0xF38730, weaponHash); }
static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Hash>(0xF387A0, weaponHash); }
static int GET_WEAPON_COMPONENT_VARIANT_EXTRA_COUNT(Hash componentHash) { return invoke<int>(0xF38810, componentHash); }
static Hash GET_WEAPON_COMPONENT_VARIANT_EXTRA_MODEL(Hash componentHash, int extraComponentIndex) { return invoke<Hash>(0xF388A0, componentHash, extraComponentIndex); }
static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL bForceInHand) { invoke<Void>(0xF38980, ped, weaponHash, bForceInHand); }
static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0xF389A0, ped, weaponHash, p2); }
static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped, Any p1) { return invoke<Entity>(0xF389A0, ped, p1); }
static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0xF38AB0, ped, p1); }
static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0xF38B20, ped, weaponHash); }
static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0xF38B50, ped, weaponHash); }
static void SET_PED_CYCLE_VEHICLE_WEAPONS_ONLY(Ped ped) { invoke<Void>(0xF38BD0, ped); }
static BOOL IS_PED_ARMED(Ped ped, int typeFlags) { return invoke<BOOL>(0xF38C10, ped, typeFlags); }
static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0xF38C40, weaponHash); }
static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0xF38CB0, ped, weaponHash, p2); }
static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0xF38CE0, ped); }
static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0xF38D50, ped, weaponSlot); }
static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0xF38E00, ped, weaponhash); }
static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0xF38E30, ped, weaponHash, ammo); }
static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo, BOOL p3) { invoke<Void>(0xF38EA0, ped, weaponHash, ammo, p3); }
static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0xF38EC0, ped, toggle, weaponHash); }
static void SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0xF38EC0, ped, toggle); }
static void SET_PED_STUN_GUN_FINITE_AMMO(Any p0, Any p1) { invoke<Void>(0xF38F50, p0, p1); }
static void GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL isHidden, BOOL bForceInHand) { invoke<Void>(0xF38FD0, ped, weaponHash, ammoCount, isHidden, bForceInHand); }
static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL bForceInHand) { invoke<Void>(0xF39000, ped, weaponHash, ammoCount, bForceInHand); }
static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL p1) { invoke<Void>(0xF39020, ped, p1); }
static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { invoke<Void>(0xF390A0, ped, weaponHash); }
static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0xF39120, ped, toggle); }
static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0xF391B0, ped, visible, deselectWeapon, p3, p4); }
static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xF391F0, ped, toggle); }
static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0xF39250, ped, weaponHash, weaponType); }
static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0xF392C0, ped); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0xF39320, entity, weaponHash, weaponType); }
static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { invoke<Void>(0xF393A0, entity); }
static void SET_PED_DROPS_WEAPON(Ped ped) { invoke<Void>(0xF39400, ped); }
static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, int ammoCount) { invoke<Void>(0xF39410, ped, weaponHash, xOffset, yOffset, zOffset, ammoCount); }
static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0xF39430, ped, weaponHash, p2); }
static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xF396D0, ped, weaponHash, ammo); }
static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0xF397B0, ped, weaponHash, ammo); }
static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xF397E0, ped, weaponHash, ammo); }
static BOOL GET_MAX_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int* ammo) { return invoke<BOOL>(0xF397E0, ped, ammoTypeHash, ammo); }
static void ADD_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { invoke<Void>(0xF39960, ped, ammoTypeHash, ammo); }
static void SET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { invoke<Void>(0xF38EA0, ped, ammoTypeHash, ammo); }
static int GET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash) { return invoke<int>(0xF39A40, ped, ammoTypeHash); }
static void SET_PED_AMMO_TO_DROP(Ped ped, int p1) { invoke<Void>(0xF38EA0, ped, p1); }
static void SET_PICKUP_AMMO_AMOUNT_SCALER(float p0) { invoke<Void>(0xF39B00, p0); }
static Hash GET_PED_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0xF39B20, ped, weaponHash); }
static Hash GET_PED_ORIGINAL_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0xF39B50, ped, weaponHash); }
static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, vector3* coords) { return invoke<BOOL>(0xF39C00, ped, coords); }
static void SET_PED_GADGET(Ped ped, Hash gadgetHash, BOOL p2) { invoke<Void>(0xF39D00, ped, gadgetHash, p2); }
static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0xF39D20, ped, gadgetHash); }
static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0xF39D90, ped); }
static void EXPLODE_PROJECTILES(Ped ped, Hash weaponHash, BOOL p2) { invoke<Void>(0xF39DF0, ped, weaponHash, p2); }
static void REMOVE_ALL_PROJECTILES_OF_TYPE(Hash weaponHash, BOOL explode) { invoke<Void>(0xF39E10, weaponHash, explode); }
static float GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0xDF67C0, ped); }
static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0xF39ED0, ped); }
static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weaponHash, Any p3) { return invoke<BOOL>(0xF39F00, driver, vehicle, weaponHash, p3); }
static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0xF39F30, ped, weaponHash, componentHash); }
static void REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0xF39FA0, ped, weaponHash, componentHash); }
static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xF38CB0, ped, weaponHash, componentHash); }
static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xF3A040, ped, weaponHash, componentHash); }
static BOOL REFILL_AMMO_INSTANTLY(Ped ped) { return invoke<BOOL>(0xDF67C0, ped); }
static BOOL MAKE_PED_RELOAD(Ped ped) { return invoke<BOOL>(0xF3A0D0, ped); }
static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, int p2) { invoke<Void>(0xF3A180, weaponHash, p1, p2); }
static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0xF3A240, weaponHash); }
static void REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0xF3A270, weaponHash); }
static Object CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float scale, Any p7, Any p8, Any p9) { return invoke<Object>(0xF3A360, weaponHash, ammoCount, x, y, z, showWorldModel, scale, p7, p8, p9); }
static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash componentHash) { invoke<Void>(0xF3A3C0, weaponObject, componentHash); }
static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Object object, Hash componentHash) { invoke<Void>(0xF3A410, object, componentHash); }
static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash componentHash) { return invoke<BOOL>(0xF3A490, weapon, componentHash); }
static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { invoke<Void>(0xF3A520, weaponObject, ped); }
static BOOL DOES_WEAPON_TAKE_WEAPON_COMPONENT(Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xF3A530, weaponHash, componentHash); }
static Object GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Object>(0xF3A560, ped, p1); }
static void GIVE_LOADOUT_TO_PED(Ped ped, Hash loadoutHash) { invoke<Void>(0xF3A590, ped, loadoutHash); }
static void SET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash, int tintIndex) { invoke<Void>(0xF3A5E0, ped, weaponHash, tintIndex); }
static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0xF3A600, ped, weaponHash); }
static void SET_WEAPON_OBJECT_TINT_INDEX(Object weapon, int tintIndex) { invoke<Void>(0xF3A630, weapon, tintIndex); }
static int GET_WEAPON_OBJECT_TINT_INDEX(Object weapon) { return invoke<int>(0xF3A680, weapon); }
static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0xF3A6E0, weaponHash); }
static void SET_PED_WEAPON_COMPONENT_TINT_INDEX(Ped ped, Hash weaponHash, Hash camoComponentHash, int colorIndex) { invoke<Void>(0xF3A750, ped, weaponHash, camoComponentHash, colorIndex); }
static int GET_PED_WEAPON_COMPONENT_TINT_INDEX(Ped ped, Hash weaponHash, Hash camoComponentHash) { return invoke<int>(0xF3A770, ped, weaponHash, camoComponentHash); }
static void SET_WEAPON_OBJECT_COMPONENT_TINT_INDEX(Object weaponObject, Hash camoComponentHash, int colorIndex) { invoke<Void>(0xF3A7A0, weaponObject, camoComponentHash, colorIndex); }
static int GET_WEAPON_OBJECT_COMPONENT_TINT_INDEX(Object weaponObject, Hash camoComponentHash) { return invoke<int>(0xF3A840, weaponObject, camoComponentHash); }
static int GET_PED_WEAPON_CAMO_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0xF3A8D0, ped, weaponHash); }
static void SET_WEAPON_OBJECT_CAMO_INDEX(Object weaponObject, int p1) { invoke<Void>(0xF3A900, weaponObject, p1); }
static BOOL GET_WEAPON_HUD_STATS(Hash weaponHash, Any* outData) { return invoke<BOOL>(0xF3A950, weaponHash, outData); }
static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Hash componentHash, Any* outData) { return invoke<BOOL>(0xF3AA00, componentHash, outData); }
static float GET_WEAPON_DAMAGE(Hash weaponHash, Hash componentHash) { return invoke<float>(0xF3AAA0, weaponHash, componentHash); }
static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0xF3AAD0, weaponHash); }
static float GET_WEAPON_TIME_BETWEEN_SHOTS(Hash weaponHash) { return invoke<float>(0xF3AB50, weaponHash); }
static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { invoke<Void>(0xF3ABD0, ped, xBias, yBias); }
static Object SET_PED_SHOOT_ORDNANCE_WEAPON(Ped ped, float p1) { return invoke<Object>(0xF3AC40, ped, p1); }
static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(Entity weaponObject) { invoke<Void>(0xF3AC70, weaponObject); }
static void SET_WEAPON_DAMAGE_MODIFIER(Hash weaponHash, float damageMultiplier) { invoke<Void>(0xF3AD20, weaponHash, damageMultiplier); }
static void SET_WEAPON_AOE_MODIFIER(Hash weaponHash, float multiplier) { invoke<Void>(0xF3AD80, weaponHash, multiplier); }
static void SET_WEAPON_EFFECT_DURATION_MODIFIER(Hash p0, float p1) { invoke<Void>(0xF3ADE0, p0, p1); }
static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0xF3AE40, ped); }
static BOOL IS_FLASH_LIGHT_ON(Ped ped) { return invoke<BOOL>(0xF3AEB0, ped); }
static BOOL SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<BOOL>(0xDCDE70, distance); }
static void SET_FLASH_LIGHT_ACTIVE_HISTORY(Ped ped, BOOL toggle) { invoke<Void>(0xDCDE70, ped, toggle); }
static void SET_WEAPON_ANIMATION_OVERRIDE(Ped ped, Hash animStyle) { invoke<Void>(0xF3AFB0, ped, animStyle); }
static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0xF3AAA0, weaponHash); }
static void SET_EQIPPED_WEAPON_START_SPINNING_AT_FULL_SPEED(Ped ped) { invoke<Void>(0xF3B0B0, ped); }
static BOOL CAN_USE_WEAPON_ON_PARACHUTE(Hash weaponHash) { return invoke<BOOL>(0xF3B110, weaponHash); }
static int CREATE_AIR_DEFENCE_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6, Hash weaponHash) { return invoke<int>(0xF3B140, x, y, z, radius, p4, p5, p6, weaponHash); }
static int CREATE_AIR_DEFENCE_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float radius, Hash weaponHash) { return invoke<int>(0xF3B1B0, p0, p1, p2, p3, p4, p5, p6, p7, p8, radius, weaponHash); }
static BOOL REMOVE_AIR_DEFENCE_SPHERE(int zoneId) { return invoke<BOOL>(0xF3B3A0, zoneId); }
static void REMOVE_ALL_AIR_DEFENCE_SPHERES() { invoke<Void>(0xF3B3D0); }
static void SET_PLAYER_TARGETTABLE_FOR_AIR_DEFENCE_SPHERE(Player player, int zoneId, BOOL enable) { invoke<Void>(0xF3B3E0, player, zoneId, enable); }
static BOOL IS_AIR_DEFENCE_SPHERE_IN_AREA(float x, float y, float z, float radius, int* outZoneId) { return invoke<BOOL>(0xF3B420, x, y, z, radius, outZoneId); }
static void FIRE_AIR_DEFENCE_SPHERE_WEAPON_AT_POSITION(int zoneId, float x, float y, float z) { invoke<Void>(0xF3B4B0, zoneId, x, y, z); }
static BOOL DOES_AIR_DEFENCE_SPHERE_EXIST(int zoneId) { return invoke<BOOL>(0xF3B530, zoneId); }
static void SET_CAN_PED_SELECT_INVENTORY_WEAPON(Ped ped, Hash weaponHash, BOOL toggle) { invoke<Void>(0xF3B560, ped, weaponHash, toggle); }
static void SET_CAN_PED_SELECT_ALL_WEAPONS(Ped ped, BOOL toggle) { invoke<Void>(0xF3B580, ped, toggle); }
static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0xF3C500, x, y, z); }
static int GET_ZONE_FROM_NAME_ID(const char* zoneName) { return invoke<int>(0xF3C590, zoneName); }
static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0xF3C5D0, zoneId); }
static const char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<const char*>(0xF3C620, x, y, z); }
static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { invoke<Void>(0xF3C6D0, zoneId, toggle); }
static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0xF3C6F0, zoneId); }
static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { invoke<Void>(0xF3C720, scheduleId, vehicleHash); }
static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<Void>(0xF3C730, scheduleId); }
static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0xF3C780, x, y, z); }
