/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetMutedCallAction : CXCallAction {

	char _muted;

}

@property (assign,getter=isMuted,nonatomic) char muted;              //@synthesize muted=_muted - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMuted:(char)arg1 ;
-(char)isMuted;
-(id)customDescription;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)initWithCallUUID:(id)arg1 muted:(char)arg2 ;
@end
