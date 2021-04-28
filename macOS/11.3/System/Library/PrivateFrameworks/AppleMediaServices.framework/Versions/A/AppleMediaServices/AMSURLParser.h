/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class NSString;

@interface AMSURLParser : NSObject <AMSBagConsumer_Project, AMSBagConsumer> {

	id<AMSBagProtocol> _bag;

}

@property (retain) id<AMSBagProtocol> bag;                          //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)bagContract;
-(id)initWithBagContract:(id)arg1 ;
-(id)isCommerceUIURL:(id)arg1 ;
-(id)_commerceUIArrayForKey:(id)arg1 ;
-(char)_matchURL:(id)arg1 toPatterns:(id)arg2 ;
-(id)typeForURL:(id)arg1 ;
-(id)_defaultWebAllowedForURL:(id)arg1 ;
-(id)_dynamicUIAllowedForURL:(id)arg1 ;
-(id)_legacyWebAllowedForURL:(id)arg1 ;
-(void)_waitForPromises:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)typeForCommerceUIURL:(id)arg1 ;
@end

