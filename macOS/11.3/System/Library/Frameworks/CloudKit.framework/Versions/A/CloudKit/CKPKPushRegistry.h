/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPushRegistryDelegate.h>

@class NSHashTable, PKPushRegistry, NSString;

@interface CKPKPushRegistry : NSObject <PKPushRegistryDelegate> {

	NSHashTable* _delegates;
	PKPushRegistry* _pushRegistry;

}

@property (nonatomic,retain) NSHashTable * delegates;                    //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) PKPushRegistry * pushRegistry;              //@synthesize pushRegistry=_pushRegistry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPushRegistry;
-(id)_init;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3 ;
-(void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(PKPushRegistry *)pushRegistry;
-(void)setPushRegistry:(PKPushRegistry *)arg1 ;
@end

