/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSText/TSWPUIGraphicalAttachment.h>

@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment
-(CGSize)size;
-(id)description;
-(double)baselineOffset;
-(id)rendererForAttachment;
-(char)wantsSelectionAtPoint:(CGPoint)arg1 ;
-(void)saveToArchive:(FormulaEqualsTokenAttachmentArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const FormulaEqualsTokenAttachmentArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
@end

