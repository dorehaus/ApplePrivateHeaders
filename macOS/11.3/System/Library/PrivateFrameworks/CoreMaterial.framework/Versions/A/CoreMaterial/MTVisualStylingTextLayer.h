/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/Versions/A/CoreMaterial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CATextLayer.h>
#import <libobjc.A.dylib/MTVisualStylingCapable.h>

@class MTVisualStylingLayerHelper, NSString;

@interface MTVisualStylingTextLayer : CATextLayer <MTVisualStylingCapable> {

	MTVisualStylingLayerHelper* _helper;

}

@property (nonatomic,retain) MTVisualStylingLayerHelper * helper;              //@synthesize helper=_helper - In the implementation block
@property (nonatomic,copy) NSString * recipe; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSString * visualStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_attributeKeys;
+(id)_unserializedAttributeKeys;
+(id)CA_attributes;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(MTVisualStylingLayerHelper *)helper;
-(void)setHelper:(MTVisualStylingLayerHelper *)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
@end

