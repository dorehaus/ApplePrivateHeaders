/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSSet, NSData;

@interface INAppInfo : NSObject <NSSecureCoding> {

	char _supportsMultiwindow;
	NSString* _applicationIdentifier;
	NSArray* _counterpartIdentifiers;
	NSString* _developmentRegion;
	NSSet* _supportedActions;
	NSSet* _supportedIntents;
	NSSet* _supportedIntentsByApp;
	NSSet* _supportedActionsByExtensions;
	NSSet* _actionsRestrictedWhileLocked;
	NSSet* _actionsRestrictedWhileProtectedDataUnavailable;
	NSSet* _supportedMediaCategories;
	NSSet* _definedIntents;
	NSString* _companionApplicationIdentifier;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * companionApplicationIdentifier;                           //@synthesize companionApplicationIdentifier=_companionApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * counterpartIdentifiers;                                    //@synthesize counterpartIdentifiers=_counterpartIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * developmentRegion;                                        //@synthesize developmentRegion=_developmentRegion - In the implementation block
@property (nonatomic,copy) NSSet * supportedActions;                                            //@synthesize supportedActions=_supportedActions - In the implementation block
@property (nonatomic,copy) NSSet * supportedIntents;                                            //@synthesize supportedIntents=_supportedIntents - In the implementation block
@property (nonatomic,copy) NSSet * supportedIntentsByApp;                                       //@synthesize supportedIntentsByApp=_supportedIntentsByApp - In the implementation block
@property (nonatomic,copy) NSSet * supportedActionsByExtensions;                                //@synthesize supportedActionsByExtensions=_supportedActionsByExtensions - In the implementation block
@property (nonatomic,copy) NSSet * actionsRestrictedWhileLocked;                                //@synthesize actionsRestrictedWhileLocked=_actionsRestrictedWhileLocked - In the implementation block
@property (nonatomic,copy) NSSet * actionsRestrictedWhileProtectedDataUnavailable;              //@synthesize actionsRestrictedWhileProtectedDataUnavailable=_actionsRestrictedWhileProtectedDataUnavailable - In the implementation block
@property (nonatomic,copy) NSSet * supportedMediaCategories;                                    //@synthesize supportedMediaCategories=_supportedMediaCategories - In the implementation block
@property (nonatomic,copy) NSSet * definedIntents;                                              //@synthesize definedIntents=_definedIntents - In the implementation block
@property (assign,nonatomic) char supportsMultiwindow;                                          //@synthesize supportsMultiwindow=_supportsMultiwindow - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
+(char)supportsSecureCoding;
+(id)appInfoWithAppProxy:(id)arg1 ;
+(id)appInfoWithApplicationRecord:(id)arg1 ;
+(id)appInfoWithData:(id)arg1 error:(id*)arg2 ;
+(id)appInfoWithIntent:(id)arg1 ;
+(id)_appInfoWithApplicationRecord:(id)arg1 applicationExtensionRecords:(id)arg2 userActivityTypes:(id)arg3 ;
-(id)init;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)supportedIntents;
-(NSString *)applicationIdentifier;
-(NSString *)companionApplicationIdentifier;
-(NSArray *)counterpartIdentifiers;
-(char)supportsMultiwindow;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setCounterpartIdentifiers:(NSArray *)arg1 ;
-(NSString *)developmentRegion;
-(void)setDevelopmentRegion:(NSString *)arg1 ;
-(void)setSupportsMultiwindow:(char)arg1 ;
-(NSSet *)supportedActions;
-(void)setSupportedActions:(NSSet *)arg1 ;
-(void)setSupportedIntents:(NSSet *)arg1 ;
-(NSSet *)supportedIntentsByApp;
-(void)setSupportedIntentsByApp:(NSSet *)arg1 ;
-(NSSet *)supportedActionsByExtensions;
-(void)setSupportedActionsByExtensions:(NSSet *)arg1 ;
-(NSSet *)actionsRestrictedWhileLocked;
-(void)setActionsRestrictedWhileLocked:(NSSet *)arg1 ;
-(NSSet *)actionsRestrictedWhileProtectedDataUnavailable;
-(void)setActionsRestrictedWhileProtectedDataUnavailable:(NSSet *)arg1 ;
-(NSSet *)supportedMediaCategories;
-(void)setSupportedMediaCategories:(NSSet *)arg1 ;
-(NSSet *)definedIntents;
-(void)setDefinedIntents:(NSSet *)arg1 ;
-(void)setCompanionApplicationIdentifier:(NSString *)arg1 ;
@end
