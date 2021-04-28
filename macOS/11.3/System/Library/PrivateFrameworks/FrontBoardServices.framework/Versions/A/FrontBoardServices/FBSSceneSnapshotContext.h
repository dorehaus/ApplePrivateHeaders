/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, FBSSceneSettings, NSSet, BSSettings;

@interface FBSSceneSnapshotContext : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSString* _sceneID;
	NSString* _name;
	FBSSceneSettings* _settings;
	CGRect _frame;
	double _scale;
	double _expirationInterval;
	NSSet* _layersToExclude;
	BSSettings* _clientExtendedData;

}

@property (nonatomic,copy) FBSSceneSettings * settings;                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneID;                  //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect frame;                               //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSSet * layersToExclude;                      //@synthesize layersToExclude=_layersToExclude - In the implementation block
@property (assign,nonatomic) double expirationInterval;                  //@synthesize expirationInterval=_expirationInterval - In the implementation block
@property (nonatomic,copy) BSSettings * clientExtendedData;              //@synthesize clientExtendedData=_clientExtendedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithSceneID:(id)arg1 settings:(id)arg2 ;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(double)scale;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setScale:(double)arg1 ;
-(FBSSceneSettings *)settings;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)sceneID;
-(BSSettings *)clientExtendedData;
-(void)setClientExtendedData:(BSSettings *)arg1 ;
-(id)initWithSceneID:(id)arg1 settings:(id)arg2 ;
-(void)setExpirationInterval:(double)arg1 ;
-(NSSet *)layersToExclude;
-(void)setLayersToExclude:(NSSet *)arg1 ;
-(double)expirationInterval;
@end

