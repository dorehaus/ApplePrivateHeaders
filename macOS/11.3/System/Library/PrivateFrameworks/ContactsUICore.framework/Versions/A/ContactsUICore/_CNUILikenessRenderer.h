/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNUILikenessRendering.h>

@protocol CNUIPRLikenessResolver, CNSchedulerProvider;
@class NSString;

@interface _CNUILikenessRenderer : NSObject <CNUILikenessRendering> {

	id<CNUIPRLikenessResolver> _likenessResolver;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) id<CNUIPRLikenessResolver> likenessResolver;              //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)renderedLikenessesForProviders:(id)arg1 scope:(id)arg2 ;
+(CGImageRef)cgImageForLikenessProvider:(id)arg1 pointSize:(CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 alwaysUsePointSize:(char)arg5 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)likenessProvidersForContacts:(id)arg1 likenessResolverOptions:(id)arg2 workScheduler:(id)arg3 ;
-(id)renderedLikenessesForLikenessProviders:(id)arg1 scope:(id)arg2 likenessFingerprint:(id)arg3 ;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(id)renderedLoadingPlaceholderForContactCount:(unsigned long long)arg1 provider:(id)arg2 scope:(id)arg3 ;
-(id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3 ;
-(id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2 ;
-(id)renderedBasicMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4 ;
-(id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2 ;
-(id)initWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2 ;
@end

