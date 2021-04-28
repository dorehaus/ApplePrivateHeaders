/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSDChangeDetails.h>

@class NSString, TSWPChange, NSDate, TSKAnnotationAuthor;

@interface TSWPChangeDetails : NSObject <TSDChangeDetails> {

	TSWPChange* _change;
	NSDate* _dateForLastChangeStringUpdate;
	NSString* _changeTrackingContentString;
	NSString* _changeTrackingTitleString;
	NSString* _formattedString;

}

@property (nonatomic,retain) NSDate * dateForLastChangeStringUpdate;                      //@synthesize dateForLastChangeStringUpdate=_dateForLastChangeStringUpdate - In the implementation block
@property (nonatomic,retain) NSString * changeTrackingContentString;                      //@synthesize changeTrackingContentString=_changeTrackingContentString - In the implementation block
@property (nonatomic,retain) NSString * changeTrackingTitleString;                        //@synthesize changeTrackingTitleString=_changeTrackingTitleString - In the implementation block
@property (nonatomic,retain) NSString * formattedString;                                  //@synthesize formattedString=_formattedString - In the implementation block
@property (nonatomic,retain) TSWPChange * change;                                         //@synthesize change=_change - In the implementation block
@property (nonatomic,readonly) NSString * changeTrackingContentFormatString; 
@property (nonatomic,readonly) NSString * annotationUUID; 
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) int annotationDisplayStringType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSDate *)date;
-(TSKAnnotationAuthor *)author;
-(int)annotationType;
-(NSString *)formattedString;
-(void)setFormattedString:(NSString *)arg1 ;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
-(TSWPChange *)change;
-(void)setChange:(TSWPChange *)arg1 ;
-(id)initWithChange:(id)arg1 ;
-(int)annotationDisplayStringType;
-(char)isInDocument;
-(void)commentWillBeAddedToDocumentRoot;
-(char)isFloatingComment;
-(NSString *)annotationUUID;
-(char)isEquivalentToObject:(id)arg1 ;
-(void)p_updateChangeStrings;
-(NSDate *)dateForLastChangeStringUpdate;
-(NSRange)p_rangeInStorage;
-(void)setChangeTrackingContentString:(NSString *)arg1 ;
-(void)setChangeTrackingTitleString:(NSString *)arg1 ;
-(NSString *)changeTrackingContentFormatString;
-(void)setDateForLastChangeStringUpdate:(NSDate *)arg1 ;
-(NSString *)changeTrackingContentString;
-(NSString *)changeTrackingTitleString;
@end

