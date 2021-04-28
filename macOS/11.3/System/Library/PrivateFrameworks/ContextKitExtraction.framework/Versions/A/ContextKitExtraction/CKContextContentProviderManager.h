/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContextKitExtraction.framework/Versions/A/ContextKitExtraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface CKContextContentProviderManager : NSObject {

	NSHashTable* _providers;

}
+(id)sharedManager;
+(char)isSpringBoard;
-(id)init;
-(void)removeProvider:(id)arg1 ;
-(void)addProvider:(id)arg1 ;
-(void)prepareDonationWithNonce:(unsigned long long)arg1 andReply:(/*^block*/id)arg2 ;
-(char)_isDonationAllowedWithControlCode:(unsigned char)arg1 ;
@end

