/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/Versions/A/CoreMaterial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTRecipeMaterialSettingsProviding.h>

@protocol MTTintingMTMaterialFiltering;
@class NSString, NSDictionary;

@interface MTRecipeMaterialSettings : NSObject <MTRecipeMaterialSettingsProviding> {

	long long _materialSettingsVersion;
	NSString* _recipeName;
	NSDictionary* _styles;
	id<MTTinting><MTMaterialFiltering> _baseMaterialSettings;
	id<MTTinting><MTMaterialFiltering> _baseOverlaySettings;
	id<MTTinting><MTMaterialFiltering> _primaryOverlaySettings;
	id<MTTinting><MTMaterialFiltering> _secondaryOverlaySettings;
	id<MTTinting><MTMaterialFiltering> _auxiliaryOverlaySettings;

}

@property (nonatomic,retain) NSDictionary * styles;                                                      //@synthesize styles=_styles - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseMaterialSettings;                  //@synthesize baseMaterialSettings=_baseMaterialSettings - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseOverlaySettings;                   //@synthesize baseOverlaySettings=_baseOverlaySettings - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> primaryOverlaySettings;                //@synthesize primaryOverlaySettings=_primaryOverlaySettings - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> secondaryOverlaySettings;              //@synthesize secondaryOverlaySettings=_secondaryOverlaySettings - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings;              //@synthesize auxiliaryOverlaySettings=_auxiliaryOverlaySettings - In the implementation block
@property (nonatomic,readonly) long long materialSettingsVersion;                                        //@synthesize materialSettingsVersion=_materialSettingsVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipeName;                                               //@synthesize recipeName=_recipeName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleSetNameForStyleSetFromRecipeWithName:(id)arg1 ;
-(NSString *)description;
-(void)setStyles:(NSDictionary *)arg1 ;
-(NSDictionary *)styles;
-(NSString *)recipeName;
-(id)_platformColorsStyleSetName;
-(id<MTTinting><MTMaterialFiltering>)baseMaterialSettings;
-(id<MTTinting><MTMaterialFiltering>)baseOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)primaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)secondaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)auxiliaryOverlaySettings;
-(id)settingsForConfiguration:(id)arg1 ;
-(id)_visualStyleSetDescription;
-(long long)materialSettingsVersion;
-(id)styleNameForCategory:(id)arg1 ;
-(id)initWithRecipeName:(id)arg1 andDescription:(id)arg2 descendantDescriptions:(id)arg3 bundle:(id)arg4 ;
-(id)_newVisualStyleSet;
@end

