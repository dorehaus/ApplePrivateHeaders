/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>
#import <TSText/TSKDocumentObject.h>
#import <TSText/TSPCopying.h>
#import <TSText/TSWPTextSpanningObject.h>

@class TSWPStorage, TSWPChangeSession, NSDate, NSString, TSUColor;

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying, TSWPTextSpanningObject> {

	TSWPStorage* _parentStorage;
	int _kind;
	TSWPChangeSession* _session;
	NSDate* _date;
	NSString* _textAttributeUUIDString;

}

@property (assign,nonatomic,__weak) TSWPStorage * parentStorage;                //@synthesize parentStorage=_parentStorage - In the implementation block
@property (nonatomic,retain) TSWPChangeSession * session; 
@property (nonatomic,copy) NSDate * date; 
@property (getter=isHidden,nonatomic,readonly) char hidden; 
@property (nonatomic,readonly) int kind;                                        //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) char isInsertion; 
@property (nonatomic,readonly) char isDeletion; 
@property (nonatomic,readonly) char showsMarkup; 
@property (nonatomic,readonly) char showsHiddenDeletionMarkup; 
@property (nonatomic,readonly) TSUColor * textMarkupColor; 
@property (nonatomic,readonly) TSUColor * changeAdornmentsColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * textAttributeUUIDString; 
-(char)isHidden;
-(NSDate *)date;
-(id)initWithContext:(id)arg1 ;
-(int)kind;
-(void)setDate:(NSDate *)arg1 ;
-(TSWPChangeSession *)session;
-(void)setSession:(TSWPChangeSession *)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(TSUColor *)textMarkupColor;
-(TSUColor *)changeAdornmentsColor;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(char)canMergeWithKind:(int)arg1 session:(id)arg2 ;
-(id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3 ;
-(void)trackedTextDidChange;
-(char)showsMarkup;
-(char)isInsertion;
-(char)isDeletion;
-(char)showsHiddenDeletionMarkup;
-(char)isFromChangeSession:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isEquivalentToObject:(id)arg1 ;
-(void)resetTextAttributeUUIDString;
-(NSString *)textAttributeUUIDString;
-(void)migrateWithDocumentRoot:(id)arg1 ;
-(void)i_setTextAttributeUUIDString:(id)arg1 ;
-(void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2 ;
@end

