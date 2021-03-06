/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableIndexSet, NSObject<NSCopying>;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned maxEntityScore : 1;
	unsigned sumCount : 1;
	unsigned titleMatch : 1;
	unsigned uniqueCount : 1;
} SCD_Struct_AT1;

typedef struct {
	unsigned computationTime : 1;
	unsigned interarrivalTime : 1;
} SCD_Struct_AT2;

typedef struct {
	unsigned date : 1;
} SCD_Struct_AT3;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW4;

typedef struct {
	unsigned numEndingCandidates : 1;
	unsigned numStartingCandidates : 1;
	unsigned phaseDescription : 1;
} SCD_Struct_AT5;

typedef struct {
	double field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_AT6;

typedef struct {
	unsigned numEngagementsInAppLibrary : 1;
	unsigned numEngagementsInAppPredictionPanel : 1;
	unsigned numEngagementsInSpotlightActions : 1;
	unsigned numEngagementsInSpotlightApps : 1;
	unsigned numEngagementsInSuggestionsWidget : 1;
	unsigned sessionLengthInSeconds : 1;
	unsigned appLibraryEnabled : 1;
	unsigned appPredictionPanelEnabled : 1;
	unsigned spotlightEnabled : 1;
	unsigned suggestionsWidgetEnabled : 1;
} SCD_Struct_AT7;

typedef struct {
	unsigned timestamp : 1;
	unsigned event : 1;
	unsigned pos : 1;
	unsigned isOffscreen : 1;
	unsigned topOfPile : 1;
} SCD_Struct_AT8;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct {
	unsigned timestamp : 1;
	unsigned consumerSubType : 1;
	unsigned coreMotionCurrentMotionLaunches : 1;
	unsigned coreMotionLaunches : 1;
	unsigned currentLOIType : 1;
	unsigned dayOfWeek : 1;
	unsigned engagedApp : 1;
	unsigned locationDistanceFromGym : 1;
	unsigned locationDistanceFromHome : 1;
	unsigned locationDistanceFromSchool : 1;
	unsigned locationDistanceFromWork : 1;
	unsigned outcome : 1;
	unsigned predictionCacheAge : 1;
	unsigned sessionLogVersion : 1;
	unsigned timeOfDayInterval : 1;
	unsigned totalAirplaneModeLaunches : 1;
	unsigned totalCurrentDayOfWeekLaunches : 1;
	unsigned totalDayOfWeekLaunches : 1;
	unsigned totalLaunchSequences : 1;
	unsigned totalLaunches : 1;
	unsigned totalSSIDLaunches : 1;
	unsigned totalSpotlightLaunches : 1;
	unsigned totalSpotlightTimeOfDayLaunches : 1;
	unsigned totalTimeOfDayLaunches : 1;
	unsigned totalTrendingLaunches : 1;
	unsigned totalWifiLaunches : 1;
	unsigned inAirplaneMode : 1;
	unsigned isInternalBuild : 1;
} SCD_Struct_AW10;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct {
	unsigned appPopularity : 1;
	unsigned cleared : 1;
	unsigned defaultActions : 1;
	unsigned engaged : 1;
	unsigned ignored : 1;
	unsigned orbs : 1;
	unsigned received : 1;
	unsigned response : 1;
	unsigned stype : 1;
	unsigned suppActions : 1;
	unsigned tapCoalesce : 1;
	unsigned totalLaunches : 1;
} SCD_Struct_AT13;

typedef struct {
	unsigned score : 1;
	unsigned timestamp : 1;
	unsigned cacheRank : 1;
	unsigned engagedAction : 1;
	unsigned futureMedia : 1;
	unsigned shown : 1;
} SCD_Struct_AW14;

typedef struct ATXPredictionItem {
	NSString* key;
	unsigned long long actionHash;
	float inputSignals[807];
	float score;
	BOOL isMediumConfidenceForBlendingLayer;
	BOOL isHighConfidenceForBlendingLayer;
} ATXPredictionItem;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, ATXPredictionItem> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true> > __p3_;
} hash_table<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, ATXPredictionItem> > >;

typedef struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, ATXPredictionItem> > > {
	hash_table<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, ATXPredictionItem> > > __table_;
} unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, ATXPredictionItem> > >;

typedef struct {
	unsigned secondsBeforeBlendingUpdate : 1;
	unsigned currentLOIType : 1;
	unsigned dayOfWeek : 1;
	unsigned timeOfDay : 1;
	unsigned dateInWeekend : 1;
	unsigned lastUnlockMoreThan1HourAgo : 1;
	unsigned lastUnlockMoreThan30MinutesAgo : 1;
} SCD_Struct_AT26;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
} SCD_Struct_AT28;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true> > __p3_;
} hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int> > >;

typedef struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int> > > {
	hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int> > > __table_;
} unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int> > >;

typedef struct _compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > {
	ATXPredictionItem __value_;
} compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> >;

typedef struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > {
	ATXPredictionItem __begin_;
	ATXPredictionItem __end_;
	compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > __end_cap_;
} vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >;

typedef struct sqlite3* sqlite3Ref;

