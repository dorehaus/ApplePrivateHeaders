/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityInterface/SecurityInterface-Structs.h>
@interface SFKeychainStorage : NSObject
+(id)displayNameForKeychainAtPath:(id)arg1 keychainRef:(SecKeychainRef)arg2 ;
+(char)isCloudKeychainSyncEnabled;
+(id)displayNameForKeychainRef:(SecKeychainRef)arg1 ;
+(id)remoteStoreNameForKeychainRef:(SecKeychainRef)arg1 ;
+(id)displayNameForKeychainAtPath:(id)arg1 ;
@end

