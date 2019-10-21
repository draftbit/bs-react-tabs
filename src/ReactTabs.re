module Tab = {
  [@bs.module "react-tabs/lib/components/Tab"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~disabled: bool=?,
      ~tabIndex: string=?,
      ~disabledClassName: string=?,
      ~selectedClassName: string=?,
      ~children: React.element
    ) =>
    React.element =
    "default";
};

module Tabs = {
  [@bs.module "react-tabs/lib/components/Tabs"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~defaultFocus: bool=?,
      ~defaultIndex: int=?,
      ~selectedIndex: int=?,
      ~onSelect: int => unit=?,
      ~disabledTabClassName: string=?,
      ~selectedTabClassName: string=?,
      ~children: React.element
    ) =>
    React.element =
    "default";
};

module TabList = {
  [@bs.module "react-tabs/lib/components/TabList"] [@react.component]
  external make:
    (~className: string=?, ~children: React.element) => React.element =
    "default";
};

module TabPanel = {
  [@bs.module "react-tabs/lib/components/TabPanel"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~selectedClassName: string=?,
      ~children: React.element
    ) =>
    React.element =
    "default";
};
