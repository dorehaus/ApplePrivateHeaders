/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSDInfo.h>

@class TSDInfoGeometry, NSString;

@interface TSWPTextParentInfo : NSObject <TSDInfo>

@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) char floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) char anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) char inlineWithText; 
@property (getter=isInlineWithTextWithWrap,nonatomic,readonly) char inlineWithTextWithWrap; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) char attachedToBodyText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char matchesObjectPlaceholderGeometry; 
-(char)isSelectable;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(Class)layoutClass;
-(void)setParentInfo:(NSObject*<TSDInfo>)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(Class)repClass;
-(char)isThemeContent;
-(NSObject*<TSDInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(char)isFloatingAboveText;
-(char)isAnchoredToText;
-(char)isInlineWithText;
-(char)isAttachedToBodyText;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(char)isInlineWithTextWithWrap;
@end
