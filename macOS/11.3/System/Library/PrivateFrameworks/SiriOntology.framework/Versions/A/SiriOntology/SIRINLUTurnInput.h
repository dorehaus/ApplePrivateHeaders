/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/Versions/A/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SIRINLUTurnInput : NSObject <NSSecureCoding> {

	NSArray* _asrOutputs;
	NSArray* _systemDialogActs;
	NSArray* _activeTasks;
	NSArray* _executedTasks;
	NSArray* _salientEntities;

}

@property (nonatomic,retain) NSArray * asrOutputs;                    //@synthesize asrOutputs=_asrOutputs - In the implementation block
@property (nonatomic,retain) NSArray * systemDialogActs;              //@synthesize systemDialogActs=_systemDialogActs - In the implementation block
@property (nonatomic,retain) NSArray * activeTasks;                   //@synthesize activeTasks=_activeTasks - In the implementation block
@property (nonatomic,retain) NSArray * executedTasks;                 //@synthesize executedTasks=_executedTasks - In the implementation block
@property (nonatomic,retain) NSArray * salientEntities;               //@synthesize salientEntities=_salientEntities - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)asrOutputs;
-(NSArray *)systemDialogActs;
-(NSArray *)activeTasks;
-(NSArray *)executedTasks;
-(NSArray *)salientEntities;
-(id)initWithAsrOutputs:(id)arg1 systemDialogActs:(id)arg2 activeTasks:(id)arg3 executedTasks:(id)arg4 salientEntities:(id)arg5 ;
-(void)setAsrOutputs:(NSArray *)arg1 ;
-(void)setSystemDialogActs:(NSArray *)arg1 ;
-(void)setActiveTasks:(NSArray *)arg1 ;
-(void)setExecutedTasks:(NSArray *)arg1 ;
-(void)setSalientEntities:(NSArray *)arg1 ;
@end

