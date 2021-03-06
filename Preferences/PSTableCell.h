@class PSSpecifier;

typedef NS_ENUM(NSInteger, PSCellType) {
	PSGroupCell,
	PSLinkCell,
	PSLinkListCell,
	PSListItemCell,
	PSTitleValueCell,
	PSSliderCell,
	PSSwitchCell,
	PSStaticTextCell,
	PSEditTextCell,
	PSSegmentCell,
	PSGiantIconCell,
	PSGiantCell,
	PSSecureEditTextCell,
	PSButtonCell,
	PSEditTextViewCell
};

@interface PSTableCell : UITableViewCell

+ (PSCellType)cellTypeFromString:(NSString *)cellType;

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier specifier:(PSSpecifier *)specifier;

- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)specifier;

@property (nonatomic, retain) PSSpecifier *specifier;
@property (nonatomic, retain) id target;
@property SEL action;

@property (nonatomic, retain) id cellTarget;
@property SEL cellAction;

@property BOOL cellEnabled;

@property (nonatomic, retain) UIImage *icon;

- (UIImage *)getLazyIcon;

@property (nonatomic, retain, readonly) UIImage *blankIcon;
@property (nonatomic, retain, readonly) NSString *lazyIconAppID;

@property (nonatomic, retain, readonly) UILabel *titleLabel;

@end
