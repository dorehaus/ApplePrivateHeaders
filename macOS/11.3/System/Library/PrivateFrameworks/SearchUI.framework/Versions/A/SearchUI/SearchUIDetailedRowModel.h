/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionRowModel.h>

@class SFImage, SFButton, NSString, SFRichText, SFFormattedText, SFActionItem, NSArray, MKSearchFoundationResult;

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel {

	char _preventThumbnailImageScaling;
	char _isLocalApplicationResult;
	char _truncateTitleMiddle;
	char _secondaryTitleIsDetached;
	char _useCompactDisplay;
	char _useAlternateDetails;
	SFImage* _fallbackImage;
	SFButton* _leadingButton;
	NSString* _applicationBundleIdentifier;
	NSString* _nearbyBusinessesString;
	SFRichText* _title;
	SFFormattedText* _secondaryTitle;
	SFImage* _secondaryTitleImage;
	SFRichText* _footnote;
	NSString* _footnoteButtonText;
	SFActionItem* _action;
	SFFormattedText* _trailingTopText;
	SFFormattedText* _trailingMiddleText;
	SFFormattedText* _trailingBottomText;
	SFImage* _leadingImage;
	NSArray* _details;
	MKSearchFoundationResult* _mapsResult;
	NSArray* _alternateDetails;
	SFImage* _alternateLeadingImage;

}

@property (nonatomic,retain) SFImage * leadingImage;                       //@synthesize leadingImage=_leadingImage - In the implementation block
@property (retain) SFImage * fallbackImage;                                //@synthesize fallbackImage=_fallbackImage - In the implementation block
@property (retain) SFButton * leadingButton;                               //@synthesize leadingButton=_leadingButton - In the implementation block
@property (assign) char preventThumbnailImageScaling;                      //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (retain) NSString * applicationBundleIdentifier;                 //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (assign) char isLocalApplicationResult;                          //@synthesize isLocalApplicationResult=_isLocalApplicationResult - In the implementation block
@property (retain) NSString * nearbyBusinessesString;                      //@synthesize nearbyBusinessesString=_nearbyBusinessesString - In the implementation block
@property (retain) SFRichText * title;                                     //@synthesize title=_title - In the implementation block
@property (assign) char truncateTitleMiddle;                               //@synthesize truncateTitleMiddle=_truncateTitleMiddle - In the implementation block
@property (retain) SFFormattedText * secondaryTitle;                       //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (assign) char secondaryTitleIsDetached;                          //@synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached - In the implementation block
@property (retain) SFImage * secondaryTitleImage;                          //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (nonatomic,retain) NSArray * details;                            //@synthesize details=_details - In the implementation block
@property (retain) SFRichText * footnote;                                  //@synthesize footnote=_footnote - In the implementation block
@property (retain) NSString * footnoteButtonText;                          //@synthesize footnoteButtonText=_footnoteButtonText - In the implementation block
@property (retain) SFActionItem * action;                                  //@synthesize action=_action - In the implementation block
@property (retain) SFFormattedText * trailingTopText;                      //@synthesize trailingTopText=_trailingTopText - In the implementation block
@property (retain) SFFormattedText * trailingMiddleText;                   //@synthesize trailingMiddleText=_trailingMiddleText - In the implementation block
@property (retain) SFFormattedText * trailingBottomText;                   //@synthesize trailingBottomText=_trailingBottomText - In the implementation block
@property (retain) MKSearchFoundationResult * mapsResult;                  //@synthesize mapsResult=_mapsResult - In the implementation block
@property (assign) char useCompactDisplay;                                 //@synthesize useCompactDisplay=_useCompactDisplay - In the implementation block
@property (nonatomic,retain) NSArray * alternateDetails;                   //@synthesize alternateDetails=_alternateDetails - In the implementation block
@property (nonatomic,retain) SFImage * alternateLeadingImage;              //@synthesize alternateLeadingImage=_alternateLeadingImage - In the implementation block
@property (readonly) char truncateDetailsMiddle; 
@property (assign,nonatomic) char useAlternateDetails;                     //@synthesize useAlternateDetails=_useAlternateDetails - In the implementation block
+(char)urlIsDraggable:(id)arg1 ;
-(SFActionItem *)action;
-(void)setAction:(SFActionItem *)arg1 ;
-(void)setTitle:(SFRichText *)arg1 ;
-(SFRichText *)title;
-(NSArray *)details;
-(id)contactIdentifiers;
-(void)setDetails:(NSArray *)arg1 ;
-(id)descriptionText;
-(void)setFootnote:(SFRichText *)arg1 ;
-(SFFormattedText *)secondaryTitle;
-(void)setSecondaryTitle:(SFFormattedText *)arg1 ;
-(SFRichText *)footnote;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setIsLocalApplicationResult:(char)arg1 ;
-(char)isContact;
-(SFImage *)alternateLeadingImage;
-(NSArray *)alternateDetails;
-(char)isLocalApplicationResult;
-(void)setPreventThumbnailImageScaling:(char)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
-(void)setNearbyBusinessesString:(NSString *)arg1 ;
-(void)setTrailingTopText:(SFFormattedText *)arg1 ;
-(void)setTrailingMiddleText:(SFFormattedText *)arg1 ;
-(void)setTrailingBottomText:(SFFormattedText *)arg1 ;
-(char)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(NSString *)nearbyBusinessesString;
-(int)separatorStyle;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(void)setLeadingImage:(SFImage *)arg1 ;
-(SFImage *)leadingImage;
-(char)truncateTitleMiddle;
-(void)setTruncateTitleMiddle:(char)arg1 ;
-(char)truncateDetailsMiddle;
-(char)secondaryTitleIsDetached;
-(void)setSecondaryTitleIsDetached:(char)arg1 ;
-(NSString *)footnoteButtonText;
-(void)setFootnoteButtonText:(NSString *)arg1 ;
-(Class)customCardSectionViewClass;
-(id)punchouts;
-(id)dragURL;
-(id)dragTitle;
-(id)dragSubtitle;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(char)arg3 queryId:(unsigned long long)arg4 ;
-(char)isTappable;
-(id)dragText;
-(char)hasLeadingImage;
-(SFImage *)fallbackImage;
-(char)useCompactDisplay;
-(id)dragAppBundleID;
-(id)initWithResult:(id)arg1 suggestion:(id)arg2 queryId:(unsigned long long)arg3 ;
-(char)useAlternateDetails;
-(void)setUseCompactDisplay:(char)arg1 ;
-(id)populatedMapsCardSectionIfApplicable;
-(void)setFallbackImage:(SFImage *)arg1 ;
-(void)fillOutPropertiesForCardSection:(id)arg1 ;
-(id)richTextFromText:(id)arg1 ;
-(void)setMapsResult:(MKSearchFoundationResult *)arg1 ;
-(MKSearchFoundationResult *)mapsResult;
-(void)setLeadingButton:(SFButton *)arg1 ;
-(SFButton *)leadingButton;
-(void)setUseAlternateDetails:(char)arg1 ;
-(void)setAlternateDetails:(NSArray *)arg1 ;
-(void)setAlternateLeadingImage:(SFImage *)arg1 ;
@end

