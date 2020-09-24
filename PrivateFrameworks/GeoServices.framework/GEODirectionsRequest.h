/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOMapRegion, GEOLocation, NSMutableArray, GEODirectionsRequestFeedback, NSString, NSData, GEOOriginalRoute, GEOOriginalWaypointRoute, GEORouteAttributes, GEOTFTrafficSnapshot;

@interface GEODirectionsRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOSessionID _sessionID;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	GEOMapRegion* _currentMapRegion;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _deviceHistoricalLocations;
	GEODirectionsRequestFeedback* _feedback;
	GEOLocation* _lastKnownRoadLocation;
	NSString* _loggedAbExperiment;
	NSData* _nonRecommendedRoutesCache;
	NSData* _originalDirectionsResponseID;
	NSData* _originalRouteID;
	NSMutableArray* _originalRouteZilchPoints;
	GEOOriginalRoute* _originalRoute;
	NSMutableArray* _originalRouteEvInfos;
	GEOOriginalWaypointRoute* _originalWaypointRoute;
	double _requestTime;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _serviceTags;
	double _sessionRelativeTimestamp;
	NSData* _sessionState;
	NSMutableArray* _trafficApiResponses;
	NSMutableArray* _trafficSnapshotIds;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	NSMutableArray* _waypointTypeds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _departureTime;
	unsigned _mainTransportTypeMaxRouteCount;
	int _nonRecommendedRoutesOption;
	int _originalRoutePurpose;
	unsigned _sequenceNumber;
	unsigned _timeSinceLastRerouteRequest;
	BOOL _getRouteForZilchPoints;
	BOOL _isFromAPI;
	BOOL _needLatency;
	BOOL _useLiveTrafficAsFallback;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_requestTime : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_departureTime : 1;
		unsigned has_mainTransportTypeMaxRouteCount : 1;
		unsigned has_nonRecommendedRoutesOption : 1;
		unsigned has_originalRoutePurpose : 1;
		unsigned has_sequenceNumber : 1;
		unsigned has_timeSinceLastRerouteRequest : 1;
		unsigned has_getRouteForZilchPoints : 1;
		unsigned has_isFromAPI : 1;
		unsigned has_needLatency : 1;
		unsigned has_useLiveTrafficAsFallback : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_commonOptions : 1;
		unsigned read_currentMapRegion : 1;
		unsigned read_currentUserLocation : 1;
		unsigned read_deviceHistoricalLocations : 1;
		unsigned read_feedback : 1;
		unsigned read_lastKnownRoadLocation : 1;
		unsigned read_loggedAbExperiment : 1;
		unsigned read_nonRecommendedRoutesCache : 1;
		unsigned read_originalDirectionsResponseID : 1;
		unsigned read_originalRouteID : 1;
		unsigned read_originalRouteZilchPoints : 1;
		unsigned read_originalRoute : 1;
		unsigned read_originalRouteEvInfos : 1;
		unsigned read_originalWaypointRoute : 1;
		unsigned read_routeAttributes : 1;
		unsigned read_serviceTags : 1;
		unsigned read_sessionState : 1;
		unsigned read_trafficApiResponses : 1;
		unsigned read_trafficSnapshotIds : 1;
		unsigned read_trafficSnapshot : 1;
		unsigned read_waypointTypeds : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasNeedLatency; 
