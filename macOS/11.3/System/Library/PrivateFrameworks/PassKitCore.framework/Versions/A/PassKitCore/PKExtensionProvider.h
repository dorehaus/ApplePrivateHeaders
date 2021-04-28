/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSDictionary, NSMutableArray, NSObject;

@interface PKExtensionProvider : NSObject {

	char _isBeginningMatching;
	NSString* _extensionPoint;
	NSDictionary* _passKitExtensions;
	id _matchingContext;
	NSMutableArray* _beginMatchingCompletions;
	NSObject*<OS_dispatch_source> _extensionMatchTimer;
	NSObject*<OS_dispatch_queue> _extensionQueue;

}

@property (nonatomic,copy) NSString * extensionPoint;                                        //@synthesize extensionPoint=_extensionPoint - In the implementation block
@property (nonatomic,retain) NSDictionary * passKitExtensions;                               //@synthesize passKitExtensions=_passKitExtensions - In the implementation block
@property (nonatomic,retain) id matchingContext;                                             //@synthesize matchingContext=_matchingContext - In the implementation block
@property (assign,nonatomic) char isBeginningMatching;                                       //@synthesize isBeginningMatching=_isBeginningMatching - In the implementation block
@property (nonatomic,retain) NSMutableArray * beginMatchingCompletions;                      //@synthesize beginMatchingCompletions=_beginMatchingCompletions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> extensionMatchTimer;              //@synthesize extensionMatchTimer=_extensionMatchTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> extensionQueue;                    //@synthesize extensionQueue=_extensionQueue - In the implementation block
+(id)providerForExtensionPoint:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)extensionPoint;
-(id)matchingContext;
-(void)setMatchingContext:(id)arg1 ;
-(id)initWithExtensionPoint:(id)arg1 ;
-(void)_endMatchingExtensions;
-(void)_beginMatchingExtensionsWithCompletion:(/*^block*/id)arg1 ;
-(void)extensionsWithContainingApplicationIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_extensionsForContainingApplicationIdentifiers:(id)arg1 ;
-(void)_invokeAndClearBeginMatchingCompletionsWithError:(id)arg1 ;
-(id)_extensionMatchingEntitlementAttribute;
-(void)_finishedMatchingExtensions:(id)arg1 withError:(id)arg2 ;
-(void)extensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)extensionsWithContainingAppBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginExtensionRequestWithExtension:(id)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setExtensionPoint:(NSString *)arg1 ;
-(NSDictionary *)passKitExtensions;
-(void)setPassKitExtensions:(NSDictionary *)arg1 ;
-(char)isBeginningMatching;
-(void)setIsBeginningMatching:(char)arg1 ;
-(NSMutableArray *)beginMatchingCompletions;
-(void)setBeginMatchingCompletions:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)extensionMatchTimer;
-(void)setExtensionMatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)extensionQueue;
-(void)setExtensionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

