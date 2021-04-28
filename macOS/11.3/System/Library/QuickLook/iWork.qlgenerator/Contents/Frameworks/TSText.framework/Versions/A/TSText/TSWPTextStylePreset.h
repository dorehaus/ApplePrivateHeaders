/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSText/TSSPreset.h>
#import <TSText/TSKModel.h>

@class NSString, TSWPParagraphStyle, TSWPListStyle;

@interface TSWPTextStylePreset : TSPObject <TSSPreset, TSKModel> {

	NSString* _presetIdentifier;
	TSWPParagraphStyle* _paragraphStyle;
	TSWPListStyle* _listStyle;

}

@property (nonatomic,copy) NSString * presetIdentifier;                        //@synthesize presetIdentifier=_presetIdentifier - In the implementation block
@property (nonatomic,retain) TSWPParagraphStyle * paragraphStyle;              //@synthesize paragraphStyle=_paragraphStyle - In the implementation block
@property (nonatomic,retain) TSWPListStyle * listStyle;                        //@synthesize listStyle=_listStyle - In the implementation block
@property (nonatomic,readonly) NSString * presetKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParagraphStyle:(TSWPParagraphStyle *)arg1 ;
-(TSWPParagraphStyle *)paragraphStyle;
-(TSWPListStyle *)listStyle;
-(void)setListStyle:(TSWPListStyle *)arg1 ;
-(void)setPresetIdentifier:(NSString *)arg1 ;
-(NSString *)presetIdentifier;
-(id)referencedStyles;
-(NSString *)presetKind;
-(void)saveToArchive:(TextStylePresetArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const TextStylePresetArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 presetIdentifier:(id)arg2 paragraphStyle:(id)arg3 listStyle:(id)arg4 ;
@end

