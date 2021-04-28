/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TBAccessPoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate, TBNetworkMO;

@interface TBAccessPointMO : NSManagedObject <TBAccessPoint, NSSecureCoding, NSCoding>

@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) double latitude; 
@property (nonatomic,readonly) double longitude; 
@property (getter=isEdge,nonatomic,readonly) char edge; 
@property (getter=isTCPGood,nonatomic,readonly) char TCPGood; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TBScore> popularityScore; 
@property (nonatomic,readonly) id<TBScore> qualityScore; 
@property (nonatomic,copy) NSString * bssid; 
@property (nonatomic,copy) NSDate * created; 
@property (assign,nonatomic) char edge; 
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (assign,nonatomic) int popularityScoreValue; 
@property (assign,nonatomic) int qualityScoreValue; 
@property (assign,nonatomic) char tcpGood; 
@property (nonatomic,retain) TBNetworkMO * network; 
+(char)supportsSecureCoding;
+(id)entityName;
+(id)fetchRequest;
+(id)generateNewAccessPointObjectFromMOC:(id)arg1 ;
+(void)removeAllAccessPointsInMOC:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)latitude;
-(double)longitude;
-(char)isTCPGood;
-(id<TBScore>)qualityScore;
-(char)isEdge;
-(NSString *)BSSID;
-(id<TBScore>)popularityScore;
@end
