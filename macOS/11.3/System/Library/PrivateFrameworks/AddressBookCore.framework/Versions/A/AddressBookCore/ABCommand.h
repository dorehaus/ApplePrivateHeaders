/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABAddressBook;

@interface ABCommand : NSObject {

	char _save;
	ABAddressBook* _addressBook;

}
+(id)bundle;
-(id)init;
-(char)save;
-(id)_undoManager;
-(id)initWithAddressBook:(id)arg1 ;
-(id)addressBook;
-(void)undoIt;
-(void)redoIt;
-(char)doIt;
-(id)undoer;
-(void)setSave:(char)arg1 ;
-(char)performWithActionName:(id)arg1 ;
@end
