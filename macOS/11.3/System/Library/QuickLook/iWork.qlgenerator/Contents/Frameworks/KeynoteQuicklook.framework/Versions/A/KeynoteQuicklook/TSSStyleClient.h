/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol TSSStyleClient <TSKModel>
@property (nonatomic,readonly) NSSet * referencedStyles; 
@optional
-(void)afterReplacingReferencedStylesSetStylesheet:(id)arg1;

@required
-(NSSet *)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1;

@end

