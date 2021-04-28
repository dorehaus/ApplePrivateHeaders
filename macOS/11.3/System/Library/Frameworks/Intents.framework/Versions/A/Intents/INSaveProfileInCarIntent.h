/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSaveProfileInCarIntentExport.h>

@class NSNumber, NSString;

@interface INSaveProfileInCarIntent : INIntent <INSaveProfileInCarIntentExport>

@property (copy,readonly) NSString * profileLabel; 
@property (copy,readonly) NSNumber * profileNumber; 
@property (copy,readonly) NSString * profileName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setProfileName:(NSString *)arg1 ;
-(NSString *)profileName;
-(void)setVerb:(id)arg1 ;
-(NSNumber *)profileNumber;
-(void)setProfileNumber:(NSNumber *)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2 ;
-(NSString *)profileLabel;
-(id)initWithProfileNumber:(id)arg1 profileName:(id)arg2 ;
@end

