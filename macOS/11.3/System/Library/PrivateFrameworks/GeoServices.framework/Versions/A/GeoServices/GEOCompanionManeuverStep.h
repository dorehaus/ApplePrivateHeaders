/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableArray;


@protocol GEOCompanionManeuverStep <NSObject>
@property (assign,nonatomic) char hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) char hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) GEOJunctionElement* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> maneuverArtworkOverride; 
@required
-(int)transportType;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1;
-(void)setHasManeuverType:(char)arg1;
-(char)hasManeuverType;
-(int)junctionType;
-(GEOJunctionElement*)junctionElements;
-(unsigned long long)junctionElementsCount;
-(void)setJunctionType:(int)arg1;
-(void)addManeuverName:(id)arg1;
-(void)addSignpost:(id)arg1;
-(unsigned long long)maneuverNamesCount;
-(void)clearManeuverNames;
-(id)maneuverNameAtIndex:(unsigned long long)arg1;
-(unsigned long long)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned long long)arg1;
-(void)setHasJunctionType:(char)arg1;
-(char)hasJunctionType;
-(NSMutableArray *)maneuverNames;
-(void)setManeuverNames:(id)arg1;
-(NSMutableArray *)signposts;
-(void)setSignposts:(id)arg1;
-(id<GEOTransitArtworkDataSource>)maneuverArtworkOverride;

@end

