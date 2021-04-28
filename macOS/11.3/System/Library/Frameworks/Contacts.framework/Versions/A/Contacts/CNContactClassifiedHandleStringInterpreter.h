/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNHandleStringClassification, NSMutableArray, NSArray;

@interface CNContactClassifiedHandleStringInterpreter : NSObject {

	char _hasBeenInterpreted;
	CNHandleStringClassification* _classification;
	NSMutableArray* _emailAddressesImpl;
	NSMutableArray* _phoneNumbersImpl;
	NSMutableArray* _unconvertableHandles;

}

@property (nonatomic,readonly) CNHandleStringClassification * classification;              //@synthesize classification=_classification - In the implementation block
@property (nonatomic,readonly) NSMutableArray * emailAddressesImpl;                        //@synthesize emailAddressesImpl=_emailAddressesImpl - In the implementation block
@property (nonatomic,readonly) NSMutableArray * phoneNumbersImpl;                          //@synthesize phoneNumbersImpl=_phoneNumbersImpl - In the implementation block
@property (nonatomic,readonly) NSMutableArray * unconvertableHandles;                      //@synthesize unconvertableHandles=_unconvertableHandles - In the implementation block
@property (assign,nonatomic) char hasBeenInterpreted;                                      //@synthesize hasBeenInterpreted=_hasBeenInterpreted - In the implementation block
@property (readonly) NSArray * emailAddresses; 
@property (readonly) NSArray * phoneNumbers; 
-(id)description;
-(id)init;
-(NSArray *)phoneNumbers;
-(NSArray *)emailAddresses;
-(id)initWithHandleStringClassification:(id)arg1 ;
-(void)interpretEmailAddresses;
-(void)interpretPhoneNumbers;
-(void)interpretUnknownsAsEmailAddresses;
-(void)setHasBeenInterpreted:(char)arg1 ;
-(void)interpretValues;
-(CNHandleStringClassification *)classification;
-(NSMutableArray *)emailAddressesImpl;
-(NSMutableArray *)phoneNumbersImpl;
-(NSMutableArray *)unconvertableHandles;
-(char)hasBeenInterpreted;
@end

