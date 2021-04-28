/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABCardViewStyleProvider;

@interface ABCollectionRowViewFactory : NSObject {

	char _shouldFormatURLs;
	char _shouldBuildActionGlyphs;
	ABCardViewStyleProvider* _styleProvider;

}

@property (assign,nonatomic) char shouldFormatURLs;                                //@synthesize shouldFormatURLs=_shouldFormatURLs - In the implementation block
@property (assign,nonatomic) char shouldBuildActionGlyphs;                         //@synthesize shouldBuildActionGlyphs=_shouldBuildActionGlyphs - In the implementation block
@property (nonatomic,retain) ABCardViewStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
+(id)infoButtonNamedImageWrapper;
-(id)init;
-(ABCardViewStyleProvider *)styleProvider;
-(void)setShouldFormatURLs:(char)arg1 ;
-(void)setShouldBuildActionGlyphs:(char)arg1 ;
-(void)setStyleProvider:(ABCardViewStyleProvider *)arg1 ;
-(void)buildStackViewForRowView:(id)arg1 ;
-(void)buildAddRemoveControlsForRowView:(id)arg1 ;
-(void)buildValueViewForRowView:(id)arg1 ;
-(void)buildPrivacyCheckboxForRowView:(id)arg1 ;
-(void)buildFocusRingViewForRowView:(id)arg1 ;
-(void)buildLabelViewForRowView:(id)arg1 ;
-(void)applyHuggingAndCompressionSettingsToValueView:(id)arg1 ;
-(id)postalAddressRowViewForItem:(id)arg1 ;
-(id)alertToneRowViewForItem:(id)arg1 ;
-(void)buildActionGlyphsForRowView:(id)arg1 ;
-(void)buildMessagingServiceViewForRowView:(id)arg1 ;
-(void)buildURLFormattingValueViewForRowView:(id)arg1 ;
-(void)buildPreferredNameValueViewForRowView:(id)arg1 ;
-(void)buildSuggestedGlyphForRowView:(id)arg1 ;
-(id)messagingRowViewForItem:(id)arg1 ;
-(id)urlRowViewForItem:(id)arg1 ;
-(id)noteRowViewForItem:(id)arg1 ;
-(id)linkedPeopleRowViewForItem:(id)arg1 ;
-(id)preferredNameRowViewForItem:(id)arg1 ;
-(id)faceTimeRowViewForItem:(id)arg1 ;
-(id)genericRowViewForItem:(id)arg1 ;
-(void)buildCommonViewsForRowView:(id)arg1 ;
-(char)shouldFormatURLs;
-(void)buildNoteValueViewForRowView:(id)arg1 ;
-(void)buildSimpleLinkedTextFieldForRowView:(id)arg1 ;
-(id)buildActionGlyphNamed:(id)arg1 ;
-(id)glyphNamedImageWrapperWithName:(id)arg1 ;
-(id)accessibilityTitleForGlyphName:(id)arg1 ;
-(id)rowViewForItem:(id)arg1 ;
-(char)shouldBuildActionGlyphs;
@end