@property (assign,nonatomic) BOOL needLatency; 
@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) double requestTime; 
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes; 
@property (nonatomic,retain) NSMutableArray * waypointTypeds; 
@property (assign,nonatomic) BOOL hasMainTransportTypeMaxRouteCount; 
@property (assign,nonatomic) unsigned mainTransportTypeMaxRouteCount; 
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation; 
@property (nonatomic,readonly) BOOL hasCurrentMapRegion; 
@property (nonatomic,retain) GEOMapRegion * currentMapRegion; 
@property (nonatomic,readonly) BOOL hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID; 
@property (nonatomic,retain) NSMutableArray * originalRouteZilchPoints; 
@property (nonatomic,readonly) BOOL hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID; 
@property (nonatomic,retain) NSMutableArray * originalRouteEvInfos; 
@property (nonatomic,readonly) BOOL hasOriginalRoute; 
@property (nonatomic,retain) GEOOriginalRoute * originalRoute; 
@property (nonatomic,readonly) BOOL hasOriginalWaypointRoute; 
@property (nonatomic,retain) GEOOriginalWaypointRoute * originalWaypointRoute; 
@property (assign,nonatomic) BOOL hasTimeSinceLastRerouteRequest; 
@property (assign,nonatomic) unsigned timeSinceLastRerouteRequest; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) int departureTime; 
@property (assign,nonatomic) BOOL hasGetRouteForZilchPoints; 
@property (assign,nonatomic) BOOL getRouteForZilchPoints; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (nonatomic,readonly) BOOL hasFeedback; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback; 
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI; 
@property (nonatomic,readonly) BOOL hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions; 
@property (nonatomic,readonly) BOOL hasLoggedAbExperiment; 
@property (nonatomic,retain) NSString * loggedAbExperiment; 
@property (nonatomic,readonly) BOOL hasLastKnownRoadLocation; 
@property (nonatomic,retain) GEOLocation * lastKnownRoadLocation; 
@property (assign,nonatomic) BOOL hasOriginalRoutePurpose; 
@property (assign,nonatomic) int originalRoutePurpose; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations; 
@property (assign,nonatomic) BOOL hasNonRecommendedRoutesOption; 
@property (assign,nonatomic) int nonRecommendedRoutesOption; 
@property (nonatomic,readonly) BOOL hasNonRecommendedRoutesCache; 
@property (nonatomic,retain) NSData * nonRecommendedRoutesCache; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,retain) NSMutableArray * trafficApiResponses; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshotIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)originalRouteEvInfoType;
+(Class)waypointTypedType;
+(Class)originalRouteZilchPointsType;
+(Class)trafficSnapshotIdsType;
+(Class)trafficApiResponsesType;
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(Class)deviceHistoricalLocationType;
-(void)_commonSetup:(id)arg1 ;
-(id)initWithDirectionsRequest:(id)arg1 origin:(id)arg2 destination:(id)arg3 withFeedback:(id)arg4 ;
-(GEOClientCapabilities *)clientCapabilities;
-(Class)responseClass;
-(NSMutableArray *)deviceHistoricalLocations;
-(GEOOriginalWaypointRoute *)originalWaypointRoute;
-(BOOL)isFromAPI;
-(void)clearOriginalRouteZilchPoints;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)addTrafficSnapshotIds:(id)arg1 ;
-(BOOL)hasAbClientMetadata;
-(void)setTrafficSnapshotIds:(NSMutableArray *)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setHasNeedLatency:(BOOL)arg1 ;
-(void)clearDeviceHistoricalLocations;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)clearTrafficSnapshotIds;
-(void)setTrafficApiResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)serviceTags;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(void)setRequestTime:(double)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(GEOCommonOptions *)commonOptions;
-(GEORouteAttributes *)routeAttributes;
-(unsigned long long)originalRouteZilchPointsCount;
-(BOOL)hasOriginalWaypointRoute;
-(void)addServiceTag:(id)arg1 ;
-(void)clearLocations;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(double)sessionRelativeTimestamp;
-(unsigned long long)serviceTagsCount;
-(BOOL)hasOriginalRouteID;
-(BOOL)needLatency;
-(BOOL)hasAdditionalEnabledMarkets;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(int)departureTime;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(BOOL)hasNeedLatency;
-(NSMutableArray *)trafficSnapshotIds;
-(NSMutableArray *)originalRouteZilchPoints;
-(BOOL)hasLastKnownRoadLocation;
-(id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned)requestTypeCode;
-(BOOL)useLiveTrafficAsFallback;
-(void)clearServiceTags;
-(double)requestTime;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(NSMutableArray *)trafficApiResponses;
-(BOOL)hasClientCapabilities;
-(void)setOriginalWaypointRoute:(GEOOriginalWaypointRoute *)arg1 ;
-(void)setOriginalRouteZilchPoints:(NSMutableArray *)arg1 ;
-(void)clearTrafficApiResponses;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
-(unsigned long long)deviceHistoricalLocationsCount;
-(unsigned long long)trafficApiResponsesCount;
-(GEODirectionsRequestFeedback *)feedback;
-(void)addTrafficApiResponses:(id)arg1 ;
-(BOOL)hasRequestTime;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(BOOL)hasFeedback;
-(BOOL)hasSessionID;
-(BOOL)hasSessionState;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(unsigned long long)trafficSnapshotIdsCount;
-(void)setNeedLatency:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCurrentMapRegion:(GEOMapRegion *)arg1 ;
-(void)setHasNonRecommendedRoutesOption:(BOOL)arg1 ;
-(BOOL)hasDepartureTime;
-(void)setNonRecommendedRoutesOption:(int)arg1 ;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(BOOL)hasCommonOptions;
-(BOOL)hasLoggedAbExperiment;
-(void)writeTo:(id)arg1 ;
-(id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2 ;
-(BOOL)hasIsFromAPI;
-(id)originalRouteZilchPointsAtIndex:(unsigned long long)arg1 ;
-(unsigned)sequenceNumber;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(int)StringAsOriginalRoutePurpose:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)sessionState;
-(unsigned long long)waypointTypedsCount;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(id)nonRecommendedRoutesOptionAsString:(int)arg1 ;
-(int)nonRecommendedRoutesOption;
-(void)clearSessionId;
-(GEOSessionID)sessionID;
-(id)waypointTypedAtIndex:(unsigned long long)arg1 ;
-(id)trafficApiResponsesAtIndex:(unsigned long long)arg1 ;
-(void)setNonRecommendedRoutesCache:(NSData *)arg1 ;
-(id)jsonRepresentation;
-(void)setOriginalRoutePurpose:(int)arg1 ;
-(BOOL)getRouteForZilchPoints;
-(BOOL)hasGetRouteForZilchPoints;
-(void)setMainTransportTypeMaxRouteCount:(unsigned)arg1 ;
-(GEOLocation *)currentUserLocation;
-(BOOL)hasOriginalRoute;
-(void)clearSensitiveFields;
-(void)setSessionState:(NSData *)arg1 ;
-(void)clearWaypointTypeds;
-(BOOL)hasCurrentMapRegion;
-(void)addWaypointTyped:(id)arg1 ;
-(void)addOriginalRouteEvInfo:(id)arg1 ;
-(GEOLocation *)lastKnownRoadLocation;
-(BOOL)hasNonRecommendedRoutesOption;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(id)originalRoutePurposeAsString:(int)arg1 ;
-(GEOMapRegion *)currentMapRegion;
-(NSMutableArray *)waypointTypeds;
-(id)initWithFeedback:(id)arg1 sessionID:(GEOSessionID)arg2 ;
-(void)setTimeSinceLastRerouteRequest:(unsigned)arg1 ;
-(int)StringAsNonRecommendedRoutesOption:(id)arg1 ;
-(void)setHasOriginalRoutePurpose:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setDepartureTime:(int)arg1 ;
-(void)addOriginalRouteZilchPoints:(id)arg1 ;
-(id)init;
-(unsigned long long)originalRouteEvInfosCount;
-(BOOL)hasNonRecommendedRoutesCache;
-(BOOL)hasSessionRelativeTimestamp;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(void)setHasGetRouteForZilchPoints:(BOOL)arg1 ;
-(unsigned)timeSinceLastRerouteRequest;
-(NSData *)nonRecommendedRoutesCache;
-(void)setLoggedAbExperiment:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)initDefaultFeedbackInfo;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasOriginalRoutePurpose;
-(BOOL)hasRouteAttributes;
-(GEOOriginalRoute *)originalRoute;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)originalRouteEvInfos;
-(void)setWaypointTypeds:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)originalRouteEvInfoAtIndex:(unsigned long long)arg1 ;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasTimeSinceLastRerouteRequest;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)mainTransportTypeMaxRouteCount;
-(id)initWithFeedback:(id)arg1 ;
-(BOOL)hasMainTransportTypeMaxRouteCount;
-(id)initWithData:(id)arg1 ;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
-(void)setOriginalRouteEvInfos:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(void)setHasMainTransportTypeMaxRouteCount:(BOOL)arg1 ;
-(int)originalRoutePurpose;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(NSData *)originalRouteID;
-(NSData *)originalDirectionsResponseID;
-(BOOL)hasOriginalDirectionsResponseID;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(void)setHasTimeSinceLastRerouteRequest:(BOOL)arg1 ;
-(BOOL)hasCurrentUserLocation;
-(void)setLastKnownRoadLocation:(GEOLocation *)arg1 ;
-(void)setGetRouteForZilchPoints:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setOriginalRoute:(GEOOriginalRoute *)arg1 ;
-(NSString *)loggedAbExperiment;
-(id)description;
-(void)clearOriginalRouteEvInfos;
-(id)dictionaryRepresentation;
-(BOOL)hasUseLiveTrafficAsFallback;
@end
