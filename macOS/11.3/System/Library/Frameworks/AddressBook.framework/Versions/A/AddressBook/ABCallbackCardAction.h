/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/ABActionDelegate.h>

@class NSString;

@interface ABCallbackCardAction : NSObject <ABActionDelegate> {

	SCD_Struct_AB9* _callbacks;

}

@property (readonly) NSString * actionProperty; 
-(id)initWithCallbacks:(SCD_Struct_AB9*)arg1 ;
-(id)unlocalizedTitle;
-(id)titleForPerson:(id)arg1 identifier:(id)arg2 ;
-(void)performActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(NSString *)actionProperty;
-(char)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2 ;
@end