typedef struct {
	unsigned appsAllowed : 1;
	unsigned appsAllowedThird : 1;
	unsigned appsDenied : 1;
	unsigned appsDeniedThird : 1;
	unsigned appsInstalled : 1;
	unsigned appsInstalledThird : 1;
	unsigned appsLockscreen : 1;
	unsigned appsLockscreenThird : 1;
} SCD_Struct_AT42;

typedef struct _compressed_pair<float * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> > {
	 __value_;
} compressed_pair<float * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> >;

typedef struct _compressed_pair<int * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> > {
	 __value_;
} compressed_pair<int * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> >;

typedef struct vector<int __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> > {
	 __begin_;
	 __end_;
	compressed_pair<int * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> > __end_cap_;
} vector<int __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> >;

typedef struct SimdVector<int __attribute__((ext_vector_type(8))), unsigned int> {
	vector<int __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> > chunks;
	unsigned long long count;
} SimdVector<int __attribute__((ext_vector_type(8))), unsigned int>;

typedef struct vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> > {
	 __begin_;
	 __end_;
	compressed_pair<float * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> > __end_cap_;
} vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> >;

typedef struct SimdVector<float __attribute__((ext_vector_type(8))), float> {
	vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> > chunks;
	unsigned long long count;
} SimdVector<float __attribute__((ext_vector_type(8))), float>;

typedef struct HDGuardedData {
	SimdVector<float __attribute__((ext_vector_type(8))), float> scores;
	SimdVector<int __attribute__((ext_vector_type(8))), unsigned int> abs;
	BOOL enumerationInProgress;
} HDGuardedData;

typedef struct _compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > > {
	SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> __value_;
} compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > >;

typedef struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > > {
	compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > > __ptr_;
} unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > >;

typedef struct HTGuardedData {
	NSMutableDictionary* dict;
	NSMutableIndexSet* usedIds;
	NSObject<NSCopying>* prevKey;
	unsigned short prevEventId;
} HTGuardedData;

typedef struct _compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > > {
	SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> __value_;
} compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > >;

typedef struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > > {
	compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > > __ptr_;
} unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > >;

typedef struct {
	double field1[807];
	double field2;
} SCD_Struct_AT55;

typedef struct {
	unsigned appLaunchPopularity : 1;
	unsigned cleared : 1;
	unsigned defaction : 1;
	unsigned engaged : 1;
	unsigned ignored : 1;
	unsigned location : 1;
	unsigned motionAtRecieve : 1;
	unsigned orb : 1;
	unsigned received : 1;
	unsigned suppaction : 1;
	unsigned tapcoa : 1;
	unsigned totalLaunches : 1;
	unsigned visits : 1;
	unsigned isStationary : 1;
} SCD_Struct_AT56;

typedef struct fixpt_meta_s {
	float base;
	float incr;
} fixpt_meta_s;

typedef struct header_s {
	unsigned nvectors;
	unsigned length;
	fixpt_meta_s fixinfo;
} header_s;

typedef struct _CFBurstTrie* CFBurstTrieRef;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __IOHIDServiceClient* IOHIDServiceClientRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct backup_file_hdr_s {
	unsigned char backupId[16];
	unsigned chunkCount;
} backup_file_hdr_s;

typedef struct {
	unsigned timestamp : 1;
	unsigned latitude : 1;
	unsigned launchReason : 1;
	unsigned locationAccuracy : 1;
	unsigned longitude : 1;
	unsigned timeBucket : 1;
	unsigned isClip : 1;
	unsigned isNegativeSession : 1;
	unsigned isTourist : 1;
} SCD_Struct_AW64;

typedef struct {
	double field1;
	unsigned field2;
	unsigned short field3;
} SCD_Struct_AT65;

typedef struct {
	unsigned timestamp : 1;
	unsigned appActionCoreMotionCurrentMotionLaunches : 1;
	unsigned appForAllActionsCoreMotionCurrentMotionLaunches : 1;
	unsigned consumerSubType : 1;
	unsigned currentLOIType : 1;
	unsigned dayOfWeek : 1;
	unsigned engagementType : 1;
	unsigned intentDonationDelay : 1;
	unsigned locationDistanceFromHome : 1;
	unsigned locationDistanceFromWork : 1;
	unsigned logType : 1;
	unsigned predictionAge : 1;
	unsigned sessionLogVersion : 1;
	unsigned timeOfDayInterval : 1;
	unsigned totalAppActionAirplaneModeLaunches : 1;
	unsigned totalAppActionCoarseTimeOfDayLaunches : 1;
	unsigned totalAppActionCurrentDayOfWeekLaunches : 1;
	unsigned totalAppActionTimeOfDayLaunches : 1;
	unsigned totalAppForAllActionTimeOfDayLaunches : 1;
	unsigned totalAppForAllActionsAirplaneModeLaunches : 1;
	unsigned totalAppForAllActionsCoarseTimeOfDayLaunches : 1;
	unsigned totalAppForAllActionsCurrentDayOfWeekLaunches : 1;
	unsigned uiFeedbackDelay : 1;
	unsigned inAirplaneMode : 1;
	unsigned isInternalBuild : 1;
} SCD_Struct_AW66;

