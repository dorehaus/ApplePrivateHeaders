/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INControlHomeIntentExport.h>

@class INHomeUserTask, NSArray, INDateComponentsRange, NSString;

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>

@property (copy,readonly) INHomeUserTask * userTask; 
@property (copy,readonly) NSArray * filters; 
@property (copy,readonly) INDateComponentsRange * time; 
@property (copy,readonly) NSArray * contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(NSArray *)contents;
-(id)_metadata;
-(INDateComponentsRange *)time;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setContents:(NSArray *)arg1 ;
-(char)_hasTitle;
-(NSArray *)filters;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setTime:(INDateComponentsRange *)arg1 ;
-(id)initWithContents:(id)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INHomeUserTask *)userTask;
-(void)setUserTask:(INHomeUserTask *)arg1 ;
-(id)initWithUserTask:(id)arg1 filters:(id)arg2 time:(id)arg3 ;
-(id)initWithUserTask:(id)arg1 filters:(id)arg2 ;
-(id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
@end
