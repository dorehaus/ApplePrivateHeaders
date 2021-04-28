/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSWPAttachment.h>

@class NSString;

@interface TSWPTextualAttachment : TSWPAttachment

@property (nonatomic,readonly) NSString * stringEquivalent; 
+(Class)classForUnarchiver:(id)arg1 ;
-(NSString *)stringEquivalent;
-(char)shouldArchiveStringEquivalent;
-(id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3 ;
-(void)setStringEquivalent:(NSString *)arg1 ;
-(id)stringEquivalentWithLayoutParent:(id)arg1 ;
-(void)saveToArchive:(TextualAttachmentArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const TextualAttachmentArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)stringEquivalentWithNumberProvider:(id)arg1 ;
@end

