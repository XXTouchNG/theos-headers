@class SBAwayView;

@interface SBAwayController : NSObject

+ (instancetype)sharedAwayController;

- (void)undim;

@property (nonatomic, retain) SBAwayView *awayView;

@end
