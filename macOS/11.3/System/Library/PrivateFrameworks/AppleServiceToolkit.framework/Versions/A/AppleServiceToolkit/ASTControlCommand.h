/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/Versions/A/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface ASTControlCommand : NSObject <NSSecureCoding, NSCopying> {

	char _forceSequential;
	char _haltOnError;
	NSMutableDictionary* _actionStorage;

}

@property (assign,nonatomic) char forceSequential;                             //@synthesize forceSequential=_forceSequential - In the implementation block
@property (assign,nonatomic) char haltOnError;                                 //@synthesize haltOnError=_haltOnError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionStorage;              //@synthesize actionStorage=_actionStorage - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)reset;
-(id)requestData;
-(void)setForceSequential:(char)arg1 ;
-(void)setHaltOnError:(char)arg1 ;
-(NSMutableDictionary *)actionStorage;
-(char)forceSequential;
-(char)haltOnError;
-(void)setActionStorage:(NSMutableDictionary *)arg1 ;
-(id)requestWithData:(id)arg1 session:(id)arg2 queue:(id)arg3 ;
-(void)performActionsWithSession:(id)arg1 queue:(id)arg2 ;
-(void)updateAction:(id)arg1 ;
-(char)allActionsFinished;
@end

