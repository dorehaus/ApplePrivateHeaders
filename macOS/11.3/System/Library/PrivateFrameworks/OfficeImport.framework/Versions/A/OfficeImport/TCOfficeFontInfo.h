/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TCOfficeFontInfo : NSObject {

	char _isBold;
	char _isItalic;
	NSString* _fullName;

}

@property (nonatomic,readonly) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) char isBold;                      //@synthesize isBold=_isBold - In the implementation block
@property (nonatomic,readonly) char isItalic;                    //@synthesize isItalic=_isItalic - In the implementation block
+(id)officeFontInfoWithFullName:(id)arg1 isBold:(char)arg2 isItalic:(char)arg3 ;
-(id)description;
-(NSString *)fullName;
-(char)isBold;
-(char)isItalic;
-(id)initWithFullName:(id)arg1 isBold:(char)arg2 isItalic:(char)arg3 ;
-(id)officeName;
@end

