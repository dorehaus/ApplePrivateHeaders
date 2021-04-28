/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactCardWidgetProviderDelegate;
@interface CNContactCardWidgetProviderDelegateWrapper : NSObject {

	id<CNContactCardWidgetProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNContactCardWidgetProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNContactCardWidgetProviderDelegate>)delegate;
-(void)setDelegate:(id<CNContactCardWidgetProviderDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)widgetProvider:(id)arg1 willCreateActionsViewController:(id)arg2 ;
-(char)widgetProvider:(id)arg1 shouldIncludeSharingEnabledWarningViewController:(id)arg2 ;
@end

