/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSTables/TSSPreset.h>
#import <TSTables/TSSStyleClient.h>
#import <TSTables/TSKModel.h>

@class NSString, NSSet, TSTTableStyleNetwork;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel> {

	TSTTableStyleNetwork* _styleNetwork;
	char _tableHasStrongOwnership;
	unsigned long long _tempUpgradePresetID;

}

@property (assign,nonatomic) unsigned long long tempUpgradePresetID;              //@synthesize tempUpgradePresetID=_tempUpgradePresetID - In the implementation block
@property (nonatomic,readonly) unsigned long long presetID; 
@property (nonatomic,copy) TSTTableStyleNetwork * styleNetwork; 
@property (assign,nonatomic) char tableHasStrongOwnership;                        //@synthesize tableHasStrongOwnership=_tableHasStrongOwnership - In the implementation block
@property (nonatomic,readonly) NSString * presetKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * referencedStyles; 
+(char)needsObjectUUID;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithContext:(id)arg1 ;
-(id)swatchImage;
-(unsigned long long)presetID;
-(NSSet *)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)presetKind;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(TSTTableStyleNetwork *)styleNetwork;
-(id)p_documentRoot;
-(void)setStyleNetwork:(TSTTableStyleNetwork *)arg1 ;
-(void)saveToArchive:(TableStylePresetArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithStyleNetwork:(id)arg1 ;
-(char)tableHasStrongOwnership;
-(void)setTableHasStrongOwnership:(char)arg1 ;
-(unsigned long long)tempUpgradePresetID;
-(void)setTempUpgradePresetID:(unsigned long long)arg1 ;
@end

