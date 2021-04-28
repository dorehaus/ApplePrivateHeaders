/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMFileAttachment.h>

@interface REMImageAttachment : REMFileAttachment {

	unsigned long long _width;
	unsigned long long _height;

}

@property (assign,nonatomic) unsigned long long width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;              //@synthesize height=_height - In the implementation block
+(char)supportsSecureCoding;
+(id)cdEntityName;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(id)_deepCopy;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7 width:(unsigned long long)arg8 height:(unsigned long long)arg9 ;
@end

