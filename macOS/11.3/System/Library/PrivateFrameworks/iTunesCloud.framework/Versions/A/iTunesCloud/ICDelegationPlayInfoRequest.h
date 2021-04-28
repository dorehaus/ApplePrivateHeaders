/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSData, NSMutableDictionary;

@interface ICDelegationPlayInfoRequest : NSObject <NSCopying> {

	NSString* _playerDeviceGUID;
	NSArray* _tokenRequests;
	NSData* _playerAnisetteMID;
	NSString* _playerUserAgent;

}

@property (nonatomic,copy) NSData * playerAnisetteMID;                                             //@synthesize playerAnisetteMID=_playerAnisetteMID - In the implementation block
@property (nonatomic,copy) NSString * playerDeviceGUID;                                            //@synthesize playerDeviceGUID=_playerDeviceGUID - In the implementation block
@property (nonatomic,copy) NSString * playerUserAgent;                                             //@synthesize playerUserAgent=_playerUserAgent - In the implementation block
@property (nonatomic,copy) NSArray * tokenRequests;                                                //@synthesize tokenRequests=_tokenRequests - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * propertyListRepresentation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)propertyListRepresentation;
-(NSData *)playerAnisetteMID;
-(void)setPlayerAnisetteMID:(NSData *)arg1 ;
-(NSString *)playerDeviceGUID;
-(void)setPlayerDeviceGUID:(NSString *)arg1 ;
-(NSString *)playerUserAgent;
-(void)setPlayerUserAgent:(NSString *)arg1 ;
-(NSArray *)tokenRequests;
-(void)setTokenRequests:(NSArray *)arg1 ;
@end
