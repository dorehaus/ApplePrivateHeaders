/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/TBTile.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface TBFetchedTile : NSObject <TBTile, NSCopying> {

	unsigned long long _key;
	NSString* _etag;
	NSDate* _created;

}

@property (assign,nonatomic) unsigned long long key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSDate * created;                                 //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) unsigned long long networkCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchedTileWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)key;
-(void)setKey:(unsigned long long)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(NSDate *)created;
-(void)setCreated:(NSDate *)arg1 ;
-(id)initWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3 ;
-(char)_isEqualToFetchedTile:(id)arg1 ;
@end

