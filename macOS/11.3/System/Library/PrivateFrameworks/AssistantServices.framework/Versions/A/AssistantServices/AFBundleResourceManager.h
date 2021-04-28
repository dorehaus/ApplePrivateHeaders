/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class NSMutableDictionary;

@interface AFBundleResourceManager : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _resourceURLProvidersByIdentifier;

}
+(id)sharedManager;
-(id)init;
-(id)resourceForSoundID:(long long)arg1 ;
-(id)URLForResource:(id)arg1 ;
-(id)URLForSoundID:(long long)arg1 ;
@end
