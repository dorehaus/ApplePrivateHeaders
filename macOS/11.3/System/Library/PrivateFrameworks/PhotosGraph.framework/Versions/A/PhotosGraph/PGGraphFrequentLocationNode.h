/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PLFrequentLocationProtocol.h>

@class NSDateInterval, NSArray, NSString, NSDate, PGGraphAddressNode, NSSet;

@interface PGGraphFrequentLocationNode : PGGraphOptimizedNode <PLFrequentLocationProtocol> {

	NSDateInterval* _localDateInterval;

}

@property (readonly) CLLocationCoordinate2D coordinate; 
@property (readonly) NSDateInterval * dateInterval; 
@property (readonly) NSArray * sortedMoments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDateInterval * localDateInterval;                  //@synthesize localDateInterval=_localDateInterval - In the implementation block
@property (readonly) PGGraphAddressNode * addressNode; 
@property (readonly) NSSet * momentNodes; 
@property (readonly) unsigned long long numberOfMomentNodes; 
+(id)filter;
-(NSString *)description;
-(id)init;
-(id)name;
-(unsigned short)domain;
-(id)label;
-(CLLocationCoordinate2D)coordinate;
-(NSDateInterval *)dateInterval;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSArray *)sortedMoments;
-(char)hasProperties:(id)arg1 ;
-(NSDateInterval *)localDateInterval;
-(NSSet *)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(PGGraphAddressNode *)addressNode;
-(unsigned long long)numberOfMomentNodes;
@end

