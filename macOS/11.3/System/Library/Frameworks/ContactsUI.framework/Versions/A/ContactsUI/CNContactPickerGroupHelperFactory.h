/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABGroupHelperFactory.h>

@class CNContactPickerScope, NSString;

@interface CNContactPickerGroupHelperFactory : NSObject <ABGroupHelperFactory> {

	CNContactPickerScope* _pickerScope;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)makeDropHelper:(id)arg1 ;
-(id)makeCopyHelper:(id)arg1 ;
-(id)makeCutHelper:(id)arg1 ;
-(id)makePasteHelper:(id)arg1 ;
-(id)makeCreateHelper:(id)arg1 ;
-(id)makeRenameHelper:(id)arg1 ;
-(id)makeDeleteHelper:(id)arg1 ;
-(id)makeDragHelper:(id)arg1 ;
-(id)makeBrowsingSelectHelper:(id)arg1 ;
-(id)makeSearchingSelectHelper:(id)arg1 ;
-(id)makeSectionSelectHelperWithIdentifier:(id)arg1 ;
-(id)makeCreateSmartGroupHelper;
-(id)makeCreateSmartGroupFromSearchHelper;
-(id)makeEditSmartGroupHelper:(id)arg1 ;
-(id)makeImportFilesHelper:(id)arg1 showImportConfirmation:(char)arg2 ;
-(id)initWithPickerScope:(id)arg1 ;
@end

