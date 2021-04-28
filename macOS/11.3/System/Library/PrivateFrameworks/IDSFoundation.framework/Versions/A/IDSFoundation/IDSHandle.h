/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSURI;

@interface IDSHandle : NSObject {

	IDSURI* _URI;
	char _isUserVisible;
	long long _validationStatus;

}

@property (nonatomic,readonly) IDSURI * URI;                            //@synthesize URI=_URI - In the implementation block
@property (nonatomic,readonly) char isUserVisible;                      //@synthesize isUserVisible=_isUserVisible - In the implementation block
@property (nonatomic,readonly) long long validationStatus;              //@synthesize validationStatus=_validationStatus - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(IDSURI *)URI;
-(char)isUserVisible;
-(id)initWithURI:(id)arg1 isUserVisible:(char)arg2 validationStatus:(long long)arg3 ;
-(char)isEqualToHandle:(id)arg1 ;
-(long long)validationStatus;
@end
