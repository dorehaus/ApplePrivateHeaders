/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OFKeychainInternetAccount : NSObject {

	NSMutableDictionary* _keychainData;
	NSMutableDictionary* _keychainQuery;

}

@property (retain) NSMutableDictionary * keychainData;               //@synthesize keychainData=_keychainData - In the implementation block
@property (retain) NSMutableDictionary * keychainQuery;              //@synthesize keychainQuery=_keychainQuery - In the implementation block
+(id)accountWithURL:(id)arg1 andAccount:(id)arg2 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)isValid;
-(id)port;
-(id)password;
-(id)path;
-(id)server;
-(void)setPassword:(id)arg1 ;
-(id)account;
-(NSMutableDictionary *)keychainData;
-(id)secItemFormatToDictionary:(id)arg1 ;
-(void)writeToKeychain;
-(id)dictionaryToSecItemFormat:(id)arg1 ;
-(void)setKeychainQuery:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keychainQuery;
-(void)setKeychainData:(NSMutableDictionary *)arg1 ;
-(id)initWithURL:(id)arg1 andAccount:(id)arg2 ;
-(char)deleteFromKeychain;
@end

