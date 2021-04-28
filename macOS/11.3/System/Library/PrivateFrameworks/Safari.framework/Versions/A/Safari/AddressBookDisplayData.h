/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface AddressBookDisplayData : NSObject {

	NSString* _label;
	NSArray* _values;
	NSString* _identifier;
	NSString* _property;
	NSArray* _addressBookMatches;

}

@property (nonatomic,readonly) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSArray * values;                          //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * property;                       //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSArray * addressBookMatches;              //@synthesize addressBookMatches=_addressBookMatches - In the implementation block
-(id)description;
-(NSArray *)values;
-(NSString *)identifier;
-(NSString *)label;
-(NSString *)property;
-(id)initWithLabel:(id)arg1 values:(id)arg2 identifier:(id)arg3 property:(id)arg4 ;
-(id)initWithLabel:(id)arg1 values:(id)arg2 ;
-(id)initWithLabel:(id)arg1 values:(id)arg2 identifier:(id)arg3 property:(id)arg4 addressBookMatches:(id)arg5 ;
-(NSArray *)addressBookMatches;
@end

