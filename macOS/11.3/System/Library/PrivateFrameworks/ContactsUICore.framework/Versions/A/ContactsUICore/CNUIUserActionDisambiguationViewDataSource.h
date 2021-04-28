/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/CNUIUserActionListDataSource.h>
#import <libobjc.A.dylib/CNUIUserActionDisambiguationViewDataSource.h>

@protocol CNUIUserActionDisambiguationViewDataSource <CNUIUserActionListDataSource>
@required
-(id)categoriesForContactActionsView:(id)arg1;
-(id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2;

@end


@class NSString;

@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource <CNUIUserActionDisambiguationViewDataSource>

@property (assign,nonatomic) char tracksChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)categoriesForContactActionsView:(id)arg1 ;
-(id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2 ;
@end

