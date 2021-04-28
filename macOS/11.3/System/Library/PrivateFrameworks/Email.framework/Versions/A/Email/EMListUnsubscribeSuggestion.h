/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGSuggestion.h>
#import <libobjc.A.dylib/SGSuggestionCategory.h>

@protocol SGSuggestionDelegate;
@class EMListUnsubscribeCommand, SGSuggestionPresenter, NSString;

@interface EMListUnsubscribeSuggestion : NSObject <SGSuggestion, SGSuggestionCategory> {

	id<SGSuggestionDelegate> suggestionDelegate;
	EMListUnsubscribeCommand* _listUnsubscribeCommand;
	SGSuggestionPresenter* _suggestionPresenter;

}

@property (nonatomic,retain) EMListUnsubscribeCommand * listUnsubscribeCommand;               //@synthesize listUnsubscribeCommand=_listUnsubscribeCommand - In the implementation block
@property (assign,nonatomic,__weak) SGSuggestionPresenter * suggestionPresenter;              //@synthesize suggestionPresenter=_suggestionPresenter - In the implementation block
@property (nonatomic,readonly) id<SGSuggestion> suggestion; 
@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionPrimaryActionString;
+(id)suggestionDismissActionTitle;
+(id)unsubscribeTitleAlertString;
+(id)unsubscribeMessageAlertString;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)ignore;
-(id<SGSuggestion>)suggestion;
-(void)unsubscribe;
-(EMListUnsubscribeCommand *)listUnsubscribeCommand;
-(id)suggestionCategoryTitle;
-(id)suggestionTitle;
-(SGSuggestionPresenter *)suggestionPresenter;
-(id)suggestionCategory;
-(id)suggestionPrimaryAction;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(id)suggestionDismissAction;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryTitleForItems:(id)arg1 ;
-(id)suggestionCategorySubtitleForItems:(id)arg1 ;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg1 ;
-(/*^block*/id)suggestionComparator;
-(void)setListUnsubscribeCommand:(EMListUnsubscribeCommand *)arg1 ;
-(void)setSuggestionPresenter:(SGSuggestionPresenter *)arg1 ;
@end
