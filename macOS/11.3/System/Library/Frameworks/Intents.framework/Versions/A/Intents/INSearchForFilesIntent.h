/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForFilesIntent.h>
@class NSString, NSArray;


@protocol INSearchForFilesIntent <NSObject,JSExport>
@property (copy) NSString * entityType; 
@property (copy) NSString * entityName; 
@property (copy) NSString * appId; 
@property (copy) NSArray * properties; 
@property (copy) NSString * scope; 
@property (copy) NSString * scopeEntityName; 
@required
-(id)init;
-(NSString *)entityName;
-(void)setEntityName:(id)arg1;
-(NSString *)scope;
-(NSArray *)properties;
-(void)setProperties:(id)arg1;
-(void)setScope:(id)arg1;
-(void)setAppId:(id)arg1;
-(NSString *)appId;
-(NSString *)entityType;
-(void)setEntityType:(id)arg1;
-(NSString *)scopeEntityName;
-(void)setScopeEntityName:(id)arg1;

@end


@class NSString, NSArray;

@interface INSearchForFilesIntent : INIntent <INSearchForFilesIntent>

@property (copy,readonly) NSString * entityType; 
@property (copy,readonly) NSString * entityName; 
@property (copy,readonly) NSString * appId; 
@property (copy,readonly) NSArray * properties; 
@property (copy,readonly) NSString * scope; 
@property (copy,readonly) NSString * scopeEntityName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(NSString *)entityName;
-(void)setEntityName:(NSString *)arg1 ;
-(NSString *)scope;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setScope:(NSString *)arg1 ;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)appId;
-(void)setVerb:(id)arg1 ;
-(NSString *)entityType;
-(void)setEntityType:(NSString *)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSString *)scopeEntityName;
-(void)setScopeEntityName:(NSString *)arg1 ;
-(id)initWithEntityType:(id)arg1 entityName:(id)arg2 appId:(id)arg3 properties:(id)arg4 scope:(id)arg5 scopeEntityName:(id)arg6 ;
@end
