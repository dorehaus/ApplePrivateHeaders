/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIUserAction.h>

@interface TIPathAction : TIUserAction {

	unsigned long long _syllableCount;

}

@property (nonatomic,readonly) unsigned long long syllableCount;              //@synthesize syllableCount=_syllableCount - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)syllableCount;
-(id)initWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2 ;
@end

