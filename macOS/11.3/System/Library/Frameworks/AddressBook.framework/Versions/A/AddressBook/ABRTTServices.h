/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABRTTServices.h>

@protocol ABRTTServices <NSObject>
@required
-(char)isTTYEnabled;
-(char)isRTTContact:(id)arg1;
-(void)callRTTContact:(id)arg1 withPhoneNumber:(id)arg2;

@end


@class NSString;

@interface ABRTTServices : NSObject <ABRTTServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isRTTContact:(id)arg1 ;
+(void)callRTTContact:(id)arg1 withPhoneNumber:(id)arg2 ;
-(char)isTTYEnabled;
-(char)isRTTContact:(id)arg1 ;
-(void)callRTTContact:(id)arg1 withPhoneNumber:(id)arg2 ;
@end
